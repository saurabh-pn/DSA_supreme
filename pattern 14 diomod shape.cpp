#include<iostream>
using namespace std;
// int main(){
//     int row,col,n;
//     cout<<"enter n";
//     cin>>n;
//     //for full pyramid
//         for(row=0;row<n;row++){
//         for(col=0;col<n-row-1;col++){
//             cout<<"  ";
//         }
//         for(col=0;col<row+1;col++){
            
//                 cout<<" *"; // its not efficient 
//                 cout<<"  "; // because we use "--"(space) which create extra conflict.
//             }
//         cout<<endl;
//         }
    
//     //for inverted full pyramid 
//     for(int row=0 ; row <n ; row++){
//         for(col=0 ; col<row ; col++){
//             cout<<"  ";
//         }
//         for(int col=0;col<n-row;col++){
//             cout<<" *";
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }


/*---------------------------------------------------------------*/



//using (for loop) for both space & star. 

// hollow daimond

// int main (){
//     int row ,col,n;
//     cout<<"Enter N";
//     cin>>n;
//     for(row=0;row<n;row++){
//         for(col=0;col<n-row-1;col++){
//             cout<<"  ";
//         }
//         for(col=0;col<2*row+1;col++){
//             if(col == 0 || col == 2*row){
//                 cout<<" *";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     for(row=0;row<n;row++){
//         for(col=0;col<row;col++){
//             cout<<"  ";
//         }
//         for(col=0;col<2*n-2*row-1;col++){
//             if(col == 0 || col == 2*n-2*row-2){
//                 cout<<" *";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }


/* ---------------------------------------------------------
    Its just a different approach to question 
    in this method we use for loop for col and for
    printing star and spaces we use if condition.

    HOLLOW DIAMOND SHAPE*/


// int main(){
//     int row,col,n;
//     cout<<"enter n";
//     cin>>n;
//     for(row=0;row<n;row++){
//         int k=0;
//         for(col=0;col<2*n-1;col++){

//             if(col < n-row-1){
//                 cout<<"  ";
//             }
//              else if(k < 2*row+1 ){
//                 if(k == 0 || k == 2*row){
//                     cout<<" *";
//                     // cout<<"  ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//                  k++;
//             }
//         }
//         cout<<endl;
//     }

     
//     for(row=0;row<n;row++){
//         int k=0;
//         for(col=0;col<2*n-1;col++){

//             if(col < row){
//                 cout<<"  ";
//             }
//             // extra variable k is taken for printing star.
//              else if(k < 2*n-2*row-1 ){
//                 if(k == 0 || k == 2*n-2*row-2){
//                     cout<<" *";
//                     // cout<<"  ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//                  k++;
//             }
//         }
//         cout<<endl;
//     }
// }