## How to Compile and Run the Student Marksheet System

### Prerequisites
You need a C++ compiler installed on your system. Here are some options:

1. **MinGW-w64** (Recommended for Windows)
   - Download from: https://www.mingw-w64.org/
   - Make sure to add it to your system PATH

2. **Visual Studio Community** (Free)
   - Download from: https://visualstudio.microsoft.com/
   - Install with C++ development tools

3. **Code::Blocks** (IDE with built-in compiler)
   - Download from: http://www.codeblocks.org/

### Compilation Instructions

#### Option 1: Using the provided batch file
```bash
compile_and_run.bat
```

#### Option 2: Manual compilation
```bash
g++ Student-Marksheet.cpp -o Student-Marksheet.exe
Student-Marksheet.exe
```

#### Option 3: Using Visual Studio Developer Command Prompt
```bash
cl Student-Marksheet.cpp
Student-Marksheet.exe
```

### Program Features
- **Admin Panel**: Register students, enter marks, view all records
- **Student Panel**: View individual marksheet by entering roll number
- **Automatic Calculations**: Percentage, grade, and pass/fail status
- **File Storage**: All data is saved to `students.txt` automatically
- **Input Validation**: Marks must be between 0-100, unique roll numbers

### Sample Usage
1. Run the program
2. Choose "Admin Login" (Option 1)
3. Register a new student (Option 1)
4. Enter marks for the student (Option 2)
5. View the generated marksheet

### Test the Student Panel
1. After entering marks for a student
2. Go back to main menu
3. Choose "Student Login" (Option 2)
4. Enter the student's roll number
5. View the formatted marksheet

The program automatically saves all data and loads it when restarted.
