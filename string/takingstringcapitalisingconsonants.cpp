#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int length_str=str.size();
    for(int i=0;i<length_str;i++){
        if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'){
            continue;
        }
        else{
            str[i]=toupper(str[i]);
        }
    }
    cout<<str;
    //through ascii value but codition is that it you have to give small letters will resolve this issue 
    string str1;
    cin>>str1;
      int length_str1=str1.size();
      for(int i=0;i<length_str1;i++){
        if(str1[i]>=65&&str1[i]<=95){
            continue;
        }
     if (!str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'){
        str1[i]=str1[i]-32;
     }

      }
      cout<<str1;
}