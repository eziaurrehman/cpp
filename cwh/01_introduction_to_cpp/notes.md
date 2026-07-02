# Introduction to C++:

## What is Programming, Programming Language, and Why C++?

## 1. What is Programming

1. **Definition:** Programming can be understood as giving instructions to a computer (machine) to solve real-world problems.
2. **Purpose of Machines:** The basic principle of creating machines was to make life simpler. Machines, following our instructions, help us achieve this goal efficiently.
3. **Role of Programming Languages:** The gap between what humans say and what a machine understands is bridged by a programming language. This makes learning a programming language essential.
4. **Communication Analogy:** Just like humans need a language (English, Hindi, Bangla, etc.) to communicate, computers also need a language to understand our instructions. Examples include C++, C, Python, Java, and more.

## 2. Why C++?

1. **Historical Significance:** C++ was developed in the 1980s by Bjarne Stroustrup as an extension of the C language. Despite its age, it remains widely used and relevant.
2. **Hardware-Level Control:** C++ is considered close to the hardware, allowing programmers to give instructions directly to the system with minimal intermediaries.
3. **Object-Oriented Programming (OOP):** C++ supports object-oriented programming, enabling the creation of real-world software systems with modularity, reusability, and maintainability.
4. **Practical Ease:** While terms like "object-oriented" might sound complex, C++ provides a powerful yet approachable way for programmers to develop efficient and scalable software.

---

# Installation of Visual Studio Code

- Visual studio is a source code editor - free to use, provided & maintained by Microsoft.
- Below is the process of downloading and installing visual studio code:

### Step 1:

- Click on offical websites and you will be redirected to the official download page of VS Code. Download the VS code according to your operating system in use. I will be downloading it for Windows 10 as shown in the below animation.

### Step 2:

- Once the downloading is complete, install VS code on your system like any other application.

## Installation of g++:

- g++ is a compiler that helps us convert our source code into a .exe file. Below is the process of downloading and installing g++:

### Step 1:

- Go to Google and search "MinGW install" and click on the MinGW link, as shown in the image below.

### Step 2:

- Click on the download button on the top right corner menu.

### Step 3:

- After visiting the download page, click on the windows button as shown in the image below to start the downloading

### Step 4:

- After the download - open the program and click "Continue" to start the installation process.

### Step 5:

- After downloading some packages, it will show you a screen, as shown in the image below.
- You have to mark both the boxes as in the image below, and then click on installation on the top left corner menu.
- Finally, click apply changes, and it will start downloading the required packages.

### Step 6:

- After finishing step 5, close the program and open C:// drive. Furthermore, locate the MinGW folder. Go to its bin directory and copy its file path, as shown in the image below.

### Step 7:

- Now right-click on this pc and go to properties

### Step 8:

- After that click on advanced system settings as shown in the image below

### Step 9:

- After that click on "Environment Variables" as shown in the image below

### Step 10:

- After that select path and click on edit as shown in the image below

### Step 11:

- Then, click on new and paste the file path and click ok as shown in the image below

##### After adding the file path now, our g++ compiler is ready, and we can start coding now.

# Writing Our First Program and Executing It:

To write our first C++ program, we need **Visual Studio Code (VS Code)**, which is a popular source code editor. Follow these steps:

## 1. Open a Folder in VS Code:

1. Create a folder for your program.
2. Right-click inside the folder and select **"Open with Code"**.  
   This opens VS Code with that folder as the working context.

## 2. Install Required Extensions:

To make coding in C++ easier, install the following extensions:

1. **C/C++ Extension**
   - Go to the **Extensions menu** in VS Code.
   - Search for `"C/C++"` and click **Install**.
   - This extension provides features like **auto-complete** and **dropdown suggestions**, helping you write code faster.

2. **Code Runner Extension**
   - Search for `"Code Runner"` in the Extensions tab.
   - Click **Install**.
   - This extension allows you to **run programs quickly** without leaving VS Code.

## 3. Create a Program File:

1. Go to the **File menu** → click on **File** → choose **New File**.
2. Name the file `tutorial1.cpp` and press **Enter**.
3. Your program file is now ready, and you can start writing your C++ code.

## 4. Running Your Program:

1. Write your C++ code in the file.
2. Press the **Run button** to execute the code.
3. The output will appear in the **output window** of VS Code.

## Examples of progarm

```
#include<iostream>

int main(){
    std::cout<<"Hello World";
    return 0;
}
```
