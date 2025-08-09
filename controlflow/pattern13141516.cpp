#include<iostream>
using namespace std;
 void pattern13(int m){
    int count=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
 }
 void pattern14(int m){
    string str="ABCDE";
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    }
    
 }
 void pattern14a(int m){
    for(int i=0;i<m;i++){
        string str="";
        int ascii=65;
        for(int j=0;j<=i;j++){
            cout<<str[ascii];
            ascii++;
        }
    }
    
 }
 void pattern15(int m){
    for(int i=m;i>0;i--){
        string str1="";
        int asci=65;
        for(int j=0;j<i;j++){
            cout<<char(asci);
            asci++;
        }
        cout<<endl;
    }
    

 }
 void pattern17(int m){
     int ascii=65;
    for(int i=0;i<m;i++){
       
        for(int j=0;j<=i;j++){
            cout<<char(ascii);
        }
        ascii++;
        cout<<endl;
    }
 }
 void pattern18(int m){
    int i;
    for(i=0;i<m;i++){
            int ascii=65;

        
        for(int j=m-i-1;j>0;j--){
        cout<<" ";

    }

    for(int j=0;j<(2*i)+1;j++){
        cout<<char(ascii);
        
        if(j>=((2*i)+1)/2){
            ascii--;
        }
        else{
            ascii++;
        }
        

    }
    cout<<endl;

 }
 }
 int main(){
    int a;
    cin>>a;
 //   pattern13(a);
 //   pattern14(a);
 // pattern15(a);
// pattern17(a);
 pattern18(a);
 }