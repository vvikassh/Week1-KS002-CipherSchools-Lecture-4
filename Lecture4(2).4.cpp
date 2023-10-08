#include<iostream>
using namespace std;
int main(){
	int a;
	
	cout<<"Enter a integer a"<<endl;
	cin>>a;
	
	switch(a) 
	{
		case 1:
			cout<<"The value of a is 1";
			break;
		case 2:
			cout<<"The value of a is 2";
			break;
		case 3:
			cout<<"The value of a is 3";
			break;
			
		default:
			cout<<"Default will always be printed";
			break;
			
	}
}
