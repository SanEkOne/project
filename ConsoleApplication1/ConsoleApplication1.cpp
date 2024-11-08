#include <iostream>
#include <string.h>

using namespace std;

class Student {
	string name;
	int age;
	string surname;
public:
	Student() {
		name = "Sanek";
		age = 54;
		surname = "Ostapenko";
	}
	  Student(string name, int age, string surname) {
		  this->name = name;
		  this->age = age;
		  this->surname = surname;
	  }

	  Student(const Student& obj) {
		  this->name = obj.name;
		  this->age = obj.age;
		  this->surname = obj.surname;
	  }

	  void PrintInfoAboutStudent() {
		  cout << "Student name: " << this->name << endl;
		  cout << "Student age: " << this->age << endl;
		  cout << "Student surname: " << this->surname << endl;
	  }

	  void ChangeInfoAboutStudent() {
		  cout << "Enter a new name of student: " << endl;
		  cin >> this->name;
		  cout << "Enter a new age of student: " << endl;
		  cin >> this->age;
		  cout << "Enter a new surname of student: " << endl;
		  cin >> this->surname;
	  }

	  string GetName() {
		  return this->name;
	  }
	  string GetSurname() {
		  return this->surname;
	  }
	  int GetAge() {
		  return this->age;
	  }

	  void SetName(const string name) {
		  this->name = name;
	  }
	  void SetSurname(const string surname) {
		  this->surname = surname;
	  }
	  void SetAge(const int age) {
		  this->age = age;
	  }
};


void main() {
	Student obj;
	obj.PrintInfoAboutStudent();
	obj.ChangeInfoAboutStudent();
	obj.PrintInfoAboutStudent();
}