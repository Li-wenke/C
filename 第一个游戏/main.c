#include <stdio.h>
#include <stdlib.h>
#define Max 6
#include <string.h> //支持字符串操作
int main()
{
    int z = 0;
    int i = 0 , temp ,j;  //循环变量
    //使用字符数组表示字符
    char emperorName[10];
    int count = 5;      //当前为打入冷宫的嫔妃个数
    int choice;         //皇帝的选择
    int searchindex = -1; //用来存放查找到元素的下标
    char tempnames[20]; //用来存放临时字符串的字符数组
    char names[Max][20] = {"西施","貂蝉","杨玉环","王昭君","虞姬"};//嫔妃名称数组
    //嫔妃的级别数组
    char levelNames[5][10] = {"贵人","嫔妃","贵妃","皇贵妃","皇后"};
    //用来存放每位妃子的级别，每个数组元素对应每个妃子当前的级别
    int levels [Max] = {1,1,0,0,4,-1};
    int loves [Max] = {100,100,100,100,100,-1};//loves数组的每个元素对应每个妃子的好感度,初始情况，每个人的好感度都是100

    printf("请输入当前登基的皇帝名号:");
    scanf("%s",emperorName);//录入字符串时，不需要&符号
    printf("当前皇帝是:%s,万岁万岁万万岁！\n",emperorName);

    printf("************************************************************\n");
    printf("测试代码：查看当前嫔妃的状态\n");
    printf("%-12s\t级别\t好感度\n","姓名");
    for(i = 0; i < count; i++)
    {
        printf("%-12s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }
    printf("************************************************************\n");
    while( z < 10)
    {
    printf("1、皇帝下旨选妃：\t\t(增加功能） \n");
    printf("2、翻牌宠幸:\t\t\t(修改状态功能）\n");
    printf("3、打入冷宫:\t\t\t(删除功能)\n");
    printf("4、单独召见爱妃:\n");
    printf("陛下请选择：");
    scanf("%d",&choice);

        switch(choice)
    {
    case 1 ://1、皇帝下旨选妃：\t\t(增加功能） \n
           //1.增加前需要判断数组有没有空间
           //2.增加数组元素(names、loves、levels

         if(count < Max)
         {
             //执行添加操作
             printf("陛下，请下旨选妃：");
             scanf("%s",names[count]);
             //将每个元素初始化
             loves[count] = 100;
             levels[count] = 0;
             count ++;
         }
         else
         {
             printf("陛下，请保重龙体！ \t 选妃失败!\n");
         }
        break;
    case 2 ://2、翻牌宠幸:\t\t\t(修改状态功能）
           //1、找到要宠幸的妃子下标
           //2、修改这个妃子的状态 好感度 +10 级别+1 升级到最高级将不再升级
           //3、修改其他妃子的状态 其他妃子好感度-10
           //需要解决的BUG：为支持姓名不存在的情况
        printf("陛下，请选择今晚要翻牌的妃子名讳：");
        scanf("%s",tempnames);
        //字符串的查找strcmp 要引入string.h头文件
        //strcmp(tempnames,"abc")==0 表示两个字符串相等; 1 :前一个大于后面一个 -1 ：前一个小于后一个
        for(i = 0; i < count; i++)
        {
            if(strcmp(tempnames,"names[i]") == 0)
            {
                loves[i] += 10;
                //级别要注意，不能超过5级
                levels [i] = levels[i] > 4 ? 4 : levels[i] + 1;
            }
            else
            {
                loves[i] -= 10;
            }
        }
        break;
    case 3 ://3、打入冷宫:\t\t\t(删除功能
           //1.查找
           //2.后面一个赋值给前面一个元素
           //3.总数--
           //修改其他妃子的状态 好感度+10
        printf("陛下，请输入要打入冷宫的姓名：");
        scanf("%s",tempnames);
        //循环查找
        for(i = 0; i < count; i++)
        {
            if(strcmp(tempnames,names[i]) == 0)//比较字符串是否找到
            {
                //记录下要查找的下标
                searchindex = i;
                break;
            }
        }
        if(-1 == searchindex)//如果searchindex的值为初值-1，表示未找到
        {
            printf("虚惊一场，无人打入冷宫！");
        }
        else
        {
            for(i = searchindex ; i < count -1 ; i++)
            {
                //names[i] = names[i+1];因为是字符串，C语言中不支持数组的直接赋值
                //需要用strcppy 函数实现数组赋值
                strcpy(names[i],names[i + 1]);
                loves[i] = loves [i+1];
                levels[i] = levels[i+1];
            }
            count --;
        }
        break;
    case 4://单独召见
        //查找
        //增加好感度即可
        //可以使用数组设计诗歌，用随机数字的方式，表现皇帝的文采
        printf("陛下，请输入要单独召见的妃子：");
        scanf("%s",tempnames);
        for(i = 0 ; i < count; i++)
       {
           if(strcmp(tempnames,names[i])== 0)
           {
                loves[i] += 10;
           }
       }
        break;
    default :
        printf("君无戏言，陛下请再次确认！");

    }
    //最后打印所有妃子状态前，以级别进行排序，使用冒泡排序
    for(i = 0 ; i < count -1 ; i++)
    {
        for(j = 0 ; j< count -i-1;j++)
        {
            if(levels [j] < levels[j+1])
            {
                //需要交换姓名、级别、好感度
                temp = levels[j];
                levels[j] = levels[j+1];
                levels[j+1] = temp;
                temp = loves[j];
                loves[j] = loves[j+1];
                loves[j+1] = temp;
                //注意字符串的交换
                strcpy(tempnames,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempnames);
            }
        }
    }
    printf("************************************************************\n");
    printf("测试代码：查看当前嫔妃的状态\n");
    printf("%-12s\t级别\t好感度\n","姓名");
    for(i = 0; i < count; i++)
    {
        printf("%-12s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }
    printf("************************************************************\n");
    z++;
    }
    return 0;
}
