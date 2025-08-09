#include<iostream>
using namespace std;
int main(){
  /*  int**ptr=new int *[10];
    for(int i=0;i<10;i++){
        int size;
        cin>>size;
        ptr[i]=new int[size];


    }*/
   int **arr=new int*[5];
   for(int i=0;i<5;i++){
    int size=i+2;
    arr[i]= new int[size];
    for(int j=0;j<size;j++){
        arr[i][j]=i+j+1;
    }

   }
   for(int i=0;i<5;i++){
    int size=i+2;
    for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}