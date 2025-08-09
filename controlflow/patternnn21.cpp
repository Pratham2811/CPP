#include<iostream>
using namespace  std;
void pattern20(int m){
   for(int i=0;i<2*m;i++){
    int stars=i;
    if(stars>m){
        stars=2*m-i;
    }
    for(int j=0;j<stars;j++){
        cout<<"*";
    }
    for(int j=0;j<(2*m)-(2*i);j++){
        cout<<" ";
    }
    for(int j=0;j<(2*i)-(2*m);j++){
        cout<<" ";
    }
     for(int j=0;j<stars;j++){
        cout<<"*";
    }
    cout<<endl;
   }
}
int main(){
    int a;
    cin>>a;
    pattern20(a);
}