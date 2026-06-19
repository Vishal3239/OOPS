#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called" << endl;
    }

    ~Student() {   // Destructor
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1;  // constructor will be called automatically

    cout << "Inside main function" << endl;

    return 0; // yahan destructor automatically call hoga
}