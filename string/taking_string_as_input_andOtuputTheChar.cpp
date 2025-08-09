#include<iostream>
using namespace std;
int main(){
string name;
cin>>name;
cout<<name[0];
int length_str=name.size();
for(int i=0;i<length_str;i++){
    cout<<name[i]<<" ";

}
}
