#include <iostream>
using namespace std;
class student {
 public:
 char name[50];
 int roll;
 char grade;
} s[3];
int main() {
 cout << "Enter information of students: " << endl;
 for(int i = 0; i < 3; ++i) {
 s[i].roll = i+1;
 cout << "For roll number" << s[i].roll << "," << endl;
 cout << "Enter name: ";
 cin >> s[i].name;
 cout << "Enter Grade: ";
 cin >> s[i].grade;
 cout << endl;
 }
 cout << "Displaying Information: " << endl;
 for(int i = 0; i < 3; ++i) {
 cout << "\nRoll number: " << i+1 << endl;
 cout << "Name: " << s[i].name << endl;
 cout << "Grade: " << s[i].grade << endl;
 }
 return 0;
}
