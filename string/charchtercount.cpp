#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char target='*';
    int count=0;
    for(int i=0;i<s.size();i++){
       if(s[i]==target){
        count++;

       }
    }
    cout<<count;
}