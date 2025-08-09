#include<iostream>
using namespace std ;
class couple{
int first;
int second;
public:
void setFirst(int a){
    first=a;

}
void setSecond(int b){
  second=b;
}
int getFirst(){
    return first;
}
int getSecond(){
    return second;
}
int multiply(){
     int product=first*second;
     return product;
}


};
int main(){
    couple couple1,couple2;
    cout<<couple1.getFirst()<<endl;
    couple1.setFirst(6);
    couple1.setSecond(1000);

    cout<<couple1.multiply();
    

}



