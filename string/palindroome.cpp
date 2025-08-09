#include<iostream>
using namespace std;
int main(){
    string str1;
    cin>>str1;
    int length=str1.size();
    string str2=str1;
    for(int i=0;i<length/2;i++){
    swap(str2[i],str2[length-i-1]);

    }
    cout<<str2<<endl;;
    if(str1==str2){
        cout<<"given String is palindrome";
    }
    else {
        cout<<"not palindrome";
    }
   

}
