#include<iostream>
using namespace std;
 void pattern10(int m){
    for(int i=0;i<2*m;i++){
        int stars=i;
        if(i>m){
            stars=2*m-i;
        }
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
 }
 void pattern11(int m){
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
            cout<<"1";}
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
 }
 void patter11a(int b){
    int star=1;
    for(int i=0;i<b;i++){
        if(i%2==0){
            star=1;

        }
        else{
            star=0;
        }
        for(int j=0;j<=i;j++){
            cout<<star;
            star=1-star;
        }
        cout<<endl;
        
    }
 }
 int main(){
    int a;
    cin>>a;
   pattern10(a);
   //pattern11(a);
  // patter11a(a);
 }