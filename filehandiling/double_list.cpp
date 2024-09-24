#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next, *prev;
};
node *head=NULL, *last=NULL;

void insert_end(int num){
	node *temp = new node;		//dynamic memory allocation	
	temp->data = num;
	temp->next = NULL;
	temp->prev = NULL;
	if(head==NULL){
		//insert first node
		head = temp;
		last = temp;	
	} else {
		last->next = temp;
		temp->prev = last;
		last = temp;
	}
}
void insert_beg(int num){
	node *temp = new node;
	temp->data = num;
	temp->next = NULL;
	temp->prev = NULL;
	if(head==NULL){
		//insert first node
		head = temp;
		last = temp;	
	} else {
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}
void del_beg(){
	if(head==NULL){
		cout<<"Underflow !! No element to delete.";
	}
	else{
		//deleteing head node
		node *temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;	
	}
}
void del_end(){
	if(head==NULL){
		cout<<"Underflow !! No element to delete.";
	}
	else{
		//deleteing last node
		node *temp = last;
		last = last->prev;
		last->next = NULL;
		delete temp;
	}
}
void show(){
	if(head==NULL){
		cout<<"No element to display.";
	}
	else{
		cout<<"\nThe List is \n";
		node *ptr = head;
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
		cout<<"\n1. Insert Beg";
		cout<<"\n2. Insert End";
		cout<<"\n3. Delete Beg";
		cout<<"\n4. Delete End";
		cout<<"\nEnter choice : ";
		cin>>choice;
		switch(choice){
			case 1:		cout<<"\nEnter data : ";
						cin>>n;
						insert_beg(n);
						show();		
						break;
			case 2:		cout<<"\nEnter data : ";
						cin>>n;
						insert_end(n);
						show();
						break;
			case 3:		del_beg();
						show();		
						break;
			case 4:		del_end();
						show();
						break;
			default:	cout<<"\nWrong choice input !!";
		}
		
		cout<<"\nDo you want to perform another operation on list : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}
