#include <stdio.h>

 unsigned char pass[]={'m' ,'o' ,' h' ,'a' ,'m','e','d'};
 unsigned char string[]= {"mohamed_gamal hawas"};
  unsigned char name[3][80]={"mohamed","gamal","hawas"};
  unsigned char numpers[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int cunter1,cunter2,cunter3;






int main(){




    printf("%s\n ",pass);
    printf("%s\n",name[0]);
    printf("%s\n " ,string);




    printf("the array =\n ");
    for(cunter1=0;cunter1<3;cunter1++){
                            printf("\n");

            for(cunter2=0;cunter2<3;cunter2++){
                     printf("%i\t",numpers[cunter1][cunter2]);



            }

    }
    printf("\n");


    printf("enter the numpers  " );
    for (cunter1=0 ;cunter1<3;cunter1++){
                       // printf("\n");

          for(cunter2=0;cunter2<3;cunter2++){
                scanf("%i",&numpers[cunter1][cunter2]);



            }

    }

                            printf("\n");


        printf("the array =\n ");
    for(cunter1=0;cunter1<3;cunter1++){

                            printf("\n");

            for(cunter2=0;cunter2<3;cunter2++){
                     printf("%i\t",numpers[cunter1][cunter2]);



            }


    }



                                printf("\n");


    printf("the name \n" );
    for (cunter3=0;cunter3<3;cunter3++)
        {
            printf("%s\t", name[cunter3]);

    }

                printf("\n");




        printf("enter the name\n " );
    for (cunter3=0;cunter3<3;cunter3++)

        {
            scanf("%s", &name[cunter3]);
    }           fflush(stdin);

        printf("\n");


    printf("the name2 \n " );
    for (cunter3=0;cunter3<3;cunter3++)
        {
             printf("\n");

            printf("%s\t", name[cunter3]);

    }





    return 0;
}