#include<iostream>
using namespace std;
void pattern5(int a){
    for(int i=1;i<a;i++){
        for(int j=a-i;j>0;j--){
        cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cin>>a;
  pattern5(a);
}
