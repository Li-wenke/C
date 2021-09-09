#include <stdio.h>
int main()
{
    /*int i,j;
    for(i=0;i<9;i++)
        {
        for(j=0;j<10;j++)
        {
            if(i==0||i==8||j==0||j==9)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
       }*/
    /*double h,s;
        printf("请输入当前的华氏度:");
        scanf("%lf",&h);
        s=5/9.0*(h-32);
        printf("\n当前的摄氏度:%lf",s);*/
    /*动态录入成绩*/
    /*double score[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("请输入第%d位同学的成绩:",i+1);
        scanf("%lf",&score[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("第%d位同学的成绩:%.2lf\n",i+1,score[i]);
    }*/
    /*有一个数列：8，4，2，1，23，344，12
        循环输出数列的值
        求数列中所有数值的和及平均值
        猜数游戏：从键盘中任意输入一个数字，判断数列中是否包含此数字
    int nums[]={8,4,2,1,23,344,12};//定义数组
    int i;//循环变量
    int sum=0;//求和
    double P;//求平均值
    int searchnums;//查找数字
    printf("输出数组元素：\n");
    for(i=0;i<7;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n***********************************************************\n");
    for(i=0;i<7;i++)
    {
        sum+=nums[i];//经典累加
    }
    P=sum/7.0;
    printf("\t和是：%d\t平均值是:%.2lf",sum,P);
    printf("\n***********************************************************\n");
    printf("请输入要查找的数字:");
    scanf("%d",&searchnums);
    for(i=0;i<7;i++)
    {
        if(searchnums==nums[i])
        {
            printf("判断正确，此数字在数列中!\n");
            break;
        }

    }
     //循环结束后，如何判断是否找到了？？？
     //循环正常跳出时，i的值应该为7
    if(i==7)
            {
                printf("茫茫人海，无此人！\n");
            }*/
     /*int nums[N]={16,25,9,90,23};
     int i,j;
     int temp;//用来的交换的临时变量
     for(i=0;i<N-1;i++)//外层循环控制轮数
     {
         for(j=0;j<N-i-1;j++)//内层循环控制每轮比较的次数
         {
             //如果当前值小于后面的一个值就交换
             if(nums[j]<nums[j+1])
             {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
             }

         }
     }
     printf("排序后的结果是: \n");
     for(i=0;i<N;i++)
     {
         printf("%d\t",nums[i]);
     }
     for(i=0;i<N-1;i++)//外层循环控制轮数
     {
         for(j=0;j<N-i-1;j++)//内层循环控制每轮比较的次数
         {
             //如果当前值小于后面的一个值就交换
             if(nums[j]>nums[j+1])
             {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
             }

         }
     }
     printf("排序后的结果是: \n");
     for(i=0;i<N;i++)
     {
         printf("%d\t",nums[i]);
     }
     for(i=0;i<N/2;i++)
     {
         temp=nums[i];
         nums[i]=nums[N-i-1];
         nums[N-i-1]=temp;
     }
     for(i=0;i<N;i++)
     {
         printf("%d\t",nums[i]);
     }*/
     /*int sz[8]={18,25,7,36,13,2,89,63};
     int i,j,min;
     min=sz[0];
     for(i=0;i<8;i++)
     {
        if(min>sz[i])
        {
            min=sz[i];
            j=i;
        }
     }
     printf("最小:%d 下标:%d\n",min,j);*/
     /*printf("#预处理\n");
     printf("include 包含\n");
     printf("standard 标准\n");
     printf("input 输入\n");
     printf("output 输出\n");
     printf("head 头部\n");
     printf("void 空的\n");
     printf("mian 主要的\n");*/
     /*printf("int 整型\n");
     printf("short 短整型\n");
     printf("long 长整型\n");
     printf("float 单精度浮点型\n");
     printf("double 双精度浮点型\n");
     printf("scanf 扫描\n");
     printf("getchar 获取字符\n");
     printf("putchar 输出字符\n");*/
     /*int a,b,c;
     printf("请输入要交换的两个数:");
     scanf("%d %d",&a,&b);
     printf("要交换的数字是:%d\t%d\n",a,b);
      c=a;
      a=b;
      b=c;
      printf("交换后的两个数是:%d\t%d\n",a,b);*/
     /* double a;//基本工资
      double b;//物价补贴
      double c;//房租津贴
      double d;//实领工资
      printf("请输入基本工资：");
      scanf("%lf",&a);
      b=a*0.4;
      c=a*0.2;
      d=a+b+c;
      printf("实际总工资为:%7.2lf",d);*/
    /*char a;//定义个变量
    printf("请输入一个字符:");
    scanf("%c",&a);
    printf("%c",a-32);*/
    /*int l,k,s,c;//定义四个变量
    printf("请输入矩形的长和宽：");
    scanf("%d %d",&l,&k);
    c=(l+k)*2;
    s=l*k;
    printf("矩形的面积及周长为：%d %d",s,c);*/
     /*int a,b,c,x;
     printf("请输入三个整型数字:");
     scanf("%d %d %d",&a,&b,&c);
     printf("%d %d %d\n",a,b,c);
     if(a>b)
     {
         x=a;
         a=b;
         b=x;
     }
     if(a>c)
     {
         x=c;
         c=a;
         a=x;
     }
     if(b>c)
     {
         x=b;
         b=c;
         c=x;
     }
     printf("%d %d %d",a,b,c);*/
     /*double a,b,c;//定义商品价格变量
     char ch;//定义会员变量;
     double d;//总价格变量
     double total;//总价格
     double pay;//最后的价格
     double Z;//折扣;
     printf("是否为会员？(y/n)");
     fflush(stdin);
     scanf("%c",&ch);
     printf("三件商品的价格是：");
     scanf("%lf %lf %lf",&a,&b,&c);
     total=a+b+c;
     Z=0;
     if(ch=='y'&&total>=100)
     {
         Z=total*0.1;
     }
     if(ch=='y'&&total>=100)
     {
         Z=total*0.2;
     }
     pay=total-Z;
     printf("\n总金额=%1.2f元\n",total);
     printf("\n折扣金额=%1.2f元\n",Z);
     printf("\n应付总额=%1.2f元\n",pay);*/
     /*double max;
     int l;
     printf("请输入玩家的力量:");
     scanf("%d",&l);
     max = 256 * (l + 100) / 100;
     printf("武器实际最大伤害为:%lf",max);*/
     //fflush(stdin)清空缓存区
     /*int day;
    /* printf("请问今天星期几？");
     scanf("%d",&day);
     switch(day)
     {
        case 1:
            printf("工作日愉快！");
            break;
        case 2:
            printf("工作日愉快！");
            break;
        case 3:
            printf("工作日愉快！");
            break;
        case 4:
            printf("工作日愉快！");
            break;
        case 5:
            printf("工作日愉快！");
            break;
        case 6:
            printf("周末愉快！");
            break;
        case 7:
            printf("周末愉快！");
            break;
        default:
            printf("请输入位于1-7之间的数");
     }*/
    /*int i=1,sum=0;
    while(i<=100)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);*/
    /*int i = 0;
    int password;

    while(i<3)
    {
        printf("请输入密码：");
        scanf("%d",&password);
        if(123456 != password)
        {
            printf("密码错误！\n");
        }
        if(i == 1)
        {
            printf("密码错误两次，退出系统！");
            break;
        }
            i++;
    }*/
    /*int year = 2015;
    double money = 800;
    while(money<2000)
    {
        money *= 1.25;
        year++;
    }
    printf("%d",year);*/
    //随机函数 srand   rand
    /*srand((unsigned)time(NULL));
    printf("随机数字：%d\n",rand());
    int hp1 = 100;
    int hp2 = 100;
    int att1 , att2;
    int i = 0;
    while(hp1 > 0 && hp2 > 0)
    {
        att1 = rand() % 11 +5;
        if(att1 == 15)
            att1 *= 2;
        att2 = rand() % 11 +5;
        if(att2 == 15)
            att2 *= 2;
        hp2 -= att1;
        hp1 -= att2;
        if(hp1 < 0 || hp2 < 0)
        {
            break;
        }
        printf("*****************************************\n");
        printf("第%d轮:\n",i+1);
        printf("玩家1攻击力:%d\t玩家2剩余血量:%d \n",att1,hp2);
        printf("玩家2攻击力:%d\t玩家1剩余血量:%d \n",att2,hp1);
        printf("*****************************************\n");
        i++;
        Sleep(400);
    }
    printf("Ko! 玩家1血量：%d 玩家2血量：%d",hp1,hp2);*/
    /*int sum = 0;
    int i,n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    if(n > 0)
    {
     while(n>0)
     {
         sum += n;
         n--;
     }
     printf("递减相加和为：%d",sum);
    }
    else
    {
        printf("请输入整数！\n");
    }*/
    /*int n ;
    int sum = 0 ,i;
    printf("请输入一个数字：");
    scanf("%d",&n);
    do{
        i = n % 10;
        sum += i;
        n /=10;
    }while(n > 0);
    printf("各个位数字之和：%d",sum);*/
    /*int a = 1,b = 10;
    do{
        b -= a;
        a++;
    }while(b -- < 0);
    printf("%d",b);*/
    /*int choice; //定义用户的选择变量
    printf("性格测试：\n");
    printf("如果你是一位君王，对于身旁的伴侣您希望？\n");
    printf("1、只要有一位真爱的妻子。\n");
    printf("2、可以两位以上的爱人.\n");
    printf("3、后宫佳丽三千!\n");
    do{
        printf("请选择:");
        scanf("%d",&choice);
        if(choice <=0 || choice >3)
        {
            printf("只能输入1-3的数字，请重新输入!\n");
        }
    }while(choice <= 0 || choice > 3);
     switch (choice)
     {
      case 1 :
        printf("您选择的生命中的唯一\n");
        break;
      case 2 :
        printf("快枪手\n");
        break;
      case 3 :
        printf("快快枪手\n");
        break;
     }*/
    /* int num = 12345678;
     //将4位数的每一位都取出来
     printf("个位：%d\n", num % 10);
     printf("十位：%d\n", num /10 %10);
     printf("百位：%d\n", num /100 %10);
     printf("千位: %d\n", num /1000 % 10);
     int temp;
     while (num > 0)
     {
         printf("%d\n",num % 10);
         num /= 10;
     }*/
    /*int value,right_num;
    value = 0;
    do{
        printf("请输入一个数：\n");
        scanf("%d",&value);
        if( value <= 0)
        {
            printf("必须要为正数！\n");
        }
    }while(value <= 0);
    printf("\n反转后的数字:");
    do {
        right_num = value % 10;
        printf("%d",right_num);
        value = value / 10;
    }while( value != 0);
    printf("\n");*/
    /* int i = 0;
    int y = 1;
    while( i < 9)
    {
        y = (y + 1) * 2;
        i++;
    }
    printf("%d",y);*/
    //简易加法
    /* int num ;
    int i;
    printf("请输入一个数字:");
    scanf("%d",&num);
    for(i = 0; i < num; i++)
    {
        printf("%d + %d = %d",i , (num -i),num );
        if( i % 2 == 0)
        {
            printf("\t");
        }
        else{printf("\n");}
    }*/
    /* //数组的删除
    int i,j;                     //定义循环变量
    int temp;
    int count = 5;             //定义数组的个数
    double deletepowers;       //定义要删除的战力值
    int deleteindex = -1;      //定义要删除的战力值的下标,要给一个不可能的初值
    double insertpower;        //定义新插入的战力值
    double powers[] ={42322, 45771,40907,41234,40767};
    printf("请输入要删除的战力值：");
    scanf("%lf",&deletepowers);
    for(i = 0; i < count; i++)
    {
        if(deletepowers == powers[i])
        {
                //记录当前的下标
                deleteindex = i;
                break; //找到要删除的战力值，直接跳出循环
        }
    }
    //根据判断(是否找到)，执行后续的操作
    if(-1 == deleteindex)
    {
        printf("很遗憾没有找到该战力值\n");
    }
    else
    {
        for(i = deleteindex ; i < count -1;i++)
        {
            powers[i] = powers[i + 1];
        }
          count --;
    }
    printf("删除后的结果是：\n");
    for(i = 0; i < count ; i++)
    {
        printf("%.1f\t",powers[i]);
    }
    //插入战力值
    printf("\n请输入要插入的战力值:");
    scanf("%lf",&insertpower);
    powers[count] = insertpower;
    count ++;
    for(i = 0; i < count; i++)
    {
        printf("%.1lf\t",powers[i]);
    }
    for(i=0;i<count - 1;i++)//外层循环控制轮数
     {
         for(j=0;j<count-i-1;j++)//内层循环控制每轮比较的次数
         {
             //如果当前值小于后面的一个值就交换
             if(powers[j] < powers[j+1])
             {
                temp=powers[j];
                powers[j]=powers[j+1];
                powers[j+1]=temp;
             }

         }
     }
     printf("\n从大到小排序后的结果是: \n");
     for(i=0;i<count;i++)
     {
         printf("%.1lf\t",powers[i]);
     }
     for(i = 0; i< count -1; i++)
     {
         for(j = 0 ;j < count - i -1 ;j++)
         {
             if(powers[j] > powers[j+1])
             {
                 temp = powers[j];
                 powers[j] = powers[j+1];
                 powers[j+1] = temp;
             }
         }
     }
     printf("\n从小到大排序后的结果是：\n");
     for(i = 0; i < count ; i++)
     {
         printf("%.1lf\t",powers[i]);
     }
    */
     /* 动态录入二维数组
    double siz[3][3];
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("第%d位同学的第%d门成绩：",i+1,j+1);
            scanf("%lf",&siz[i][j]);
        }
    }
    //打印成绩
    for(i = 0; i< 3;i++)
    {
        for(j = 0; j < 3;j++)
        {
            printf("%.2lf\t",siz[i][j]);
        }
        printf("\n");
    }
    */
    //指针
    /*int a;
    printf("请输入要判断的数字");
    scanf("%d",&a);
    if(a%3 == 0 || a%5 == 0)
    {
        printf("该数字是3或者5的倍数!");
    }*/
    /* int i ;
    for(i = 0; i <= 100;i++)
    {
        if(i % 3 ==0 &&i % 5 ==0 )
        {
            printf("\tFlipFlop\t");
        }
        else if(i % 3 == 0)
        {
            printf("\tFlip\t");
        }
        else if(  i % 5 == 0)
        {
            printf("\tFlop\t");
        }
        else
        {
            printf("\t%d",i);
        }
    }
    */
    /*
    int i ;
    int j = 0;
    int sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 3 != 0)
        {
            printf("%d\t",i);
            sum += i;
        }
        else
        {
            continue;
        }
        j++;
        if(j % 4 ==0 )
        {
            printf("\n");
        }
    }
    printf("\n不能被3整除的数之和为：%d",sum);
        */
    /*
    int i;
    for( i = 0; i <= 5; i++)
    {
        printf("Hello，World！\n");

    }
    */
    // printf("姓名\t年龄\t籍贯\t住址 \nJohin\t12\t河北\t北京\t");
    /*int i = 1;
    int sum = 0;
    do {
        if(i % 7 == 0)
        {
            sum +=i;
        }
        i++;
    }while(i <  50);
    printf("%d",sum);*/
    /*int i;
    for(i = 100; i <= 200; i++ )
    {
        if(i % 1==0 &&i % i == 0){
            printf("%d\t",i);
        }
    }
     */
     	double h;//华氏温度变量
	double c;
	printf("输入一个华氏温度:");
	scanf("%lf", &h);
	c = 5 * (h - 32) / 9;
	printf("摄氏温度:%0.2lf\n", c);

    return 0;
}
