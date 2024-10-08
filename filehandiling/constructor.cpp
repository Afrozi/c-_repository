#include<iostream>
#include<string.h>
using namespace std;

class student{
	int rollno;
	char name[10];
	public:
    student(){
		cout<<"\n Enter your name and rollno :";
		cin>>rollno>>name;
	}
	student(student &s){
		rollno = s.rollno;
		strcpy(name, s.name);
	}
	student(int r,char nm[]){
		rollno = r;
		strcpy(name,nm);
	}
   void	show(){
		cout<<"\n your rollno:"<<rollno;
		cout<<"\n your name:"<<name;
	}
};

int main(){
	student st1;
	student st2(101,"afroz");
	student st3 = st2;
	st1.show();
	st2.show();
	st3.show();
	st3.show();
	return 0;
}
