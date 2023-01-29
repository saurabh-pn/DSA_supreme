//Hollow Rectangle in C
#include<stdio.h>
int main(){
    int rowCount,colCount;
    printf("Enter Rows & Column");
    scanf("%d %d",&rowCount,&colCount);
    int row,col,i;
    
    for(row=0;row<rowCount;row++){ //outer for loop is for row
        for(col=0;col<colCount;col++){ //inner for loop for columns
            //only first and last row will have all the stars
            if(row == 0 || row == rowCount-1){  
                printf("* ");
            }
            //what if the row is not first and last 
            else {
               
                if(col== 0 || col == colCount-1){
                    printf("* ");
                }
                //expect first and last column there will be sapaces instead of *
                else{

                    printf("  ");
                }
            }
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
