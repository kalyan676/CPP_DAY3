#include <iostream>
using namespace std;

class student
{
	private:
		char  name[30];
		int   rollNo;
		int   total;
		float perc;
		char g;
		
	public:
		void getDetails(void);
		void putDetails(void);
};
void student::getDetails(void){
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter marks: ";
	cin >> total;
	cout<<"Enter the grade:";
	cin>>g;
	
}
void student::putDetails(void){
	cout << "Student details:\n";
	cout << "Name:"<< name <<"\n"<< "Roll Number:" << rollNo <<"\n"<< "Total:" << total <<"\n"<< "Grade:" << g<<"\n";
}

int main()
{
	student std1,std2,std3;
	cout<<"Enter the details of the students:\n";
	std1.getDetails();
	std2.getDetails();
	std3.getDetails();
	
	std1.putDetails();
	std2.putDetails();
	
	std3.putDetails();
	
	return 0;
}
