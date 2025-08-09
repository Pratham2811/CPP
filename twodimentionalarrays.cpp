#include<iostream>
using namespace std;
int main(){
   /* int st,sb;
    cin>>st>>sb;
   
   int students_marks[st][sb];
   for(int i=0;i<sb;i++){
    for(int j=0;j<st;j++){
        cin>>students_marks[j][j];
      
    }
   
   }
   for(int i=0;i<st;i++){
    for(int j=0;j<sb;j++){
        cout<<" Marks Student of subjects  "<<students_marks[i][j];
    }
    cout<<endl;
   }*/
   int count=1;
   int arr[6][5]={{90,99,90,78,88},{66,77,88,99,100},{41,82,73,45,55},{76,87,98,29,70},{81,52,43,34,25}};
   for(int i=0;i<6;i++){
    for(int j=0;j<5;j++){
        cout<<" Marks of Student  "<<i+1<<" of subject "<<j+1<<" = "<<arr[i][j]<<" ";
        count++;
    }
    cout<<endl;
   }
   cout<<"Total No of Counts "<<count;

    return 0;
}