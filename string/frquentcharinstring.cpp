#include<iostream>
using namespace std;
int main(){
  /*  string str="Enginering";
    int n=str.size();
    int freq;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(str[i]==str[j]){
                count+=1;
            }
        }
        if(count>freq){
            freq=count;
        }
        count=0;
    }
    cout<<freq;*/
    string str1;
    cin>>str1;
    int arr[130]={0};
    for(int i=0;i<str1.size();i++){
        int ascii=str1[i];
        arr[ascii]++;

    }
    int max=0;
    int index;
    for(int i=0;i<130;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;

        }
    }
    char char_repeated=index;
    cout<<char_repeated<<" "<<max;
}