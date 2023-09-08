#include <stdio.h>
#include <stdlib.h>

    int num1=55;
    int num2 =99;
    int *ptr1 =NULL;
    int *ptr2 =NULL;

    int Arr[]= {2,4,6,8,10};
    int *ptr3=Arr;
    int *ptr4=&Arr[0];
    int *ptr5=NULL ;


    int Arry[]= {45,5,65,85,95};
    int *ptr_1=NULL;
    int *ptr_2=NULL;



    const num8[]={44,55,66,77,88};
    int*p=NULL;
    *print_Arr(void);

    char hhh [2][20]= {" mohamed "};
    char www [2][20]= {" Ahmed","mohamed"};
    char aaa [2][20]= {" Esmaiel","hawas"};


    char *pp[][20]={{hhh},{www},{aaa}};


int main()
{
       
        

    
   char n=0;
    //printf("nnn_valuo = %c\n",*(pp[0][0]));
    for(n=0;n<7;n++)
    {
        *(pp[0][0]++);

            printf(" %c",*(pp[0][0]));
    }
                printf("\n");

    //printf(" %c\n",*(pp[1][0]));
       for(n=0;n<8;n++)
    {
        *(pp[1][0]++);

            printf(" %c",*(pp[1][0]));
    }
                printf("\n");

    //printf(" %c\n",*(pp[2][0]));
       for(n=0;n<8;n++)
    {
        *(pp[2][0]++);

            printf(" %c",*(pp[2][0]));
    }
                printf("\n");
    
  
    ptr1 =&num1;
    printf(" valuo num1= %i\t Addres num1 =0x%x\n",*ptr1,ptr1);
    ptr1+=1;
    printf(" valuo num1= %i\t Addres num1 =0x%x\n",*ptr1,ptr1);
    ptr2 =&num2;
    printf(" valuo num2= %i\t Addres num2 =0x%x\n",*ptr2,ptr2);

    printf(" valuo num3= %i\t Addres num3 =0x%x\n",*ptr3,ptr3);

    ptr3+=1;
    printf(" valuo num3= %i\t Addres num3 =0x%x\n",*ptr3,ptr3);

    printf(" valuo num4= %i\t Addres num4 =0x%x\n",*ptr4,ptr4);

    ptr3-=1;
    printf(" valuo num4= %i\t\n",(ptr4 - ptr3)+1);
    printf("*********************************\n");

    while(ptr3<=ptr4)
    {

        printf(" valuo num3= %i\t Addres num3 =0x%x\n",*ptr3,ptr3);
        ptr3++;

    }


    printf("*********************************\n");

    ptr_1=&Arry;
    ptr_2=&Arry[0];

    printf("valuo of ptr_1 := 0x%x\n",ptr_1);
    printf("valuo1 of ptr_2 := 0x%x\n",ptr_2);

    ptr_1=*(ptr_2++);
    printf("valuo of ptr_1 := %i\n",ptr_1);
    printf("valuo1 of ptr_2 := %i\n",*ptr_2);

    ptr_1=*(ptr_2--);


    int un1=(*ptr_2)++;
    printf("valuo of ptr_un1` := %i\n",un1);
    printf("valuo1 of ptr_2 := %i\n",*ptr_2);

    printf("valuo of ptr_1 := %i\n",Arry[0]);

    printf("*********************************\n");

    un1=(*ptr_2)--;
    printf("valuo of ptr_un1` := %i\n",un1);
    printf("valuo1 of ptr_2 := %i\n",*ptr_2);


    un1=(*ptr_2);
    printf("valuo of ptr_un1` := %i\n",un1);


    printf("valuo of ptr_1 := %i\n",Arry[0]);



    printf("*********************************\n");

p = print_Arr();

    printf("num8 =%i \n",*p);

        while (p<&num8[5])
        {
            printf("num =%i \n",*p);
            p++;
        }
        








    return 0;
}

*print_Arr(void)

{

    printf("num8 = %i\n",*num8);

    return (&num8[0]);
}

