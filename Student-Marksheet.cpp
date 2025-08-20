#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

// Student class to manage student records
class Student {
private:
    int rollNo;
    string name;
    string className;
    int english, math, science, sst, hindi;
    int totalMarks, obtainedMarks;
    double percentage;
    string grade;
    string result;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "";
        className = "";
        english = math = science = sst = hindi = 0;
        totalMarks = 500;
        obtainedMarks = 0;
        percentage = 0.0;
        grade = "";
        result = "";
    }

    // Parameterized constructor
    Student(int roll, string n, string cls) {
        rollNo = roll;
        name = n;
        className = cls;
        english = math = science = sst = hindi = 0;
        totalMarks = 500;
        obtainedMarks = 0;
        percentage = 0.0;
        grade = "";
        result = "";
    }

    // Getter methods
    int getRollNo() const { return rollNo; }
    string getName() const { return name; }
    string getClassName() const { return className; }
    int getEnglish() const { return english; }
    int getMath() const { return math; }
    int getScience() const { return science; }
    int getSST() const { return sst; }
    int getHindi() const { return hindi; }
    int getObtainedMarks() const { return obtainedMarks; }
    double getPercentage() const { return percentage; }
    string getGrade() const { return grade; }
    string getResult() const { return result; }

    // Setter methods
    void setRollNo(int roll) { rollNo = roll; }
    void setName(string n) { name = n; }
    void setClassName(string cls) { className = cls; }

    // Method to enter marks for all subjects
    void enterMarks() {
        cout << "\n--- Enter Marks for " << name << " ---\n";
        
        do {
            cout << "Enter English marks (0-100): ";
            cin >> english;
            if (english < 0 || english > 100) {
                cout << "Invalid marks! Please enter between 0-100.\n";
            }
        } while (english < 0 || english > 100);

        do {
            cout << "Enter Math marks (0-100): ";
            cin >> math;
            if (math < 0 || math > 100) {
                cout << "Invalid marks! Please enter between 0-100.\n";
            }
        } while (math < 0 || math > 100);

        do {
            cout << "Enter Science marks (0-100): ";
            cin >> science;
            if (science < 0 || science > 100) {
                cout << "Invalid marks! Please enter between 0-100.\n";
            }
        } while (science < 0 || science > 100);

        do {
            cout << "Enter SST marks (0-100): ";
            cin >> sst;
            if (sst < 0 || sst > 100) {
                cout << "Invalid marks! Please enter between 0-100.\n";
            }
        } while (sst < 0 || sst > 100);

        do {
            cout << "Enter Hindi marks (0-100): ";
            cin >> hindi;
            if (hindi < 0 || hindi > 100) {
                cout << "Invalid marks! Please enter between 0-100.\n";
            }
        } while (hindi < 0 || hindi > 100);

        calculateGrade();
    }

    // Method to calculate grade, percentage and result
    void calculateGrade() {
        obtainedMarks = english + math + science + sst + hindi;
        percentage = (double)obtainedMarks / totalMarks * 100;

        // Determine overall result
        if (english >= 33 && math >= 33 && science >= 33 && sst >= 33 && hindi >= 33) {
            result = "PASS";
        } else {
            result = "FAIL";
        }

        // Assign grade based on percentage
        if (percentage >= 90) {
            grade = "A+";
        } else if (percentage >= 80) {
            grade = "A";
        } else if (percentage >= 70) {
            grade = "B+";
        } else if (percentage >= 60) {
            grade = "B";
        } else if (percentage >= 50) {
            grade = "C";
        } else if (percentage >= 40) {
            grade = "D";
        } else {
            grade = "F";
        }
    }

    // Method to get remark for a subject
    string getRemark(int marks) const {
        if (marks >= 90) return "Excellent";
        else if (marks >= 80) return "Very Good";
        else if (marks >= 70) return "Good";
        else if (marks >= 60) return "Satisfactory";
        else if (marks >= 50) return "Average";
        else if (marks >= 40) return "Needs Improvement";
        else return "Poor";
    }

    // Method to get pass/fail status for a subject
    string getSubjectResult(int marks) const {
        return (marks >= 33) ? "Pass" : "Fail";
    }

    // Method to display detailed marksheet
    void displayMarksheet() const {
        cout << "\n" << string(100, '-') << "\n";
        cout << setw(50) << "STUDENT MARKSHEET" << "\n";
        cout << string(100, '-') << "\n";
        cout << "\nName: " << name << "\n";
        cout << "Roll No.: " << rollNo << "\n";
        cout << "Class: " << className << "\n";
        cout << "\n" << string(100, '-') << "\n";
        
        // Table header
        cout << "| " << setw(10) << left << "Subject" 
             << " | " << setw(12) << "Total Marks" 
             << " | " << setw(15) << "Obtained Marks" 
             << " | " << setw(6) << "Result" 
             << " | " << setw(18) << "Remark" << " |\n";
        cout << string(100, '-') << "\n";
        
        // Subject wise details
        cout << "| " << setw(10) << left << "English" 
             << " | " << setw(12) << "100" 
             << " | " << setw(15) << english 
             << " | " << setw(6) << getSubjectResult(english)
             << " | " << setw(18) << getRemark(english) << " |\n";
             
        cout << "| " << setw(10) << left << "Math" 
             << " | " << setw(12) << "100" 
             << " | " << setw(15) << math 
             << " | " << setw(6) << getSubjectResult(math)
             << " | " << setw(18) << getRemark(math) << " |\n";
             
        cout << "| " << setw(10) << left << "Science" 
             << " | " << setw(12) << "100" 
             << " | " << setw(15) << science 
             << " | " << setw(6) << getSubjectResult(science)
             << " | " << setw(18) << getRemark(science) << " |\n";
             
        cout << "| " << setw(10) << left << "SST" 
             << " | " << setw(12) << "100" 
             << " | " << setw(15) << sst 
             << " | " << setw(6) << getSubjectResult(sst)
             << " | " << setw(18) << getRemark(sst) << " |\n";
             
        cout << "| " << setw(10) << left << "Hindi" 
             << " | " << setw(12) << "100" 
             << " | " << setw(15) << hindi 
             << " | " << setw(6) << getSubjectResult(hindi)
             << " | " << setw(18) << getRemark(hindi) << " |\n";
             
        cout << string(100, '-') << "\n";
        
        // Summary
        cout << "\nTotal Marks: " << totalMarks << "\n";
        cout << "Marks Obtained: " << obtainedMarks << "\n";
        cout << "Percentage: " << fixed << setprecision(1) << percentage << "%\n";
        cout << "Grade: " << grade << "\n";
        cout << "Final Result: " << result << "\n";
        cout << string(100, '-') << "\n";
        cout << "Overall: " << fixed << setprecision(1) << percentage 
             << "% | Grade: " << grade << " | Result: " << result << "\n\n";
    }

    // Method to save student data to file
    void saveToFile(ofstream& file) const {
        file << rollNo << "\n" << name << "\n" << className << "\n"
             << english << "\n" << math << "\n" << science << "\n"
             << sst << "\n" << hindi << "\n" << obtainedMarks << "\n"
             << fixed << setprecision(2) << percentage << "\n"
             << grade << "\n" << result << "\n";
    }

    // Method to load student data from file
    void loadFromFile(ifstream& file) {
        file >> rollNo;
        file.ignore();
        getline(file, name);
        getline(file, className);
        file >> english >> math >> science >> sst >> hindi;
        file >> obtainedMarks >> percentage;
        file.ignore();
        getline(file, grade);
        getline(file, result);
    }
};

