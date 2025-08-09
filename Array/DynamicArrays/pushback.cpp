#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 /*   vector<int> v1;

        v1.push_back(5);
        v1.push_back(9);
        v1.push_back(10);

    
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
*/

    //initialising the the vector
    vector<int>v2(3);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";

      
    }
      v2.push_back(5);
        v2.push_back(9);
        v2.push_back(10);
  for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;


    // Pushing to a vector that already has some values
    vector<int> v3(5);
    v3={1,2,3,4,5};
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    v3.push_back(80);
    v3.push_back(90);
    for (int i = 0; i < v3.size(); i++)
    {
     cout<<v3[i]<<" ";
    }
    

}