#include <stdio.h>
#include <stdlib.h>
#define Max 6
#include <string.h> //֧���ַ�������
int main()
{
    int z = 0;
    int i = 0 , temp ,j;  //ѭ������
    //ʹ���ַ������ʾ�ַ�
    char emperorName[10];
    int count = 5;      //��ǰΪ�����乬����������
    int choice;         //�ʵ۵�ѡ��
    int searchindex = -1; //������Ų��ҵ�Ԫ�ص��±�
    char tempnames[20]; //���������ʱ�ַ������ַ�����
    char names[Max][20] = {"��ʩ","����","����","���Ѿ�","�ݼ�"};//������������
    //�����ļ�������
    char levelNames[5][10] = {"����","����","����","�ʹ���","�ʺ�"};
    //�������ÿλ���ӵļ���ÿ������Ԫ�ض�Ӧÿ�����ӵ�ǰ�ļ���
    int levels [Max] = {1,1,0,0,4,-1};
    int loves [Max] = {100,100,100,100,100,-1};//loves�����ÿ��Ԫ�ض�Ӧÿ�����ӵĺøж�,��ʼ�����ÿ���˵ĺøжȶ���100

    printf("�����뵱ǰ�ǻ��Ļʵ�����:");
    scanf("%s",emperorName);//¼���ַ���ʱ������Ҫ&����
    printf("��ǰ�ʵ���:%s,�������������꣡\n",emperorName);

    printf("************************************************************\n");
    printf("���Դ��룺�鿴��ǰ������״̬\n");
    printf("%-12s\t����\t�øж�\n","����");
    for(i = 0; i < count; i++)
    {
        printf("%-12s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }
    printf("************************************************************\n");
    while( z < 10)
    {
    printf("1���ʵ���ּѡ����\t\t(���ӹ��ܣ� \n");
    printf("2�����Ƴ���:\t\t\t(�޸�״̬���ܣ�\n");
    printf("3�������乬:\t\t\t(ɾ������)\n");
    printf("4�������ټ�����:\n");
    printf("������ѡ��");
    scanf("%d",&choice);

        switch(choice)
    {
    case 1 ://1���ʵ���ּѡ����\t\t(���ӹ��ܣ� \n
           //1.����ǰ��Ҫ�ж�������û�пռ�
           //2.��������Ԫ��(names��loves��levels

         if(count < Max)
         {
             //ִ����Ӳ���
             printf("���£�����ּѡ����");
             scanf("%s",names[count]);
             //��ÿ��Ԫ�س�ʼ��
             loves[count] = 100;
             levels[count] = 0;
             count ++;
         }
         else
         {
             printf("���£��뱣�����壡 \t ѡ��ʧ��!\n");
         }
        break;
    case 2 ://2�����Ƴ���:\t\t\t(�޸�״̬���ܣ�
           //1���ҵ�Ҫ���ҵ������±�
           //2���޸�������ӵ�״̬ �øж� +10 ����+1 ��������߼�����������
           //3���޸��������ӵ�״̬ �������Ӻøж�-10
           //��Ҫ�����BUG��Ϊ֧�����������ڵ����
        printf("���£���ѡ�����Ҫ���Ƶ��������䣺");
        scanf("%s",tempnames);
        //�ַ����Ĳ���strcmp Ҫ����string.hͷ�ļ�
        //strcmp(tempnames,"abc")==0 ��ʾ�����ַ������; 1 :ǰһ�����ں���һ�� -1 ��ǰһ��С�ں�һ��
        for(i = 0; i < count; i++)
        {
            if(strcmp(tempnames,"names[i]") == 0)
            {
                loves[i] += 10;
                //����Ҫע�⣬���ܳ���5��
                levels [i] = levels[i] > 4 ? 4 : levels[i] + 1;
            }
            else
            {
                loves[i] -= 10;
            }
        }
        break;
    case 3 ://3�������乬:\t\t\t(ɾ������
           //1.����
           //2.����һ����ֵ��ǰ��һ��Ԫ��
           //3.����--
           //�޸��������ӵ�״̬ �øж�+10
        printf("���£�������Ҫ�����乬��������");
        scanf("%s",tempnames);
        //ѭ������
        for(i = 0; i < count; i++)
        {
            if(strcmp(tempnames,names[i]) == 0)//�Ƚ��ַ����Ƿ��ҵ�
            {
                //��¼��Ҫ���ҵ��±�
                searchindex = i;
                break;
            }
        }
        if(-1 == searchindex)//���searchindex��ֵΪ��ֵ-1����ʾδ�ҵ�
        {
            printf("�龪һ�������˴����乬��");
        }
        else
        {
            for(i = searchindex ; i < count -1 ; i++)
            {
                //names[i] = names[i+1];��Ϊ���ַ�����C�����в�֧�������ֱ�Ӹ�ֵ
                //��Ҫ��strcppy ����ʵ�����鸳ֵ
                strcpy(names[i],names[i + 1]);
                loves[i] = loves [i+1];
                levels[i] = levels[i+1];
            }
            count --;
        }
        break;
    case 4://�����ټ�
        //����
        //���Ӻøжȼ���
        //����ʹ���������ʫ�裬��������ֵķ�ʽ�����ֻʵ۵��Ĳ�
        printf("���£�������Ҫ�����ټ������ӣ�");
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
        printf("����Ϸ�ԣ��������ٴ�ȷ�ϣ�");

    }
    //����ӡ��������״̬ǰ���Լ����������ʹ��ð������
    for(i = 0 ; i < count -1 ; i++)
    {
        for(j = 0 ; j< count -i-1;j++)
        {
            if(levels [j] < levels[j+1])
            {
                //��Ҫ�������������𡢺øж�
                temp = levels[j];
                levels[j] = levels[j+1];
                levels[j+1] = temp;
                temp = loves[j];
                loves[j] = loves[j+1];
                loves[j+1] = temp;
                //ע���ַ����Ľ���
                strcpy(tempnames,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempnames);
            }
        }
    }
    printf("************************************************************\n");
    printf("���Դ��룺�鿴��ǰ������״̬\n");
    printf("%-12s\t����\t�øж�\n","����");
    for(i = 0; i < count; i++)
    {
        printf("%-12s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }
    printf("************************************************************\n");
    z++;
    }
    return 0;
}
