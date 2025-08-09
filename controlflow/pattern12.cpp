#include<iostream>
using namespace std;
void pattern12(int m){
    for(int i=1;i<m;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<2*m-(2*i+1);j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    pattern12(a);
}
