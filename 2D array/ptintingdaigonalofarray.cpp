#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<< "enter diagonals of array";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

//upper triangular matrix i.e elemnts below the matrix should be zero and elemnts above the daignol of matrix shoud be non zero 
 /*for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            cout<<arr[i][j];

        }
        
    }
}*/
//alternative method for printing daigonals 
//very efficient method
cout<<"Diagonal elemnts of givien array is "<<endl; 
for(int i=0;i<m;i++){
    cout<<arr[i][i]<<" ";
}
for(int i=0,;i<m;i++){


}
}