// Global vector to store all students
vector<Student> students;
const string FILENAME = "students.txt";

// Function prototypes
void displayMenu();
void adminMenu();
void studentMenu();
void registerStudent();
void enterMarks();
void viewAllStudents();
void viewStudentRecord();
void loadStudentsFromFile();
void saveStudentsToFile();
bool isRollNoExists(int rollNo);
int findStudentByRollNo(int rollNo);

// Main function
int main() {
    loadStudentsFromFile();
    
    int choice;
    cout << "\n========================================\n";
    cout << "   STUDENT MARKSHEET MANAGEMENT SYSTEM\n";
    cout << "========================================\n";
    
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                adminMenu();
                break;
            case 2:
                studentMenu();
                break;
            case 3:
                cout << "\nThank you for using Student Marksheet System!\n";
                cout << "Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 3);
    
    return 0;
}

// Function to display main menu
void displayMenu() {
    cout << "\n========================================\n";
    cout << "              MAIN MENU\n";
    cout << "========================================\n";
    cout << "1. Admin Login\n";
    cout << "2. Student Login\n";
    cout << "3. Exit\n";
    cout << "========================================\n";
}

// Function to display admin menu
void adminMenu() {
    int choice;
    
    do {
        cout << "\n========================================\n";
        cout << "              ADMIN PANEL\n";
        cout << "========================================\n";
        cout << "1. Register New Student\n";
        cout << "2. Enter/Update Student Marks\n";
        cout << "3. View All Students\n";
        cout << "4. View Specific Student Record\n";
        cout << "5. Back to Main Menu\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                registerStudent();
                break;
            case 2:
                enterMarks();
                break;
            case 3:
                viewAllStudents();
                break;
            case 4:
                viewStudentRecord();
                break;
            case 5:
                cout << "\nReturning to Main Menu...\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

// Function to display student menu
void studentMenu() {
    int rollNo;
    cout << "\n========================================\n";
    cout << "             STUDENT PANEL\n";
    cout << "========================================\n";
    cout << "Enter your Roll Number: ";
    cin >> rollNo;
    
    int index = findStudentByRollNo(rollNo);
    if (index != -1) {
        students[index].displayMarksheet();
    } else {
        cout << "\nStudent record not found! Please contact admin.\n";
    }
}

// Function to register a new student
void registerStudent() {
    int rollNo;
    string name, className;
    
    cout << "\n========================================\n";
    cout << "           STUDENT REGISTRATION\n";
    cout << "========================================\n";
    
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    if (isRollNoExists(rollNo)) {
        cout << "\nError: Roll Number already exists!\n";
        return;
    }
    
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Class: ";
    getline(cin, className);
    
    Student newStudent(rollNo, name, className);
    students.push_back(newStudent);
    saveStudentsToFile();
    
    cout << "\nStudent registered successfully!\n";
    cout << "Name: " << name << "\n";
    cout << "Roll No: " << rollNo << "\n";
    cout << "Class: " << className << "\n";
}

// Function to enter marks for a student
void enterMarks() {
    int rollNo;
    
    cout << "\n========================================\n";
    cout << "            ENTER MARKS\n";
    cout << "========================================\n";
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    int index = findStudentByRollNo(rollNo);
    if (index != -1) {
        students[index].enterMarks();
        saveStudentsToFile();
        cout << "\nMarks entered successfully!\n";
        
        char choice;
        cout << "\nDo you want to view the marksheet? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            students[index].displayMarksheet();
        }
    } else {
        cout << "\nStudent not found! Please register the student first.\n";
    }
}

// Function to view all students
void viewAllStudents() {
    cout << "\n========================================\n";
    cout << "           ALL STUDENTS LIST\n";
    cout << "========================================\n";
    
    if (students.empty()) {
        cout << "No students registered yet!\n";
        return;
    }
    
    cout << setw(10) << left << "Roll No" 
         << setw(25) << "Name" 
         << setw(15) << "Class"
         << setw(12) << "Percentage"
         << setw(8) << "Grade"
         << setw(8) << "Result" << "\n";
    cout << string(80, '-') << "\n";
    
    for (const auto& student : students) {
        cout << setw(10) << left << student.getRollNo()
             << setw(25) << student.getName()
             << setw(15) << student.getClassName()
             << setw(12) << fixed << setprecision(1) << student.getPercentage() << "%"
             << setw(8) << student.getGrade()
             << setw(8) << student.getResult() << "\n";
    }
    cout << string(80, '-') << "\n";
}

// Function to view specific student record
void viewStudentRecord() {
    int rollNo;
    
    cout << "\n========================================\n";
    cout << "         VIEW STUDENT RECORD\n";
    cout << "========================================\n";
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    int index = findStudentByRollNo(rollNo);
    if (index != -1) {
        students[index].displayMarksheet();
    } else {
        cout << "\nStudent record not found!\n";
    }
}

// Function to check if roll number already exists
bool isRollNoExists(int rollNo) {
    for (const auto& student : students) {
        if (student.getRollNo() == rollNo) {
            return true;
        }
        
    }
    return false;
}

// Function to find student by roll number
int findStudentByRollNo(int rollNo) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollNo() == rollNo) {
            return i;
        }
    }
    return -1;
}

// Function to load students from file
void loadStudentsFromFile() {
    ifstream file(FILENAME);
    if (!file.is_open()) {
        return; // File doesn't exist yet, which is fine
    }
    
    students.clear();
    Student temp;
    while (file.peek() != EOF) {
        temp.loadFromFile(file);
        students.push_back(temp);
    }
    file.close();
}

// Function to save students to file
void saveStudentsToFile() {
    ofstream file(FILENAME);
    if (!file.is_open()) {
        cout << "Error: Unable to save data to file!\n";
        return;
    }
    
    for (const auto& student : students) {
        student.saveToFile(file);
    }
    file.close();
}