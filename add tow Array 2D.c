#include <stdio.h>
void add_Array(unsigned int Arry1[][3] ,unsigned int Arry2[][3] ,unsigned int Arry_sum[][3] );
int cunter1 =0;
int cunter2 =0;


void add_Array(unsigned int Arry1[][3] ,unsigned int Arry2[][3] ,unsigned int Arry_sum[][3] ){

        for(cunter1=0; cunter1<3;cunter1++){
            for (cunter2 = 0;cunter2 < 3; cunter2++){
                printf("\n");
            
                 Arry_sum[cunter1][cunter2] =Arry1[cunter1][cunter2] * Arry2[cunter1][cunter2];

                

              
            }
            

        }




}


void main(){
unsigned int Arry1[][3]={{91, 52, 3}, {4,75, 6}, {97, 85, 9}};
unsigned int Arry2[][3]= {{59, 8, 57}, {6, 85, 4}, {3, 2, 1}};
unsigned int Arry_sum[3][3];
  add_Array(Arry1,Arry2,Arry_sum) ;

for(cunter1=0; cunter1<3;cunter1++){
            for (cunter2 = 0;cunter2< 3; cunter2++){
                


           printf("%d\t",Arry_sum[cunter1][cunter2]);
            
                  }
                  printf("\n");
      }      

            




    
    
    
    
    
    return 0;
}


