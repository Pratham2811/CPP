#include<iostream>
using namespace std;
int main(){
    int arrr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<&arrr[j][i]<<endl;
        }
    }
}