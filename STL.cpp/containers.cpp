#include<bits/stdc++.h>
using namespace std;



//lets understand the pairs first 
//pairs conatins 2 values if you store on value you simply store int a=2;
//what if you have to store 2 value in one variables so this purpose we use pairs 

//syntax 
 void explainPairs(){
    //syntax 
    pair<int,int> p= {1,2};
    cout<<p.first<<" "<<p.second;//O/P=1 2
    //access the number through the first and second letter 

    //what if we have to store the 3 values 
    //we use nested pairs 
    pair<int,pair<int,int>> a={1,{2,3}};
    //accessing the elements 
    cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<endl;


    //array of pairs 
    //we can store the elements in the form of pair
    pair<int,int>arr[]={{2,2},{1,3},{2,3}};
    //accessing the array 
    cout<<arr[1].first;
    
 }
 int main(){
    explainPairs();
 }