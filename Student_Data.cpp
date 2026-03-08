#include <iostream>
using namespace std;

typedef struct Student {
    char name[100];
    char Father_name[100];
    char Mother_name[100];
    char address[100];
        int Batch = 26;
        int University_Code = 115;
        int Collage_code = 9018;
        string rollnumber;
} student;
int main() {
    int number_of_students;
    cout << "How many students do you want to enter? ";
    cin >> number_of_students;
    cin.ignore(); // To ignore the newline character left in the input buffer after reading the number of students

    student students[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        int Current = i + 1;
        string add = " "; 
        if (Current < 10 ){
            add = "000";
        }else if (Current < 100){
            add = "00";
        }else if (Current < 1000){
            add = "0";
        }

        students[i].rollnumber = to_string(students[i].Batch) + to_string(students[i].University_Code) + to_string(students[i].Collage_code) + add + to_string(Current);
        cout << "\nEntering information for student " << i + 1 << ":" << endl;
        cout << "Enter Name of Student: "; 
        cin.getline(students[i].name, 100);
        cout << "Enter Father's Name of Student: ";
        cin.getline(students[i].Father_name, 100);
        cout << "Enter Mother's name of Student: ";
        cin.getline(students[i].Mother_name, 100);
        cout << "Enter Address of Student: ";
        cin.getline(students[i].address, 100);
    }

    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < number_of_students; i++) {
        cout << "\nStudent " << i + 1 << " Information is Ready. Please Chek " << endl;
        cout << "---------------------------------" << endl;
        cout << "|Student Roll Number: " << students[i].rollnumber << endl;
        cout << "|Student Name: " << students[i].name << endl;
        cout << "|Student Father's Name: " << students[i].Father_name << endl;
        cout << "|Student Mother's Name: " << students[i].Mother_name << endl;
        cout << "|Student Address: " << students[i].address << endl;
        
    }
    return 0;
}