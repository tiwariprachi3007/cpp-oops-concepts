#include <iostream>
#include <vector>
using namespace std;

class Student {
    string name;
    int roll;
public:
    Student(string n, int r) : name(n), roll(r) {}
    void display() { cout << "Roll: " << roll << ", Name: " << name << endl; }
};

class Database {
    vector<Student> students;
public:
    void addStudent(Student s) { students.push_back(s); }
    void showAll() {
        cout << "👩‍🎓 Student Database:\n";
        for(auto &s : students) s.display();
    }
};

int main() {
    Database db;
    db.addStudent(Student("Prachi", 1));
    db.addStudent(Student("Amit", 2));
    db.addStudent(Student("Riya", 3));
    db.showAll();
    return 0;
}
