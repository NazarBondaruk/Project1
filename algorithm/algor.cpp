#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

template<class T>
void print_vector(vector<T> v) {
	cout << string(100, '-');
	cout << "\nSize: " << v.size() << endl;

	for (auto it : v)
		cout << it << " ";
	cout << endl;
	cout << string(100, '-') << endl;
}

bool sortAsc(int a, int b) {
	return a < b;
}

bool sortDesc(int a, int b) {
	return a > b;
}

class employee {
	string name;
	int salary;
public:
	employee(string name, int salary): name(name), salary(salary) {}

	string get_name() const { return name; }
	int get_salary() const { return salary; }

	void print() const {
		cout << "Name: " << name << " | Salary: " << salary << endl;
	}
};

bool operator >(const employee& e1, const employee& e2) { return e1.get_name() < e2.get_name(); }
ostream& operator<<(ostream& os, const employee& e) { e.print(); return os; }

class functor {
public:
	bool operator()(const employee& e1, const employee& e2) {
		return e1.get_salary() > e2.get_salary();
	}
};

int main() {
	srand(time(0));

	vector<int> v = { 21, 9, -13, 45, 1, -82, 17 };
	print_vector(v);

	random_shuffle(v.begin(), v.end());
	print_vector(v);



	//vector<int> v = { 21, 9, -13, 45, 1, -82, 17 };
	//sum
	/*auto res = accumulate(v.begin(), v.end(), 0);
	cout << "Sum: " << res;*/

	/*auto res = accumulate(v.begin(), v.end(), 0, plus<int>());
	cout << "Sum: " << res;*/

	/*vector<employee> emps = {
		employee("Jack", 2300), employee("John", 2300), employee("Lewis", 5000), employee("Max", 4950), employee("Alex", 2100)
	};
	print_vector(emps);

	auto res = accumulate(emps.begin(), emps.end(), 0, [](int sum, const employee& emp) {return sum + emp.get_salary(); });
	cout << "Sum: " << res;*/


	//dif
	/*auto res = accumulate(v.begin(), v.end(), 0, minus<int>());
	cout << "Dif: " << res;*/

	/*auto res = accumulate(v.begin(), v.end(), 1, [](int res, int s) {return res * s; });
	cout << "Mul: " << res;*/



	/*vector<employee> emps = {
		employee("Jack", 2300), employee("John", 2300), employee("Lewis", 5000), employee("Max", 4950), employee("Alex", 2100)
	};
	print_vector(emps);

	auto max_el = max_element(emps.begin(), emps.end(), [](const employee& emp, const employee& emp2) {
		return emp.get_name().length() < emp2.get_name().length(); 
	});
	max_el->print();*/


	/*vector<int> v = { 21, 9, -13, 45, 0, -82, 17 };
	print_vector(v);

	auto max_el = max_element(v.begin(), v.end());
	cout << *max_el;*/




	/*string txt = "hello world hello world hello world";
	cout << "Text: " << txt << endl;

	auto it = remove(txt.begin(), txt.end(), ' ');
	txt.erase(it, txt.end());
	cout << " Edited text: " << txt << endl;*/


	/*vector<int> v = { 21, 9, -13, 45, 0, -82, 17 };
	vector<employee> emps = {
		employee("Jack", 2300), employee("John", 2300), employee("Lewis", 5000), employee("Max", 4950), employee("Alex", 2100)
	};

	print_vector(v);
	print_vector(emps);*/



	//--------copy()
	/*vector<employee> res;
	copy(emps.begin() + 2, emps.end(), back_inserter(res));
	print_vector(res);*/

	/*print_vector(v);
	vector<int> res;
	copy(v.begin() + 2, v.end(), back_inserter(res));
	print_vector(res);*/

	//------------copy_if()
	/*vector<int> res;
	copy_if(v.begin(), v.end(), back_inserter(res), [](int value) {return value > 0; });
	print_vector(res);*/

	/*vector<employee> res;
	copy_if(emps.begin(), emps.end(), back_inserter(res), [](const employee& emp) {return emp.get_salary() > 3000; });
	print_vector(res);*/

	
	//-------------remove()
	/*auto it = remove(v.begin(), v.end(), 45);
	v.erase(it, v.end());
	print_vector(v);*/


	//-------------remove_if()
	/*auto it = remove_if(v.begin(), v.end(), [](int value) {return value % 2 == 0; });
	v.erase(it, v.end());
	print_vector(v);*/

	/*auto it = remove_if(emps.begin(), emps.end(), [](const employee& emp) { return emp.get_salary() < 2500; });
	emps.erase(it, emps.end());
	print_vector(emps);*/


	/*vector<employee> v = {
		employee("Jack", 2300), employee("John", 2300), employee("Lewis", 5000), employee("Max", 4950), employee("Alex", 2100)
	};

	auto find_emp = find_if(v.begin(), v.end(), [](const employee& e) {return e.get_name() == "Max"; });
	if (find_emp == v.end())
		cout << "\nnot found\n";
	else cout << "\nfound: " << *find_emp;*/



	//vector<int> v = { 21, 9, -13, 45, 0, -82, 17 };


	////find()
	///*print_vector(v);

	//auto res = find(v.begin(), v.end(), 100);
	//if (res == v.end())
	//	cout << "\nnot found\n";
	//else cout << "\nfound: " << *res;*/

	////find_if()
	//auto res = find_if(v.begin(), v.end(), [](int value) {return value < 0; });
	//if (res == v.end())
	//	cout << "\nnot found\n";
	//else cout << "\nfound: " << *res;

	//find_if_not()
	///*auto res = find_if_not(v.begin(), v.end(), [](int value) {return value < 0; });
	//if (res == v.end())
	//	cout << "\nnot found\n";
	//else cout << "\nfound: " << *res;*/







	/*vector<employee> v = {
		employee("Jack", 2300), employee("John", 2300), employee("Lewis", 5000), employee("Max", 4950), employee("Alex", 2100)
	};

	print_vector(v);

	sort(v.begin(), v.end(), [](const employee& e1, const employee& e2) {return e1.get_name() < e2.get_name(); });
	print_vector(v);

	sort(v.begin(), v.end(), functor());
	print_vector(v);*/

	/*auto it = v.begin();
	advance(it, rand() % 4);

	if (it > v.begin())
		cout << v.begin(). << " > " << v.begin().get_name() << endl;*/





	//vector<int> v = { 21, 9, -13, 45, 0, -82, 17 };

	//print_vector(v);

	///*sort(v.begin(), v.end());
	//print_vector(v);

	//sort(v.begin(), v.end(), [](int a, int b) {return a > b; });
	//print_vector(v);*/

	//sort(v.begin(), v.end(), greater<int>());
	//print_vector(v);




	return 0;
}