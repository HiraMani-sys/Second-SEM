#include <iostream>
using namespace std;

class Student {
    int visits;
public:
    Student() : visits(0) {}

    // Overload postfix ++ using a dummy int parameter
    Student operator++(int) {
        Student temp = *this;  // Save current state
        visits++;              // Increment visits
        return temp;           // Return old state
    }

    void display() const {
        cout << "Visits: " << visits << endl;
    }
};

int main() {
    Student s;
    s++;  // Postfix increment
    s++;  // Another visit
    s.display();  // Output: Visits: 2
    return 0;
}
