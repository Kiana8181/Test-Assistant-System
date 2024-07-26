# Test Assistant System

## Project Description
The overall goal of this project is to design a testing platform using the C++ programming language and applying the principles of object orientation. This testing system has two panels: management and user. To enter each of these panels, a username and password are required.

### Login Page
- If the user has already registered in the system, they can log in using their username and password.
- If the user has not registered, they must first register in the system and then log in.

#### Registration Forms
- **Student Registration**: Includes fields for name, family name, student number, username, and password.
- **Manager Registration**: Includes fields for name, family name, username, and password. The username must be unique.

## Features

### Control Panel (Manager)
1. **Creating an Exam and Adding Students**:
    - Students can be added to the exam manually, with each student having a first and last name and a student number.
    - Added students do not need to register separately; their username and password will automatically be the same as their student number.

2. **Exam Timing**:
    - The administrator can set the start time, duration, and end time for the test. The system time is used for these settings.

3. **Designing the Exam**:
    - The administrator can provide all questions to users at once.
    - The questions can be of three types: true/false, multiple-choice, and descriptive.

4. **User Management**:
    - The administrator can ban one or more users from taking the exam.
    - After the test, the administrator can view student answers and assign grades.

5. **Exam History**:
    - The administrator can view past exams' history, including results, exam time, participants, duration, excluded students, and average grades.

### User Panel (Student)
1. **Login and Registration**:
    - Users can either log in or register if they haven't already.

2. **Access to Tests**:
    - Users do not have access to any tests until an administrator adds them to a test.
    - After being added to a test, the test details (name, time, and specifications) are displayed on the test information page.

3. **Taking the Test**:
    - Users cannot access test questions before the test time.
    - At the test time, users can start the test and view the questions.

4. **Exam Interface**:
    - Displays the number and format of each question.
    - Provides a place for users to answer each question.
    - Shows the total remaining time and, if applicable, the remaining time for each question.

5. **Post-Test**:
    - After completing the test, users can see their overall score, score per question, rank, and the average score of the exam.
    - If the test has not been corrected, the phrase "Correcting" is visible.

## Technologies Used

### C++ Programming Language
The core logic and functionality of the application are implemented using C++. The object-oriented principles are applied to design the system's structure and manage the different components effectively.

### Windows Forms Application
Windows Forms (WinForms) is used to create the graphical user interface (GUI) for this project. WinForms provides a rich set of controls and components to build desktop applications with a user-friendly interface.

#### Key Components Used in Windows Forms
- **Forms**: Used to create different windows for login, registration, management, and user panels.
- **TextBoxes**: For input fields like username, password, student number, etc.
- **Buttons**: To trigger actions like login, register, start test, etc.
- **Labels**: To display text and instructions to the user.
- **DataGridView**: To display lists of students, exams, and results.
- **Timers**: To manage and display the test duration and remaining time.

### Visual Studio
Visual Studio is the integrated development environment (IDE) used for this project. It provides powerful tools for coding, debugging, and designing the Windows Forms Application.

## Getting Started

### Prerequisites
- Windows OS
- Visual Studio with C++ and Windows Forms Application support

### Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/Kiana8181/Test-Assistant-System.git
    ```
2. Open the project in Visual Studio.
3. Build the project to install necessary dependencies.

### Usage
1. Run the application.
2. Register as a manager or student.
3. Log in using your credentials.
4. Managers can create and manage exams, and students can participate in exams once added by a manager.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
