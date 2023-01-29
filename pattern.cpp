#include<stdio.h>

int main()
{
    int rows,space,i,k;
    printf("Enter No of rows");
    scanf("%d",&rows);
    for(i=0,k=0;i<rows;i++){
        k=0;
        for(space=0;space<rows-i-1;space++){
        printf(" ");
       }
    //    for( ;k!=2*i+1;k++)//condition
          while (k!=2*i+1 )//condition
         {
          printf("*");//block of code
          k++;//incriment
         }

       printf("\n");      

    }
}
