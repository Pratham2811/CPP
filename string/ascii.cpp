#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a="";
  string s1=s;
        string s2;
        int n=s1.size();
        for(int i=0;i<n;i++){
         if(isalnum(s[i])){  
          a+=s1[i];
         }
        }
       
        string s3="";
        for(int i=0;i<n;i++){
            s3+=tolower(a[i]);
        }
         for(int i=0;i<n;i++){
            cout<<s3[i];
        }
        


}