#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    string course;
    int grade;
    Student(string n, int a, string c, int g) {
        this->name = n;
        this->age = a;
        this->course = c;
        this->grade = g;
    }
    void print() {
      cout << "name: " << this->name << ", Age: " << this->age << ", Course: " << this->course << ", Marks: " << this->grade << endl;
    }

};

int main () {

    Student *std1 = new Student("jay", 20, "ui/ux", 95);
    Student *std2 = new Student("manthan", 19, "full stack", 50);

    std1->print();
    std2->print();
    return 0;
}