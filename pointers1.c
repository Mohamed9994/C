#include <stdio.h>
#include <stdlib.h>
unsigned int num_1=2;
unsigned int num_2 =4;
unsigned int num_3 =6;
unsigned int num_4=0;
unsigned int num_5 =0;
unsigned int num_6 =0;

unsigned int num_7 =88;
unsigned short num_8 =85;
unsigned char num_9=44;
unsigned char num_10=44;

void *ptr=NULL;



unsigned char sqwaer(unsigned int* ptrnum1,unsigned int* ptrnum2,unsigned int* ptrnum3 );



int main()
{
    ptr =&num_10;
    *(unsigned int*)ptr =50;

    printf("valuo of num_10=%i \n",*((unsigned int*)ptr));
    ptr =&num_7;

    printf("valuo of num_7 =%i \n",*((unsigned int*)ptr));

    ptr =&num_8;

    printf("valuo of num_8 =%i \n",*((unsigned short*)ptr));

    ptr =&num_9;

    printf("valuo of num_9 =%i \n",*((unsigned char*)ptr));


    // printf("valuo of num_7 \n",*unsigned int(*ptr);
    unsigned char m =0;

    printf("%i\t%i\t%i\n",num_1,num_2,num_3);

    m = sqwaer( &num_1,&num_2,&num_3);

    printf("%i\t%i\t%i\n",num_1,num_2,num_3);

    m = sqwaer(& num_1,& num_2,& num_3);
    if(m==1)
    {
        printf("error:!\n ");
    }


    printf("%i\t%i\t%i\n",num_1,num_2,num_3);




    printf("enter the numer=  ");
    scanf("%i\t%i\t%i\n",&num_4,&num_5,&num_6 );
    fflush(stdin);

    m = sqwaer(& num_4,& num_5,& num_6);
    if(m==1)
    {
        printf("error:!\n ");
    }
    printf("%i\t%i\t%i\n",num_4,num_5,num_6);







    return 0;
}

unsigned char sqwaer(unsigned int* ptrnum1,unsigned int* ptrnum2,unsigned int* ptrnum3 )
{
    unsigned char Error_s =0;

    if((ptrnum1==NULL)||(ptrnum2==NULL)||(ptrnum3==NULL) )
    {
        Error_s =1;

    }
    else
    {
        *ptrnum1 *= *ptrnum1;
        *ptrnum2 *= *ptrnum2;
        *ptrnum3 *= *ptrnum3;

    }

    return Error_s ;

}