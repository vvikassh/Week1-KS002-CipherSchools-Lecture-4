#include<iostream>
using namespace std;
int main(){
	float a,b;
	cin>>a;
	cin>>b;
	if(a>0.01 || b>a)
	{
		cout<<"The condition in if statement is correct"; //will only be printed if the statment given in the parantheses is true
	}
	else{
		 cout<<"The condition is false";
	}
}
