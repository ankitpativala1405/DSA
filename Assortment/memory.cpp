#include <iostream>
#include <vector>
#include <string>

struct Student {
    int id;
    std::string name;
};

class StudentManagementSystem {
private:
    std::vector<Student> students;

public:
    void addStudent(int id, const std::string& name) {
        Student newStudent = {id, name};
        students.push_back(newStudent);
        std::cout << "Student added: " << name << " (ID: " << id << ")\n";
    }

    void displayStudents() {
        std::cout << "List of Students:\n";
        for (const auto& student : students) {
            std::cout << "ID: " << student.id << ", Name: " << student.name << "\n";
        }
    }

    void removeStudentById(int id) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                std::cout << "Removing student: " << it->name << " (ID: " << id << ")\n";
                students.erase(it);
                return;
            }
        }
        std::cout << "Student with ID: " << id << " not found.\n";
    }

    void searchStudentById(int id) {
        for (const auto& student : students) {
            if (student.id == id) {
                std::cout << "Found student: " << student.name << " (ID: " << id << ")\n";
                return;
            }
        }
        std::cout << "Student with ID: " << id << " not found.\n";
    }
};

int main() {
    StudentManagementSystem sms;
    
    sms.addStudent(1, "Alice");
    sms.addStudent(2, "Bob");
    
    sms.displayStudents();
    
    sms.removeStudentById(1);
    
    sms.searchStudentById(2);
    
    return 0;
}