#include<iostream>
using namespace std;
void pattern23(int m){
    for(int i=0;i<m;i++){
        int num=4;
        for(int j=0;j<m;j++){
            if((i>0&&i<m-i-1)&&(j>0&&j<m-j-1)){
                num--;
                cout<<num;
            }
            else{
                cout<<num;
            }
        }
        cout<<endl;

    }
}
int main(){
    int a;
    cin>>a;
    pattern23(a);
}