#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    
    virtual void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    
    
    virtual ~Person() {}
};

class Student : public Person {
protected:
    string studentID;
    string course;
public:
    Student(string n, int a, string id, string c) 
        : Person(n, a), studentID(id), course(c) {}
    
    void displayInfo() override {
        Person::displayInfo(); // call parent's function
        cout << "Student ID: " << studentID << ", Course: " << course << endl;
    }
};

class BMEstudent : public Student {
private:
    string specialization;
    int year;
public:
    BMEstudent(string n, int a, string id, string c, string spec, int y)
        : Student(n, a, id, c), specialization(spec), year(y) {}
    
    void displayInfo() override {
        Student::displayInfo(); // call parent's function
        cout << "Specialization: " << specialization << ", Year: " << year << endl;
    }
};

int main() {
    BMEstudent b("Jonathan", 21, "25/U/07967/PS", "Biomedical Engineering", "Medical Imaging", 2);
    b.displayInfo();
    return 0;
}