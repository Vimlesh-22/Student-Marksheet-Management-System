 Student Marksheet System

in C++

Contents

Chapter 1 – Project Overview .................................................... 1
 Introduction ................................................................................ 1
 Objectives ................................................................................... 1
 Scope of the Project ............................................................... 1

Chapter 2 – System Requirements ......................................3
 Hardware Requirements ....................................................3
 Software Requirements ........................................................3

Chapter 3 – System Analysis ............................................... 3
 Existing System .................................................................... 3
 Proposed System ................................................................. 3

Chapter 4 – System Design DFD’s...................................... 4
 DFD Level 0 ........................................................................... 4
 DFD Level 1 ........................................................................... 5
 DFD Level 2 ........................................................................... 5

Chapter 5 – System Implementation ................................ 6
 Function List & Roles ...................................................... 6
 C++ Source Code Structure ............................................ 6

Chapter 6 – Testing and Validation ................................. 7`
 Sample Inputs & Outputs ............................................... 7
 Test Cases ............................................................................ 7

Chapter 7 – Conclusion & Future Scope ....................... 8
 Conclusion ............................................................................ 8
 Limitations ........................................................................... 8
 Future Enhancements ..................................................... 8

📍 Chapter 1 – Project Overview

🧠 Introduction

In the modern era of digital transformation, managing academic data efficiently is critical for educational institutions. Traditionally, student records were maintained manually using physical registers or spreadsheets, which are time-consuming, error-prone, and lack scalability. To address these challenges, this project introduces a Student Management System — a simple yet powerful console-based application developed using C++ that automates the process of storing, updating, and retrieving student academic records.

This system is designed with a user-friendly terminal interface and implements core concepts of Object-Oriented Programming (OOP) and file handling in C++. It caters to two primary users:

Administrator (Admin) – responsible for registering students, entering their marks, and managing the academic database.
Student – can access their individual records, including marks, percentage, grade, pass/fail status, and personalized remarks.
The system not only automates routine academic tasks but also minimizes manual workload and human error. It calculates the overall percentage, assigns grades, and provides remarks based on predefined logic, all in real time.

✨ Key Features:

📥 Student Registration with unique details.
🧮 Automatic calculation of percentage, grade, and remarks.
🔐 Role-based access for admin and student.
💾 File-based data storage (no database required).
📤 Terminal-based output for reports.
This project is ideal for small educational institutions, training centers, and computer science students looking to implement practical C++ projects with real-world use cases.

The Student Management System is a step towards the digitalization of academic workflows and can be further enhanced into a complete web or desktop application in the future.

💻 Chapter 2 – System Requirements

🖥️ Hardware Requirements

🧠 CPU: Intel i3 or above
💾 RAM: 2 GB minimum
🗂️ Storage: 50 MB minimum
⚙️ Software Requirements

🧱 OS: Windows/Linux/macOS
🧰 Compiler: g++, Code::Blocks, Turbo C++
📝 Editor: Notepad++, VS Code (optional)
📊 Chapter 3 – System Analysis

🔎 Existing System

📚 Traditional student records use registers or Excel, which are prone to error and are not scalable.

🆕 Proposed System

💻 Digitized student records
👨‍💼 Admin adds & updates info
🧠 Auto-grade calculation
👨‍🎓 Students view only their data
🧩 Chapter 4 – System Design

🧭 DFD Level 1 (Context)

🔁 Shows the system and its interaction with Admin and Student


A diagram of a student marketer system

AI-generated content may be incorrect.

🧱 DFD Level 2

📥 Input: Add Students, Enter Marks
📤 Output: Generate Result Sheet

A diagram of a diagram

🧬 DFD Level 3

🔎 Detailed processes: grading, remark generation, file handling



🧑‍💻 Chapter 5 – System Implementation

⚙️ Functionality Table

🧑 Role

🔧 Functions

Admin

Add Student, Enter Marks, View All Records

Student

View Marks, Remarks, Grade & Result

🧾 C++ Functions

main() – handles menu
registerStudent() – adds new record
enterMarks() – input marks
calculateGrade() – grade, remarks logic
displayMarks() – terminal output
🧪 Chapter 6 – Testing & Validation

🧾 Sample Output Marksheet

------------------------------------------------------------------------------------------------------------------------------------------------STUDENT MARKSHEET

------------------------------------------------------------------------------------------------------------------------------------------------

Name : Rahul Sharma

Roll No. : 1025

Class : 10th A

------------------------------------------------------------------------------------------------------------

| Subject | Total Marks | Obtained Marks | Result | Remark |

-------------------------------------------------------------------------------------------------------------

| English | 100 | 85 | Pass | Very Good |

| Math | 100 | 92 | Pass | Excellent |

| Science | 100 | 78 | Pass | Very Good |

| SST | 100 | 66 | Pass | Good |

| Hindi | 100 | 52 | Pass | Needs Improvement |

--------------------------------------------------------------------------------------------------------------

Total Marks: 500

Marks Obtained: 373

Percentage: 74.6%

Grade: B

Final Result: PASS

-----------------------------------------------------------------------------------------------------------------

➡️ Overall: 73.3% | Grade: B+ | Result: Pass

🧪 Test Cases

🧑 Admin adds multiple students
👨‍🎓 Student views own record only
🚫 No edit access for students
🏁 Chapter 7 – Conclusion & Future Scope

📌 Conclusion

✔️ The system is efficient for managing basic student records and automates result generation.

⚠️ Limitations

❌ No GUI
⚠️ No password security
🗃️ Data vulnerable to corruption if mishandled