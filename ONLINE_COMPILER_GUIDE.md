# Quick Start: Test the Program Online

Since no C++ compiler is installed locally, you can test the Student Marksheet System using an online compiler:

## 🌐 Online Compiler Method (Immediate Testing)

1. **Go to an online C++ compiler**:
   - [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler) (Recommended)
   - [Replit](https://replit.com/languages/cpp)
   - [CodeChef IDE](https://www.codechef.com/ide)

2. **Copy the entire code from `Student-Marksheet.cpp`**

3. **Paste it in the online editor**

4. **Click "Run" to test the program**

## 📝 Sample Test Sequence

Once the program runs online, try this sequence:

```
1. Choose Admin Login (1)
2. Register New Student (1)
   - Roll Number: 101
   - Name: John Doe  
   - Class: 10th A

3. Enter Student Marks (2)
   - Roll Number: 101
   - English: 85
   - Math: 92
   - Science: 78
   - SST: 66
   - Hindi: 72

4. View the generated marksheet (y)

5. Go back to main menu
6. Choose Student Login (2)
   - Roll Number: 101
7. See the formatted marksheet
```

## 💻 Install Local Compiler (Recommended)

For permanent use, install a C++ compiler:

### Option 1: MinGW-w64 (Lightweight)
1. Download from: https://github.com/niXman/mingw-builds-binaries/releases
2. Download: `x86_64-13.2.0-release-posix-seh-ucrt-rt_v11-rev1.7z`
3. Extract to `C:\mingw64`
4. Add `C:\mingw64\bin` to Windows PATH
5. Restart command prompt
6. Run: `compile_and_run.bat`

### Option 2: Visual Studio Community (Full Featured)
1. Download: https://visualstudio.microsoft.com/vs/community/
2. Install with "Desktop development with C++" workload
3. Use "Developer Command Prompt for VS"
4. Run: `cl Student-Marksheet.cpp`

### Option 3: Code::Blocks (IDE)
1. Download: http://www.codeblocks.org/downloads
2. Choose "codeblocks-20.03mingw-setup.exe"
3. Open Student-Marksheet.cpp in Code::Blocks
4. Press F9 to build and run

After installation, the `compile_and_run.bat` file will work automatically!
