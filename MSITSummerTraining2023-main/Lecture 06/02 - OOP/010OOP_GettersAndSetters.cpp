#include<iostream>

using namespace std;

class customer {

	char name[100];
	int age;
	char gender;
	double credits;

public :

	customer() {
		cout << "I am inside the default constructor" << endl;
	}

	customer(char* n, int a, char g, double c) {
		cout << "I am inside the parameterised constructor of the customer class" << endl;
		strcpy(name, n);
		age = a;
		gender = g;
		credits = c;
	}

	void printCustomerInfo() {
		cout << "\nCustomer Information\n";
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Gender : " << gender << endl;
		cout << "Credits : " << credits << endl;
	}

	void setAge(int a) {
		age = a;
	}

	int getAge() {
		return age;
	}

};

int main() {

	char str[] = "sakura";

	customer c(str, 20, 'F', 1000);

	// c.age = 21;

	c.setAge(21);

	// cout << c.getAge() << endl;

	c.printCustomerInfo();

	return 0;
}