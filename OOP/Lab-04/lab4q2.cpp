#include <iostream>
using namespace std;

// Base class
class Lecturer {
protected:
    string name;
    int id;

public:
    string courseId;
    string course_Name;

    Lecturer(string n, int i, string cId, string cName)
        : name(n), id(i), courseId(cId), course_Name(cName) {}

    virtual void displayInfo() {
        cout << "Lecturer Name: " << name << endl;
        cout << "Lecturer ID: " << id << endl;
        cout << "Course ID: " << courseId << endl;
        cout << "Course Name: " << course_Name << endl;
    }
};

// Derived class: Part-Time Faculty
class PartTimeFaculty : public Lecturer {
private:
    double payPerHour;

public:
    PartTimeFaculty(string n, int i, string cId, string cName, double pay)
        : Lecturer(n, i, cId, cName), payPerHour(pay) {}

    void displayInfo() override {
        Lecturer::displayInfo();
        cout << "Pay per hour: $" << payPerHour << endl;
    }
};

// Derived class: Full-Time Faculty
class FullTimeFaculty : public Lecturer {
private:
    double salary;

public:
    FullTimeFaculty(string n, int i, string cId, string cName, double sal)
        : Lecturer(n, i, cId, cName), salary(sal) {}

    void displayInfo() override {
        Lecturer::displayInfo();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Lecturer* faculty;

    PartTimeFaculty pt("Raj", 101, "CSE101", "Computer Science", 500);
    FullTimeFaculty ft("Anita", 102, "MAT201", "Mathematics", 75000);

    cout << "\nPart-Time Faculty Details:\n";
    faculty = &pt;
    faculty->displayInfo();

    cout << "\nFull-Time Faculty Details:\n";
    faculty = &ft;
    faculty->displayInfo();

    return 0;
}
