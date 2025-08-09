#include<iostream>
#include<math.h>
using namespace std;
const int n=10;
int arr[n];
int size=0;
int i=0;
bool insert_at_end(int a){
    if(size==n){
        return false;
    }
    arr[i]=a;
    i++;
    size++;
    return true;
}
bool delete_last_element(){
    if(size==0)return false;
    i--;
    size--;
    return true;
}
//at begining means ki array ke 0 index pe insert karna baki ke elements bhi rehne chahiye to hame shift karne padenge baki ke elements a ke liye space create karne ke liye 
bool insert_at_begining(int a){
    if(size==n)
    {return false;}
    int j;
    for( j=i-1;j>=0;j--){
    arr[j+1]=arr[j];
   }

    arr[0]=a;
    size++;
    i++;
    return true;

}
//deleting start elemnt 
/// @return 
bool delete_at_begining(){

    for(int j=1;j<n;j++){
        arr[j-1]=arr[j];
    }
}
//inserting element which we want to insert at index 
bool insert_at_index(int b,int index){

    if(size==n) return false;
    for(int l=i-1;l>=index;l--){
        arr[l+1]=arr[l];


    }

       arr[index]=b;
       i++;
       size++;
}
//deleting at index
bool delete_at_index(int index){
    for(int m=index+1;m<n;m++){
        arr[m-1]=arr[m];
    }
    size--;
    i--;
}

void print_element(){
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" "<<endl;
    }
}
int main(){
    insert_at_end(10);
    insert_at_end(9);
    insert_at_end(8);
    insert_at_end(80);
    insert_at_end(20);
   
    insert_at_end(60);
    insert_at_end(70);
    insert_at_begining(100);
    insert_at_index(10000,2);
    delete_at_index(2);
    
   
  
    
    
    

    print_element();
   
}
