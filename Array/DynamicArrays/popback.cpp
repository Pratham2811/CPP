#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(7);
    v={1,2,3,4,5,6,7};
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";

    }
    cout<<endl;
     for(int i=0;i<v.size();i++){
         v.pop_back();
    }
   
    
      for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";

    }

}