// This is the pattern of solid rectangle
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter Row & Col";
    cin>>row;
    cin>>col;
    for(int rows = 0;rows<row;rows+=1){ // Outer for loop is for rows
        for(int cols = 0;cols<col;cols+=1){ // Inner for loop is for columns
            cout<<"* "; // Printing what needs to be printed
        }
        cout<<endl; // After printing for first row, we need to go to next row and hence endl is used
    }
}