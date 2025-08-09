#include<iostream>
using namespace std;
 void pattern19(int m){
    for(int i=0;i<m;i++){
        int ascii=69;

          for(char ch='E'-i;ch<='E';ch++){
            cout<<ch;
          }
        cout<<endl;
    }
 }
 int main(){
    int a;
    cin>>a; 
    pattern19(a);
 }