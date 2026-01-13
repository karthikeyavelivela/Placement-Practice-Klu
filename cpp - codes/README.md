
## Run C++ in VS Code – Windows & macOS

## 1️⃣ Common Requirements (Both OS)

### Install VS Code

Download and install from:
👉 [https://code.visualstudio.com/](https://code.visualstudio.com/)

### Install C/C++ Extension

1. Open VS Code
2. Go to Extensions (`Ctrl + Shift + X`)
3. Search “C/C++”
4. Install C/C++ by Microsoft

-----------------------------------------------------

## 🪟 Windows Setup

### Step 1: Install Compiler (MinGW-w64)

1. Download MinGW-w64 from:
   👉 [https://www.mingw-w64.org/downloads/](https://www.mingw-w64.org/downloads/)
2. During installation:

   * Architecture: `x86_64`
   * Threads: `posix`
   * Exception: `seh`

3. Note the install path (example):
   C:\mingw64\bin

### Step 2: Add Compiler to PATH

1. Open Environment Variables
2. Edit Path
3. Add:
   C:\mingw64\bin
4. Restart VS Code

### Step 3: Verify Installation

Open VS Code terminal (`Ctrl + ``) and run:
g++ --version
If version appears → setup successful ✅

### Step 4: Run C++ Program

g++ filename.cpp
./a.exe


------------------------------------------------------

## 🍎 macOS Setup

### Step 1: Install Xcode Command Line Tools

Open Terminal and run:

```bash
xcode-select --install
```

### Step 2: Verify Compiler

```bash
g++ --version
```

or

```bash
clang++ --version
```

### Step 3: Run C++ Program

```bash
g++ filename.cpp 
./a.exe
```

---

## ▶️ Run Using VS Code Run Button (Optional)

1. Open `.cpp` file
2. Click **Run ▶️** (top right)
3. Select **C++ (G++)**
4. VS Code auto-builds & runs




