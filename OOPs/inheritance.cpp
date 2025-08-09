#include<iostream>
using namespace std;
class vechile{
    public:
    vechile(){
        cout<<"I am the constructor of the class vechile "<<endl;

    }
    int numWheels;
    string make;
    string model;
    string type;
    string tostring(){
        return make+"=>"+model;
    }
    ~vechile(){
        cout<<"I am the destructor of the class vechile ";
    }

};
class car:public vechile{
    public:
    car(){
        cout<<"I a the Constructer of class car";
    }
    bool Airbags;
    int NoAirbags;
    int efficiency;
    int topspeed;
    string milege;
    ~car(){
        cout<<"I am the destructor of class car ";
    }
};
class truck{
 int wheels;
 string type;

};

int main(){
    //vechile vech1;
    car car1;
    //constructor of parent class is called 1st then of derived class
    //and inverse for destructers
    //if we destroy the the parent class then dervied class is not able to use the data members of parent class 
 vechile *ptr=new vechile;
 vechile *ptr_car=new car;
 vechile *ptr_truck=new truck

}