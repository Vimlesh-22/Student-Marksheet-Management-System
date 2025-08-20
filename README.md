# Student Marksheet Management System

A comprehensive console-based C++ application for managing student academic records with role-based access control and automated grade calculations.

## 🚀 Features

- **👨‍💼 Admin Panel**
  - Register new students with unique roll numbers
  - Enter and update marks for all subjects
  - View all student records in tabular format
  - View detailed individual student marksheets

- **👨‍🎓 Student Panel**
  - View personal marksheet by entering roll number
  - Detailed subject-wise breakdown with remarks
  - Overall performance summary

- **🧮 Automatic Calculations**
  - Percentage calculation based on total marks
  - Grade assignment (A+ to F)
  - Pass/Fail determination (minimum 33 marks per subject)
  - Subject-wise remarks and performance indicators

- **💾 Data Persistence**
  - File-based storage system (`students.txt`)
  - Automatic save/load functionality
  - Data integrity and error handling

## 📋 System Requirements

### Hardware Requirements
- **CPU**: Intel i3 or above
- **RAM**: 2 GB minimum
- **Storage**: 50 MB minimum

### Software Requirements
- **OS**: Windows/Linux/macOS
- **Compiler**: g++, Visual Studio, Code::Blocks, or online compiler
- **Optional**: Git for version control

## 🛠️ Installation & Setup

### Option 1: Local Compilation

#### Prerequisites
Install a C++ compiler:

1. **MinGW-w64** (Recommended for Windows)
   ```bash
   # Download from: https://github.com/niXman/mingw-builds-binaries/releases
   # Add to PATH: C:\mingw64\bin
   ```

2. **Visual Studio Community**
   ```bash
   # Download from: https://visualstudio.microsoft.com/
   # Install "Desktop development with C++" workload
   ```

#### Compilation
```bash
# Clone the repository
git clone https://github.com/yourusername/Student-Marksheet-Management-System.git
cd Student-Marksheet-Management-System

# Compile using g++
g++ Student-Marksheet.cpp -o Student-Marksheet.exe

# Or use the provided batch file (Windows)
compile_and_run.bat
```

### Option 2: Online Testing

Test immediately without installation:

1. Copy the code from `Student-Marksheet.cpp`
2. Go to [OnlineGDB C++ Compiler](https://www.onlinegdb.com/online_c++_compiler)
3. Paste the code and click "Run"

## 📖 Usage Guide

### Sample Test Sequence

1. **Admin Registration**
   ```
   Choose: Admin Login (1)
   → Register New Student (1)
   → Roll Number: 101
   → Name: John Doe
   → Class: 10th A
   ```

2. **Enter Marks**
   ```
   Choose: Enter/Update Student Marks (2)
   → Roll Number: 101
   → English: 85, Math: 92, Science: 78, SST: 66, Hindi: 72
   → View marksheet: y
   ```

3. **Student Access**
   ```
   Main Menu → Student Login (2)
   → Roll Number: 101
   → View detailed marksheet
   ```

### Grade Calculation Logic

| Percentage | Grade | Remark |
|------------|-------|---------|
| 90-100%    | A+    | Excellent |
| 80-89%     | A     | Very Good |
| 70-79%     | B+    | Good |
| 60-69%     | B     | Satisfactory |
| 50-59%     | C     | Average |
| 40-49%     | D     | Needs Improvement |
| Below 40%  | F     | Poor |

**Pass Condition**: Minimum 33 marks in each subject

## 📁 Project Structure

```
Student-Marksheet-Management-System/
│
├── Student-Marksheet.cpp          # Main source code
├── README.md                      # Project documentation
├── PROJECT_SYNOPSIS.md            # Detailed project synopsis
├── compile_and_run.bat           # Windows compilation script
├── COMPILE_INSTRUCTIONS.md       # Setup instructions
├── ONLINE_COMPILER_GUIDE.md      # Online testing guide
├── students.txt                  # Data file (auto-generated)
└── Student Marksheet System.docx # Project documentation
```

## 🔧 Core Components

### Classes and Functions

- **`Student` Class**: Complete OOP implementation
  - Private data members for student information
  - Methods for mark entry, grade calculation, and display
  - File I/O operations for data persistence

- **Key Functions**:
  - `registerStudent()` - Admin student registration
  - `enterMarks()` - Mark entry with validation
  - `calculateGrade()` - Automatic grade computation
  - `displayMarksheet()` - Formatted output generation
  - `saveStudentsToFile()` / `loadStudentsFromFile()` - Data persistence

## 📊 Sample Output

```
================================================================================
                              STUDENT MARKSHEET
================================================================================

Name: John Doe
Roll No.: 101
Class: 10th A

----------------------------------------------------------------------------------------------------
| Subject    | Total Marks | Obtained Marks | Result | Remark             |
----------------------------------------------------------------------------------------------------
| English    | 100         | 85             | Pass   | Very Good          |
| Math       | 100         | 92             | Pass   | Excellent          |
| Science    | 100         | 78             | Pass   | Good               |
| SST        | 100         | 66             | Pass   | Satisfactory       |
| Hindi      | 100         | 72             | Pass   | Good               |
----------------------------------------------------------------------------------------------------

Total Marks: 500
Marks Obtained: 393
Percentage: 78.6%
Grade: B+
Final Result: PASS

Overall: 78.6% | Grade: B+ | Result: PASS
```

## 🧪 Testing & Validation

### Test Cases Covered
- ✅ Multiple student registration
- ✅ Duplicate roll number prevention
- ✅ Mark validation (0-100 range)
- ✅ Grade calculation accuracy
- ✅ File I/O operations
- ✅ Student access restrictions
- ✅ Data persistence across sessions

## 🎯 Future Enhancements (You Can add)

- [ ] **GUI Implementation** using Qt or Windows Forms
- [ ] **Database Integration** (MySQL/SQLite)
- [ ] **Authentication System** with password protection
- [ ] **Report Generation** in PDF format
- [ ] **Data Import/Export** functionality
- [ ] **Advanced Analytics** and statistical reports
- [ ] **Web-based Interface** for remote access
- [ ] **Multi-semester Support**

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

## 👤 Author

**Your Name**
- GitHub: @vimlesh-22 , @vimlesh-2
- Email: 1vimlesh.only@gmail.com

## 🙏 Acknowledgments

- Educational institutions for requirements inspiration
- C++ community for best practices
- Open source contributors for tools and libraries

---

⭐ **If you found this project helpful, please give it a star!** ⭐"# Student-Marksheet-Management-System" 
