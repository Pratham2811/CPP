#include<iostream>
using namespace std;
void pattern20a(int m){
 for (int i=m;i>0;i--){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    for(int j=0;j<=(2*m)-(2*i+1);j++){
        cout<<" ";
    }
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
}
void pattern20b(int m){
    for(int i=0;i<m;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*m-(2*i+2);j++){
            cout<<" ";
        }
         for (int j=0;j<=i;j++){
            cout<<"*";
        }
       
     cout<<endl;

    }
   
} 


int main(){
    int a;
    cin>>a;
    pattern20a(a);
    pattern20b(a);
}
