#include<iostream>
using namespace std;
class vechile{
    public:
      vechile(){
        cout<<"I am constructor of class vechile"<<endl;
    }
int wheels;
string type;
string model;
string maker;
 virtual string tostring(){
    cout<<maker<<" =>" <<model;
}//this is polymorphisim where we write the virtual function to override in derived class
~vechile(){
        cout<<"I am destructor of class vechile"<<endl;
    }
};
class car:public vechile{
    public:
    car(){
        cout<<"I am constructor of class car"<<endl;
    }
    int speed;
    int mileage;
    int travel;
    string tostring() override{//function overridded here
        cout<<"I am the Fuction of the car"<<endl;

    }  
    ~car(){
        cout<<"I am destructer of class car"<<endl;
    }

};
int main(){
    
    vechile *ptr=new vechile;
    vechile *ptr_car=new car;
    //here pointer is created of type vechile and it is reffering to the address of the object of type car 
    //accessing object of type car
    (*ptr_car).tostring();
    delete ptr_car;
    delete ptr;
    //if you din't write the virtual destructors or destructor as virtual then destroctor of parent class is not called 
    //so you have to call the vitual destructors 
    

}