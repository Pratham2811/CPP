#include<iostream>
using namespace std;
int main(){
      
       int x;
       cin>>x;
       string y=to_string(x);
       int n=y.size();
     int  sum=(y[0]-'0')+y[n-1]-'0';
       cout<<sum;
       return 0;

       
}