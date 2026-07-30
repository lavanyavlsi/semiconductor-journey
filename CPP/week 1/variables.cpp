#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    float cgpa;
    string department;
    bool vlsi;
    string language;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cin.ignore();   // Clears the Enter key left in the input buffer

    cout << "Enter your department: ";
    getline(cin, department);

    cout << "Do you like VLSI? (1 = Yes, 0 = No): ";
    cin >> vlsi;

    cin.ignore();

    cout << "Enter your favorite programming language: ";
    getline(cin, language);

    cout << "\n------ Student Profile ------\n\n";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Department: " << department << endl;
    cout << "Do you like VLSI?: " << vlsi << endl;
    cout << "Favorite Language: " << language << endl;

    return 0;
}