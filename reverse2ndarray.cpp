#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];


    }
    //Reversing Array using two arrays
   /* int new_a[n];
    for(int i=0;i<n;i++){
        new_a[n-i-1]=a[i];
    }
     for(int i=0;i<n;i++){
        cout<<new_a[i];
        }*/
        //reversing array using 1 array
        //for(int i=0;i<n/2;i++){
          //  int temp;
            //temp=a[i];
            //a[i]=a[n-i-1];
            //a[n-i-1]=a[i];

        //}
        //for(int i=0;i<n;i++){
        //cout<<a[i];}


        //finding Median
        if(n%2==0){
            double ans;
            ans=(a[(n/2)]+a[(n+1)/2]);
            cout<<ans;
        }
        else{
            cout<<a[n/2];
        }

}