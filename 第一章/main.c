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
        printf("�����뵱ǰ�Ļ��϶�:");
        scanf("%lf",&h);
        s=5/9.0*(h-32);
        printf("\n��ǰ�����϶�:%lf",s);*/
    /*��̬¼��ɼ�*/
    /*double score[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("�������%dλͬѧ�ĳɼ�:",i+1);
        scanf("%lf",&score[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("��%dλͬѧ�ĳɼ�:%.2lf\n",i+1,score[i]);
    }*/
    /*��һ�����У�8��4��2��1��23��344��12
        ѭ��������е�ֵ
        ��������������ֵ�ĺͼ�ƽ��ֵ
        ������Ϸ���Ӽ�������������һ�����֣��ж��������Ƿ����������
    int nums[]={8,4,2,1,23,344,12};//��������
    int i;//ѭ������
    int sum=0;//���
    double P;//��ƽ��ֵ
    int searchnums;//��������
    printf("�������Ԫ�أ�\n");
    for(i=0;i<7;i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n***********************************************************\n");
    for(i=0;i<7;i++)
    {
        sum+=nums[i];//�����ۼ�
    }
    P=sum/7.0;
    printf("\t���ǣ�%d\tƽ��ֵ��:%.2lf",sum,P);
    printf("\n***********************************************************\n");
    printf("������Ҫ���ҵ�����:");
    scanf("%d",&searchnums);
    for(i=0;i<7;i++)
    {
        if(searchnums==nums[i])
        {
            printf("�ж���ȷ����������������!\n");
            break;
        }

    }
     //ѭ������������ж��Ƿ��ҵ��ˣ�����
     //ѭ����������ʱ��i��ֵӦ��Ϊ7
    if(i==7)
            {
                printf("ãã�˺����޴��ˣ�\n");
            }*/
     /*int nums[N]={16,25,9,90,23};
     int i,j;
     int temp;//�����Ľ�������ʱ����
     for(i=0;i<N-1;i++)//���ѭ����������
     {
         for(j=0;j<N-i-1;j++)//�ڲ�ѭ������ÿ�ֱȽϵĴ���
         {
             //�����ǰֵС�ں����һ��ֵ�ͽ���
             if(nums[j]<nums[j+1])
             {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
             }

         }
     }
     printf("�����Ľ����: \n");
     for(i=0;i<N;i++)
     {
         printf("%d\t",nums[i]);
     }
     for(i=0;i<N-1;i++)//���ѭ����������
     {
         for(j=0;j<N-i-1;j++)//�ڲ�ѭ������ÿ�ֱȽϵĴ���
         {
             //�����ǰֵС�ں����һ��ֵ�ͽ���
             if(nums[j]>nums[j+1])
             {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
             }

         }
     }
     printf("�����Ľ����: \n");
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
     printf("��С:%d �±�:%d\n",min,j);*/
     /*printf("#Ԥ����\n");
     printf("include ����\n");
     printf("standard ��׼\n");
     printf("input ����\n");
     printf("output ���\n");
     printf("head ͷ��\n");
     printf("void �յ�\n");
     printf("mian ��Ҫ��\n");*/
     /*printf("int ����\n");
     printf("short ������\n");
     printf("long ������\n");
     printf("float �����ȸ�����\n");
     printf("double ˫���ȸ�����\n");
     printf("scanf ɨ��\n");
     printf("getchar ��ȡ�ַ�\n");
     printf("putchar ����ַ�\n");*/
     /*int a,b,c;
     printf("������Ҫ������������:");
     scanf("%d %d",&a,&b);
     printf("Ҫ������������:%d\t%d\n",a,b);
      c=a;
      a=b;
      b=c;
      printf("���������������:%d\t%d\n",a,b);*/
     /* double a;//��������
      double b;//��۲���
      double c;//�������
      double d;//ʵ�칤��
      printf("������������ʣ�");
      scanf("%lf",&a);
      b=a*0.4;
      c=a*0.2;
      d=a+b+c;
      printf("ʵ���ܹ���Ϊ:%7.2lf",d);*/
    /*char a;//���������
    printf("������һ���ַ�:");
    scanf("%c",&a);
    printf("%c",a-32);*/
    /*int l,k,s,c;//�����ĸ�����
    printf("��������εĳ��Ϳ�");
    scanf("%d %d",&l,&k);
    c=(l+k)*2;
    s=l*k;
    printf("���ε�������ܳ�Ϊ��%d %d",s,c);*/
     /*int a,b,c,x;
     printf("������������������:");
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
     /*double a,b,c;//������Ʒ�۸����
     char ch;//�����Ա����;
     double d;//�ܼ۸����
     double total;//�ܼ۸�
     double pay;//���ļ۸�
     double Z;//�ۿ�;
     printf("�Ƿ�Ϊ��Ա��(y/n)");
     fflush(stdin);
     scanf("%c",&ch);
     printf("������Ʒ�ļ۸��ǣ�");
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
     printf("\n�ܽ��=%1.2fԪ\n",total);
     printf("\n�ۿ۽��=%1.2fԪ\n",Z);
     printf("\nӦ���ܶ�=%1.2fԪ\n",pay);*/
     /*double max;
     int l;
     printf("��������ҵ�����:");
     scanf("%d",&l);
     max = 256 * (l + 100) / 100;
     printf("����ʵ������˺�Ϊ:%lf",max);*/
     //fflush(stdin)��ջ�����
     /*int day;
    /* printf("���ʽ������ڼ���");
     scanf("%d",&day);
     switch(day)
     {
        case 1:
            printf("��������죡");
            break;
        case 2:
            printf("��������죡");
            break;
        case 3:
            printf("��������죡");
            break;
        case 4:
            printf("��������죡");
            break;
        case 5:
            printf("��������죡");
            break;
        case 6:
            printf("��ĩ��죡");
            break;
        case 7:
            printf("��ĩ��죡");
            break;
        default:
            printf("������λ��1-7֮�����");
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
        printf("���������룺");
        scanf("%d",&password);
        if(123456 != password)
        {
            printf("�������\n");
        }
        if(i == 1)
        {
            printf("����������Σ��˳�ϵͳ��");
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
    //������� srand   rand
    /*srand((unsigned)time(NULL));
    printf("������֣�%d\n",rand());
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
        printf("��%d��:\n",i+1);
        printf("���1������:%d\t���2ʣ��Ѫ��:%d \n",att1,hp2);
        printf("���2������:%d\t���1ʣ��Ѫ��:%d \n",att2,hp1);
        printf("*****************************************\n");
        i++;
        Sleep(400);
    }
    printf("Ko! ���1Ѫ����%d ���2Ѫ����%d",hp1,hp2);*/
    /*int sum = 0;
    int i,n;
    printf("������һ��������");
    scanf("%d",&n);
    if(n > 0)
    {
     while(n>0)
     {
         sum += n;
         n--;
     }
     printf("�ݼ���Ӻ�Ϊ��%d",sum);
    }
    else
    {
        printf("������������\n");
    }*/
    /*int n ;
    int sum = 0 ,i;
    printf("������һ�����֣�");
    scanf("%d",&n);
    do{
        i = n % 10;
        sum += i;
        n /=10;
    }while(n > 0);
    printf("����λ����֮�ͣ�%d",sum);*/
    /*int a = 1,b = 10;
    do{
        b -= a;
        a++;
    }while(b -- < 0);
    printf("%d",b);*/
    /*int choice; //�����û���ѡ�����
    printf("�Ը���ԣ�\n");
    printf("�������һλ�������������Եİ�����ϣ����\n");
    printf("1��ֻҪ��һλ�氮�����ӡ�\n");
    printf("2��������λ���ϵİ���.\n");
    printf("3���󹬼�����ǧ!\n");
    do{
        printf("��ѡ��:");
        scanf("%d",&choice);
        if(choice <=0 || choice >3)
        {
            printf("ֻ������1-3�����֣�����������!\n");
        }
    }while(choice <= 0 || choice > 3);
     switch (choice)
     {
      case 1 :
        printf("��ѡ��������е�Ψһ\n");
        break;
      case 2 :
        printf("��ǹ��\n");
        break;
      case 3 :
        printf("���ǹ��\n");
        break;
     }*/
    /* int num = 12345678;
     //��4λ����ÿһλ��ȡ����
     printf("��λ��%d\n", num % 10);
     printf("ʮλ��%d\n", num /10 %10);
     printf("��λ��%d\n", num /100 %10);
     printf("ǧλ: %d\n", num /1000 % 10);
     int temp;
     while (num > 0)
     {
         printf("%d\n",num % 10);
         num /= 10;
     }*/
    /*int value,right_num;
    value = 0;
    do{
        printf("������һ������\n");
        scanf("%d",&value);
        if( value <= 0)
        {
            printf("����ҪΪ������\n");
        }
    }while(value <= 0);
    printf("\n��ת�������:");
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
    //���׼ӷ�
    /* int num ;
    int i;
    printf("������һ������:");
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
    /* //�����ɾ��
    int i,j;                     //����ѭ������
    int temp;
    int count = 5;             //��������ĸ���
    double deletepowers;       //����Ҫɾ����ս��ֵ
    int deleteindex = -1;      //����Ҫɾ����ս��ֵ���±�,Ҫ��һ�������ܵĳ�ֵ
    double insertpower;        //�����²����ս��ֵ
    double powers[] ={42322, 45771,40907,41234,40767};
    printf("������Ҫɾ����ս��ֵ��");
    scanf("%lf",&deletepowers);
    for(i = 0; i < count; i++)
    {
        if(deletepowers == powers[i])
        {
                //��¼��ǰ���±�
                deleteindex = i;
                break; //�ҵ�Ҫɾ����ս��ֵ��ֱ������ѭ��
        }
    }
    //�����ж�(�Ƿ��ҵ�)��ִ�к����Ĳ���
    if(-1 == deleteindex)
    {
        printf("���ź�û���ҵ���ս��ֵ\n");
    }
    else
    {
        for(i = deleteindex ; i < count -1;i++)
        {
            powers[i] = powers[i + 1];
        }
          count --;
    }
    printf("ɾ����Ľ���ǣ�\n");
    for(i = 0; i < count ; i++)
    {
        printf("%.1f\t",powers[i]);
    }
    //����ս��ֵ
    printf("\n������Ҫ�����ս��ֵ:");
    scanf("%lf",&insertpower);
    powers[count] = insertpower;
    count ++;
    for(i = 0; i < count; i++)
    {
        printf("%.1lf\t",powers[i]);
    }
    for(i=0;i<count - 1;i++)//���ѭ����������
     {
         for(j=0;j<count-i-1;j++)//�ڲ�ѭ������ÿ�ֱȽϵĴ���
         {
             //�����ǰֵС�ں����һ��ֵ�ͽ���
             if(powers[j] < powers[j+1])
             {
                temp=powers[j];
                powers[j]=powers[j+1];
                powers[j+1]=temp;
             }

         }
     }
     printf("\n�Ӵ�С�����Ľ����: \n");
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
     printf("\n��С���������Ľ���ǣ�\n");
     for(i = 0; i < count ; i++)
     {
         printf("%.1lf\t",powers[i]);
     }
    */
     /* ��̬¼���ά����
    double siz[3][3];
    int i,j;
    for(i = 0;i < 3;i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("��%dλͬѧ�ĵ�%d�ųɼ���",i+1,j+1);
            scanf("%lf",&siz[i][j]);
        }
    }
    //��ӡ�ɼ�
    for(i = 0; i< 3;i++)
    {
        for(j = 0; j < 3;j++)
        {
            printf("%.2lf\t",siz[i][j]);
        }
        printf("\n");
    }
    */
    //ָ��
    /*int a;
    printf("������Ҫ�жϵ�����");
    scanf("%d",&a);
    if(a%3 == 0 || a%5 == 0)
    {
        printf("��������3����5�ı���!");
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
    printf("\n���ܱ�3��������֮��Ϊ��%d",sum);
        */
    /*
    int i;
    for( i = 0; i <= 5; i++)
    {
        printf("Hello��World��\n");

    }
    */
    // printf("����\t����\t����\tסַ \nJohin\t12\t�ӱ�\t����\t");
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
     	double h;//�����¶ȱ���
	double c;
	printf("����һ�������¶�:");
	scanf("%lf", &h);
	c = 5 * (h - 32) / 9;
	printf("�����¶�:%0.2lf\n", c);

    return 0;
}
