#include<bits/stdc++.h>
using namespace std ;
class student {
    public:
int rollNo;
string name;
int standard;
char grade;
string mobNo;

};

int main(){
    int a;
    cin>>a;//this is normal integer of the data type int 
    //cin is class which know how to take input of int but does not know how to take an input of the uder defiend  datatype

//    here user defined data type is the class name student and if we create its variable then it is called as object 

student A;//student is data type and A is variable of student data type 
//accessing the elements present in the objects using dot operator(.)

A.rollNo;//actualyy its not accessible because of the security reason we wil see it next //defaulty its accesing mode is private
//also to take an input we use 
cin>>A.rollNo;//if we do accesing mode public then any one can access the data members of class student 
cout<<A.rollNo<<endl;

//in c++ you can also use the struct to make c++ backward compatible 
cout<<sizeof(A)<<endl;
cout<<sizeof(A.mobNo)<<endl;
cout<<sizeof(A.name)<<endl;
cout<<sizeof(A.standard);

}