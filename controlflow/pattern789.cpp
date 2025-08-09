#include<iostream>
using namespace std;
void pattern7(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i-1;j++){
                cout<<" ";

        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
          for(int j=0;j<a-i-1;j++){
                cout<<" ";

        }
        cout<<endl;
    }
}
    void pattern8(int b){
        for(int i=b;i>=0;i--){
             for(int j=0;j<=b-i-1;j++){
                cout<<" ";

        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
          for(int j=0;j<=b-i-1;j++){
                cout<<" ";

        }
        cout<<endl;

        }

    }
    void pattern9(int m){
    for(int i=0;i<2*m-1;i++){
        for(int j=0;j<=2*m-i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}
void trby(int m){
    for(int i=0;i<m;i++){
   for(int j=m-i;j>0;j--){
        cout<<" ";

    }
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    for(int j=m-i;j>0;j--){
        cout<<" ";

    }
    cout<<endl;

    }

}
void tryby2(int a){
    for(int i=0;i<=a-1;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*a-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    //pattern7(n);
   // pattern8(n);
   
   tryby2(n);
}