//Stack : LIFO (Last In First Out)
/*
Insertion_beg : Push
Deletion_beg : Pop
Show : show
head : top
*/
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
node *top=NULL;			//head node

void push(int num){
	node *temp = new node;		//dynamic memory allocation	
	temp->data = num;
	temp->next = NULL;
	if(top==NULL){
		//insert first node
		top = temp;	
	} else {
		temp->next = top;
		top = temp;
	}
}
void pop(){
	if(top==NULL){
		cout<<"Underflow !! No element to delete.";
	}
	else{
		//deleteing head node
		node *ptr = top;
		top = top->next;		//shifting head to its next node
		delete ptr;	
	}
}
void show(){
	if(top==NULL){
		cout<<"No element to display.";
	}
	else{
		cout<<"\nThe List is \n";
		node *ptr = top;
		while(ptr!=NULL){
			cout<<ptr->data<<"->";
			ptr= ptr->next;
		}
	}
}
main(){
	char ch;
	int n,choice;
	do{
		cout<<"\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\nEnter choice : ";
		cin>>choice;
		switch(choice){
			case 1:		cout<<"\nEnter data : ";
						cin>>n;
						push(n);
						show();		
						break;
			case 2:		pop();
						show();
						break;
			default:	cout<<"\nWrong choice input !!";
		}
		
		cout<<"\nDo you want to perform another operation on list : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}
