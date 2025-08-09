//isertand delete array in the end and the beginning of array 
#include<iostream>
using namespace std;
const int n=15;



int arr[n]={1,2,3,4};
int size=4;

bool insert_end(int a){
    if(size==n){
        return false;
    }
      arr[size]=a;
      size++;
}
//deletion at end 
bool delete_end(){
    if(size!=0){
        
        size--;

    }
}
//printing array
 void print_arr(){
 for (int i=0;i<size;i++){
    cout<<arr[i];
    
 }
 cout<<endl;
 }
 bool insert_at_start(int a){
    if(size!=n){
        int i;
        for(int i=size;i>0;i--){
            arr[i]=arr[i-1];

        }
        arr[0]=a;
        size++;

    }
 }
 bool delete_at_begining(){
    if(size>0){
    for(int i=0;i>0;i++){
        arr[i]=arr[i+1];
    }

    size--;
    }
 }
 
 
 int main(){
    print_arr();
    insert_end(0);
    print_arr();
    delete_end();
    print_arr();
    insert_at_start(0);
    print_arr();
    delete_at_begining();
    print_arr();

 }