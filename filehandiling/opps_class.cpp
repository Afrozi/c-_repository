#include<iostream>
using namespace std;


class student{
	int rollno;
	char name[10];
	public:
	
	void input(){
		cout<<"\n Enter your rollno and name:";
		cin>>rollno>>name;
		
	}
	void show(){
		cout<<"\n Rollno: "<<rollno;
		cout<<"\n Name: "<<name;
	}
};

int main(){
	student st;
	st.input();
	st.show();
}
