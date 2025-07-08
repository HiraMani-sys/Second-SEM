#include <iostream>
using namespace std;

class lecturer
{
	public:
		int id;
		string name;
	protected:
		int courseid;
		string course_name;
	void display()
	{
		cout << "id:" << id << "name:" << name << endl;
		cout << "course id:" << id << "course name:" << course_name << endl;
	}	
}

class parttimefaculty : public lecturer
{
	float payperhour;
}

class fulltimefaculty : public lecturer
{
	float salary;
}

int main(void)
{
	
}
