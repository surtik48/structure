#include <stdio.h>
#include <stdlib.h>
int i=0,call=0;
void newentry();
void display(int t[],int);
 struct employ
{
    char epname[20];
    int empno;
    int empage;
    char empdept[10];
    int salary;
    long int ephone;
};
typedef struct employ emp;
emp a[20];
int main()
{
   printf("enter the options");
   printf("\n1.new entry\n2.display details\n");
   int b;
   scanf("%d",&b);
   switch(b)
   {
       case 1:{newentry();
                break;}

       case 2:{printf("enter number of employee details to be displayed:");
       int num;
       scanf("%d",&num);
       int temp[num],k;
       for(k=0;k<num;k++)
       {
           scanf("%d",&temp[k]);
       }
       printf("enter employee numbers\n");
       call++;
       display(temp,num);
       break;}
       default:printf("invalid choice");

   }
}
void newentry()
{
    printf("\nenter first name:");
    scanf("%s",&a[i].epname);
    printf("\nenter mobile/telephone number:");
    scanf("%lu",&a[i].ephone);
    printf("\nenter age:");
    scanf("%d",&a[i].empage);
    printf("\ndept. name:");
    scanf("%s",&a[i].empdept);
    printf("enter salary:");
    scanf("%d",&a[i].salary);
    printf("enter employee number:");
    scanf("%d",&a[i].empno);
    i++;
    printf("new entry recorded\n");
    main();
}

void display(int t[],int number)
{int temp;
    int j=0,k=0;
    whileloop:
     while(k<number)
        {temp=t[k];
        j=0;
        while(j<i)
        {
            if(temp==a[j].empno)
              { if(call==1)
                 printf("NAME:\t\t     AGE:   PHONE:\t SALARY:\n");
                 printf("%-20s ",a[j].epname);
                 printf("%-2d     ",a[j].empage);
                 printf("%-10lu    ",a[j].ephone);
                 printf("%d\n",a[j].salary);
                 call++;
                 k++;
                 goto whileloop;
                 }
                 j++;
            }
            printf("%d not found\n",temp);
        }main();
}
