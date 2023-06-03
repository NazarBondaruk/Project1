#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

class employee {
	string name;
	int age, salary;
public:
	employee() : name("No instance for this name"), age(0), salary(0) {}

	void set() {
		cout << "Enter name: ";
		cin >> name;

		cout << "Enter age: ";
		cin >> age;

		cout << "Enter salary: ";
		(cin >> salary).get();
	} 

	void print() const {
		cout << string(100, '-');
		cout << "\nName: " << name;
		cout << "\nAge: " << age;
		cout << "\nSalary: " << salary;
		cout << endl << string(100, '-');
	}

	int get_salary() const { return salary; }
};

bool comp(const employee& e){
	return e.get_salary() > 1000;
}

//class functor {
//public:
//	bool operator ()(const employee& e) {
//		return e.get_salary() > 1000;
//	}
//};

class car {
	string manuf; int rel_date;
public:
	void set() {
		cout << "Enter car manufactorer: ";
		cin >> manuf;

		cout << "Enter release date: ";
		(cin >> rel_date).get();
	}

	int get_date() const { return rel_date; }

	void print() const {
		cout << "Manufactorer: " << manuf;
		cout << "\nYear: " << rel_date << endl;
	}
};

class functor {
	int year;
public:
	functor(int year): year(year) {}
	bool operator()(const car& c) {
		return c.get_date() > year;
	}
};

int main() {
	srand(time(0));

	vector<car> cars; int amount, date; 

	cout << "Enter year: ";
	cin >> date;
	functor f(date);

	cout << "Enter amount of cars: ";
	(cin >> amount).get();

	for (int i = 0; i < amount; i++) {
		car c;
		c.set();
		cars.push_back(c);
	}

	cout << "\n\n\n\n";
	for (auto car : cars)
		car.print();

	cout << "\n\n\n\n";

	remove_if(cars.begin(), cars.end(), functor(date));
	//remove_if(cars.begin(), cars.end(), [date](const car& c) {return c.get_date() < date; });

	for (auto car : cars)
		car.print();



	/*vector<employee> emps; int amount;

	cout << "Enter amount of employees: ";
	(cin >> amount).get();

	for (int i = 0; i < amount; i++) {
		employee emp;
		emp.set();
		emps.push_back(emp);
	}

	int count_anon = count_if(emps.begin(), emps.end(), [](const employee& e) {return e.get_salary() > 1000; });
	cout << "\nAnon func count: " << count_anon << endl;

	int count_pred = count_if(emps.begin(), emps.end(), comp);
	cout << "Predicate count: " << count_anon << endl;

	functor f;
	int count_func = count_if(emps.begin(), emps.end(), f);
	cout << "Functor count: " << count_func << endl;*/




	return 0;
}