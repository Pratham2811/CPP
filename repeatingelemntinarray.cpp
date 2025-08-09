#include<iostream>
using namespace std;
int main(){
    int n;
   
    cin>>n;
    int a[n];
    int count=1;
 
    for(int i=0;i<n;i++){
       
        cin>>a[i];
    }
    for(int ctr=0;ctr<n-1;ctr++){
        for(int ctr_2=ctr+1;ctr_2<n;ctr_2++){
            if(a[ctr]==a[ctr_2]){
                count++;
               }
            }
            cout<<count<<"of"<<a[ctr]<<endl;
            count=1;
        
}
}