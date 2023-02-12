#include<iostream>
using namespace std;

int main(){
    int i,init_space,middle_space,input_user;
    cin>>input_user;
    for(i=0;i<input_user;i++){

           for(init_space=0;init_space<input_user-i-1;init_space++){
               cout<<"  "; //initial spaces 
               }   
               cout<<"* "; //first star in every row
              for(middle_space=0;middle_space<2*i-1;middle_space++){
                
                if(i==input_user-1){ 
                    cout<<"* ";  // here are all stars in last row
                }
                else{
                    cout<<"  "; //middile spaces in middile rows
                }
                }   
                if(i==0){
                 cout<<"  ";//first row 
                }
                else{
                 cout<<"* "; //last star in each row
                }
                cout<<endl;
            }    
    
}


// int main (){
//   int n;
//   cout<<"Enter n";
//   cin>>n;
//   for(int row = 0; row<n; row++){
//     for (int col =0 ;col<n-row-1;col++){
//         cout<<"--";
//     }
//     for(int col=0;col<row+1;col++){
//       cout<<"-*";
//       cout<<"--";
//     }
//     cout<<"\n";
//   }
// }





















// this code is not efficient but working.
// int main() {
//   int n;
//   cin>>n;
//   for (int row = 0; row < n; row++) {
//     for (int col = 0; col <n; col++) {
//         if(n-col-1>row){
//               cout<<"s";
//         }
//         else{
//           if(col==n-1 || row==n-1 ||  col==n-row-1){
//              cout<<"-*";
//           }else{
//             cout<<"qq";
//           }

//         }

//     }
//     cout<<endl;
// }
// }

