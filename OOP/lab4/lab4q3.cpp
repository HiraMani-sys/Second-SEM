#include<iostream>
using namespace std;

class Student
{
protected:
string name;
int roll_no;
public:
void read()
	{
		cout << "enter the data " << endl;
		cout << "enter the name: " ;
		cin >> name;
		cout << "enter the roll number: ";
		cin >>roll_no;
	}
void display()
	{	
		cout << "Name: " << name << endl;
		cout << "Roll no.: " << roll_no << endl;
	}		
};

class Exam : public Student
{
	protected:
	double marks[5];
	double total , percent;
	public:
	void read_marks()
		{
		for(int i = 0; i <= 4; i++)
			{
				cout << endl << "enter the marks of " << (i + 1) << " Subject: ";
				cin >> marks[i];
			}	
		}
	void display_marks()
	{
		for(int i = 0; i <= 4; i++)
		{
			cout << endl << "the marks of " << i << " Subject: " << marks[i];
			
		}

	}
	void get_total(){
		for(int i = 0; i <= 4; i++)
		{
				
			total += marks[i];
   		}	
	}
	void get_percent()
	{
		percent = (total / 500.0) * 100;
	}
};

class Result : public Exam
{
	public:
	void display_result()
	{
	cout << "\n--- RESULT ---\n";
	display();
	display_marks();
	get_total();
	get_percent();
	cout << endl << "Total: " << total;
	cout << endl << "percent: " << percent << " %";
	}
};
int main(void)
{
	Result s1;
	s1.read();
	s1.read_marks();
	s1.display_result();
}

