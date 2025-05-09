#include <iostream>
using namespace std;

// ----- Base Class -----
class Individual {
protected:
    string fullName;
    int years;
public:
    virtual void inputData() {
        cout << "Enter Name: ";
        getline(cin, fullName);
        cout << "Enter Age: ";
        cin >> years;
        cin.ignore();
    }
    virtual void showInfo() const {
        cout << "Name: " << fullName << "\nAge: " << years << endl;
    }
    virtual ~Individual() {}
};

// ----- Derived Class: Learner -----
class Learner : public Individual {
private:
    string courseEnrolled;
    float gradePointAvg;
public:
    void inputData() override {
        Individual::inputData();
        cout << "Enter Enrolled Course: ";
        getline(cin, courseEnrolled);
        cout << "Enter GPA: ";
        cin >> gradePointAvg;
        cin.ignore();
    }
    void showInfo() const override {
        Individual::showInfo();
        cout << "Course: " << courseEnrolled << "\nGPA: " << gradePointAvg << endl;
    }
};

// ----- Derived Class: Faculty -----
class Faculty : public Individual {
private:
    string facultyDept;
    string areaOfExpertise;
public:
    void inputData() override {
        Individual::inputData();
        cout << "Enter Department: ";
        getline(cin, facultyDept);
        cout << "Enter Area of Expertise: ";
        getline(cin, areaOfExpertise);
    }
    void showInfo() const override {
        Individual::showInfo();
        cout << "Department: " << facultyDept << "\nExpertise: " << areaOfExpertise << endl;
    }
};

// ----- Course Structure -----
class Module {
private:
    int moduleCode;
    string moduleTitle;
    int unitCount;
public:
    void collectDetails() {
        cout << "Enter Module Code: ";
        cin >> moduleCode;
        cin.ignore();
        cout << "Enter Module Title: ";
        getline(cin, moduleTitle);
        cout << "Enter Credit Units: ";
        cin >> unitCount;
        cin.ignore();
    }
    void displayDetails() const {
        cout << "Code: " << moduleCode
             << "\nTitle: " << moduleTitle
             << "\nCredits: " << unitCount << endl;
    }
};

// ----- Department Structure -----
class Division {
private:
    string divisionName;
    string divisionLocation;
public:
    void collectDetails() {
        cout << "Enter Division Name: ";
        getline(cin, divisionName);
        cout << "Enter Location: ";
        getline(cin, divisionLocation);
    }
    void displayDetails() const {
        cout << "Division: " << divisionName << "\nLocation: " << divisionLocation << endl;
    }
};

// ----- Main Application -----
int main() {
    Learner student;
    Faculty professor;
    Module course;
    Division dept;

    cout << "--- Student Input ---" << endl;
    student.inputData();

    cout << "\n--- Professor Input ---" << endl;
    professor.inputData();

    cout << "\n--- Course Input ---" << endl;
    course.collectDetails();

    cout << "\n--- Department Input ---" << endl;
    dept.collectDetails();

    cout << "\n=== Student Details ===" << endl;
    student.showInfo();

    cout << "\n=== Professor Details ===" << endl;
    professor.showInfo();

    cout << "\n=== Course Details ===" << endl;
    course.displayDetails();

    cout << "\n=== Department Details ===" << endl;
    dept.displayDetails();

    return 0;
}
