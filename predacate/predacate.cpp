#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

bool greater_zero(int a) { return a > 0; }
bool lower_zero(int a) { return a < 0; }

void print_el(int el) {
	cout << el << " ";
}

template <class It, class Pr>
int my_count_if(It first, It last, Pr pred) {
	int count = 0;
	for (; first != last; first++)
		if (pred(*first))
			count++;

	return count;
}

template <class It, class Fn>
Fn my_for_each(It first, It last, Fn func) {
	for (; first != last; first++)
		func(*first);
	
	return func;
}

int main() {
	srand(time(0));

	//vector<int> v = { 21, 6, -17, 90, 5, 8, -12, 7, 0, 9 };
	//int count = count_if(v.begin(), v.end(), greater_zero);
	//cout << "Count: " << count;

	//count = my_count_if(v.begin(), v.end(), greater_zero);
	//cout << "\nMy count: " << count << endl;

	//my_for_each(v.begin(), v.end(), [](int el) {cout << el << " "; });
	////my_for_each(v.begin(), v.end(), print_el);





	/*list<int> l = { 21, 6, -17, 90, 5, 8, -12, 7, 0, 9 };
	l.sort([](int el, int el2) { return el > el2; });

	for_each(l.begin(), l.end(), print_el);*/


	/*vector<int> v = { 21, 6, -17, 90, 5, 8, -12, 7, 0, 9 };
	int count = count_if(v.begin(), v.end(), greater_zero);
	int count_new = count_if(v.begin(), v.end(), lower_zero);

	cout << "Greater than zero: " << count << endl;
	cout << "Lower than zero: " << count_new << endl;*/






	return 0;
}