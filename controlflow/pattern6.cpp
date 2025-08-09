#include<iostream>
using namespace std;
void pattern(int a){
    for(int i=1;i<=a;i++){
        for(int j=a-i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
    int main(){
        int n;
        cin>>n;
        pattern(n);
    }
