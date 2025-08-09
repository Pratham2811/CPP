#include<iostream>
using namespace std;
int main(){
  int x=90000;
  string x_str=to_string(x);
  cout<<x_str<<endl;
//string to inttger
string y="9848489";
int z=stoi(y);
cout<<z<<endl;
x_str+=65;//adding ascii value
cout<<x_str;
}