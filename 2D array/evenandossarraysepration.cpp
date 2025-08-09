#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int even_a[n];
    int odd_a[n];
    int j=0;
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<0;i++){
        if(arr[i]%2==0){
            
                arr[i]=even_a[j];
                j++;
            
            
        }
        else if(arr[i]%2==1){
           odd_a[k]=arr[i];
                k++;
            
        }
    }
    
    cout<<"Seperation Of Even And odd arrray"<<endl;
    for(int i=0;i<n;i++){
        cout<<even_a[i]<<" ";
        
    }
     for(int i=0;i<n;i++){
        cout<<odd_a[i]<<" ";
        
    }

}