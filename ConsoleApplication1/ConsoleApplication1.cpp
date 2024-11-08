#include <iostream>
#include <string.h>

using namespace std;

class Student {
	string name;
	int age;
public:
	Student() {
		name = "Sanek";
		age = 54;
	}
	  Student(string name, int age) {
		  this->name = name;
		  this->age = age;
	  }

	  Student(const Student& obj) {
		  this->name = obj.name;
		  this->age = obj.age;
	  }

	  void PrintInfoAboutStudent() {
		  cout << "Student name: " << this->name << endl;
		  cout << "Student age: " << this->age << endl;
	  }

	  void ChangeInfoAboutStudent() {
		  cout << "Enter a new name of student: " << endl;
		  cin >> this->name;
		  cout << "Enter a new age of student: " << endl;
		  cin >> this->age;
	  }

	  string GetName() {
		  return this->name;
	  }
	  int GetAge() {
		  return this->age;
	  }

	  void SetName(const string name) {
		  this->name = name;
	  }
	  void SetAge(const int age) {
		  this->age = age;
	  }
};


class Group {
	Student* students;
	int AmountOfStudents
		Group() {
		AmountOfStudents = 1;
		students = new Student[AmopuntOfStudents];
	}

	~Group() {
		delete[] students;
		students = nullptr;
	}
};

void main() {
	Student obj;
	obj.PrintInfoAboutStudent();
	obj.ChangeInfoAboutStudent();
	obj.PrintInfoAboutStudent();
}