#include<stdio.h>
//Hollow Rectangle
int main(){
    int rowCount,colCount;
    printf("Enter Rows & Column");
    scanf("%d %d",&rowCount,&colCount);
    int row,col,i;
    
    for(row=0;row<rowCount;row++){
        if(row==0||row==rowCount-1){
            for(col=0;col<colCount;col++){
                printf("*");
            }
        }   
            else {
                //remaining middle rows
                printf("*");//first star

                for(i=0;i<colCount-2;i++){
                    printf(" ");
                }
                printf("*");//last star
            }
        printf("\n");
        }
    }


/*int main(){
    int row,col;
    for(row=0;row<6;row++){
        for(col=0;col<row+1;col++){
            printf("%d",col+1);
        }
        printf("\n");
    }
   }
*/


/*int main(){
    int row,col;
    for(row=0;row<6;row++){
        for(col=0;col<6-row;col++){
            printf("%d",col+1);
        }
        printf("\n");
    }
   }
*/
