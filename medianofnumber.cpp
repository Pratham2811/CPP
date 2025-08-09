#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        double ans;
        ans =(arr[(n-1)/2]+arr[n/2])/2;
        cout<<ans;
           }
      else{
        cout<<arr[n/2];
      }    
}