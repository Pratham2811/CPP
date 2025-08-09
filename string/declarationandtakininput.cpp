#include <bits/stdc++.h>
using namespace std;

int main() {
	string name;
	cin>>name;
	cout<<name<<endl;

	string para;
	//enmey of get line is enter 
	//to solve this we have to write it as cin.ignore()
	cin.ignore();
	getline(cin,para);
	cout<<para;
	return 0;
}
