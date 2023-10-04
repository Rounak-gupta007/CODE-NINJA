#include <iostream>
#include <string>
using namespace std;

// Structure to store student data
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    int age;
    string department;
};

// Function to input and print student details
void student_details(Student student) {
    cout << "First Name: " << student.firstName << endl;
    cout << "Last Name: " << student.lastName << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
}

int main() {
    Student student;

    // Input student data
    cout << "Enter First Name: ";
    cin >> student.firstName;

    cout << "Enter Last Name: ";
    cin >> student.lastName;

    cout << "Enter Roll Number: ";
    cin >> student.rollNumber;

    cout << "Enter Age: ";
    cin >> student.age;

    cout << "Enter Department: ";
    cin >> student.department;

    // Call the function to print student details
    cout << "\nStudent Details:\n";
    student_details(student);

    return 0;
}
