#include<iostream>
using namespace std;
int main(){
    string str1="Sakshi Fulari And PM ";
    int length_str1=str1.size();
    cout<<length_str1<<endl;
    cout<<str1.substr(1,5)<<endl;
    cout<<str1.substr(0)<<endl;
    //erase
    str1.erase(13,5);
    cout<<str1<<endl;
    //insert
    string str2="Sakhsi ";
    str2.insert(7,"FUlari");
    cout<<str2<<endl;
    //append simply insert at the end 
    string str3;
    str3="Sakshi Fulari Weds ";
    str3.append("The Guy she want ");
    cout<<str3<<endl;
    string str4="Hare Krishna";
    str4.erase(4);
    cout<<str4;

}