#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[100];
public:
    MyString() {}
    MyString(const char* c) {
        strcpy(str, c);
    }

    MyString operator-(const MyString& s) {
        MyString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3 = s1 - s2;
    s3.display();  // Output: Hello, World!
    return 0;
}
