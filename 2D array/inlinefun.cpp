#include<iostream>
using namespace std;
/*inline float cuube(float a){
      return(a*a*a*a);
}*/
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<b;
}
int main(){
    /*float a;
    a=cuube(2.0);
    cout<<a;*/
    int x=8;
    int y=9;
    swap(x,y);
    cout<<x<<y;
}