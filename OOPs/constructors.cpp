#include<iostream>
using namespace std;
//to assign values to data members while creating object or just after creating an object 
//we assign value after the creating an object 
//constructor is same name as the class name 
// syntax 
class construct{
    int a;
    int b;
      public:
    construct(int x,int y){//constructr is defined 
    //here we are intialising the data members using constructors 

        a=x;
        b=y;


    }
  
    void display(){
        cout<<"value of a= "<<a<<endl;
       cout<<"value of b= "<<b<<endl;
        
    }
};
//While Creating object we have top pass and argument that the rule 
/*int main(){
    construct couple(2,3);//created and object and passed an argument 
    //constructer is called as soon as object is created
    couple.display(); //calling function 


}*/

//there are three types of constructors 
//1.Default Constructer,2.Parametrized C,3.Copy C



 //+++++++++New learning +++++
 //if you write the constant variable then you have to intialise it at that otherwise it will show the error
 //and we can't reassign constant variable 
  //what we have to take that constant value from the user to solve this we use intialiser list 

  //syntax of intialiser list 
  //we can take values from user for const 
  
  /*class Intialiser{
   int a;
   const int b;
   //creating constructor
   public:
   Intialiser(int x,int y): a(x),b(y){
  
   }
    void show(){
    cout<<a;
    cout<<b;
  }
   
  };
 
  int main(){
    Intialiser getval(7,8);
    getval.show();
  }*/

  //copy constructors 
  class copyC{
    int a;
    int b;
    public:
    
   
    void seta(int x){
     cin>>a;
    }
    void setb(int y){
      cin>>b;
    }
    void geta(){
      cout<<a;
    }
    void getb(){
      cout<<b;
    }
    int multiply(copyC obj){
      //object is passed as an argument as pass by value means copy of object 
      ///we need copy constructor for that reason 
      return (a+obj.a)*(b+obj.b);

    }
    ~copyC(){
      cout<<"Objects are destroyrd";
    }
  };
  int main(){
    copyC couple1,couple2,couple3;
    couple1.seta(6);
    couple1.setb(5);

     couple2.seta(5);
     couple2.setb(6);
     cout<<couple1.multiply(couple2);


  }