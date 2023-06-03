#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	srand(time(0));

	/*list<int> l = { 21, 9, -13, 45, -82, 17 };
	int sum = 0;

	for_each(l.begin(), l.end(), [&sum](int el)->void {
		sum += el;
	});

	cout << "Sum: " << sum << endl;*/



	/*list<int> l = { 21, 9, -13, 45, -82, 17 };
	int value;
	cout << "Enter number: ";
	cin >> value;

	l.remove_if([value](int element) {
		return element < value;
		});

	for (auto it : l)
		cout << it << " ";
	cout << endl;*/



	/*int a = 5, b = 9;
	auto f = [&]() {
		a += b;
		cout << a << " | " << b << endl;
	};

	f();*/

	/*int a = 5;
	auto f = [&a]() {
		a = 32;
		cout << a << endl;
	};

	f();*/





	return 0;
}