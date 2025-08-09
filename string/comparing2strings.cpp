#include<iostream>
using namespace std;
int main(){
    string str1="Hare";
    string str2="KRISHNA";
    string str3="KRISHNA";
    cout<<str2.compare(str3);
    if(str2==str3){
       cout<< "They are   same ";
        
    }
    else{
        cout<<"They are not same";
    }

}