#include<iostream>
#include<string.h>
using namespace std;
 
 class A{
 	public:
 	A(){
 		cout<<"\n constructor called:";
	 }
	 void show(){
	 	cout<<"\n method called:";
	 }
	 ~A(){
	 	cout<<"\n destructor:";
	 }
 };

int main(){
	A obj,obj1;
	obj.show();
	obj1.show();
	return 0;
}
