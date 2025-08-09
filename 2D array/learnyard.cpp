#include<iostream>
using namespace std;
int main(){

    int arr[6][7];
    int count=1;
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=count;
            count++;
        }
    }
    for(int k=0;k<6;k++){

        for(int l=0;l<5;l++){
            cout<<arr[k][l]<<" ";
        }
        cout<<endl;
    }
}