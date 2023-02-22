#include<iostream>
using namespace std;

class human
{
	int id;
	char name[100];
	
	public:
		void set_human()
		{
			cout<<"Enter the student Id:";
			cin>>id;
			fflush(stdin);
			cout<<"Enter the student Name:";
			cin.get(name,100);
		}
	
		void display_human()
		{
			cout<<endl<<id<<"\t"<<name<<"\t";
		}
};

class Student: private human
{
	char course[50];
	int fee;
	
	public:
	void set_s()
		{
			set_human();
			cout<<"Enter the Course Name:";
			fflush(stdin);
			cin.getline(course,50);
			cout<<"Enter the Course Fee:";
			cin>>fee;
		}
		
		void display_s()
		{
			display_human();
			cout<<course<<"\t"<<fee<<endl;
		}
};

main()
{
	Student s;
	s.set_s();
	s.display_s();
	return 0;
}
