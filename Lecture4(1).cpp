#include<iostream>
using namespace std;
int main(){
	int a,b;
	int c,d;
	cout<<"Input 4 integers a,b,c and d:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;	
	cout<<(a>b && c>d)<<endl;
	cout<<(a>b || c>d)<<endl;
	//C++ interprets true as 1
	//C++ interprets false as 0
}
