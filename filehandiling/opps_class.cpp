#include<iostream>
using namespace std;

class student{
	int rollno;
	char name[10];
	int eng,maths,science,total;
	public:
	
	void input(){
		cout<<"\n Enter your rollno and name:";
		cin>>rollno>>name;
		
	}
	void marks(){
	   cout<<"\n Enter your subject marks english maths science:";
	   cin>>eng>>maths>>science;	
	}
	void show(){
		cout<<"\n Rollno: "<<rollno;
		cout<<"\n Name: "<<name;
		cout<<"\n your subject marks english: "<<eng;
		cout<<"\n your subject marks maths: "<<maths;
		cout<<"\n your subject marks science: "<<science;
		total = eng+maths+science;
	   cout<<"\n Total marks of subject:"<<total;
	}
};



int main(){
	student st;
	st.input();
	st.marks();
	st.show();
//	st2.input();
//	st.show();
//	st2pp.show();
}
