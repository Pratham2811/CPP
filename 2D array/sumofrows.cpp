#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Give dimentions i array=";
cin>>m>>n;
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        
        cin>>arr[i][j];
    }
}
/*int sum=0;
for(int k=0;k<m;k++){
    for(int l=0;l<n;l++){
        sum+=arr[k][l];
    }
cout<<"The Sum Of Row "<<k+1<<" in the Array Is "<<sum<<endl;       

}

//printing sum of each colomns 
for(int i=0;i<n;i++){
    int col_sum=0;
    for(int j=0;j<m;j++){
        col_sum+=arr[j][i];

    }
    cout<<"sum of "<<i+1<<" coloumn is = "<<col_sum<<endl;
}*/
//upper triangular matrix i.e elemnts below the matrix should be zero and elemnts above the daignol of matrix shoud be non zero 
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            cout<<arr[i][j];

        }
        
    }
}
}

