#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {5,2,1}

    };
    int arr2[3][4]={
        {10,11,12,13},
        {14,15,16,17},
        {19,23,20,10}
    };
    
    int result_arr[4][4]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                int store=arr[i][k]*arr2[k][j];
                sum+=store;
            }
            result_arr[i][j]=sum;
            

        }
    }
    //printing 
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout<<result_arr[i][j]<<" ";

        }
        cout<<endl;
    }
}