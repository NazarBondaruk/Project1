#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

//void counter() {
//	int count = 0;
//	cout << ++count << " ";
//}

class counter {
	int count;
public:
	counter(): count(0) {}
	void operator()() {
		count++;
		cout << count << endl;
	}
};

class even_oddFunctor {
	int odd, even;
public:
	even_oddFunctor(): odd(0), even(0){}
	void operator()(int el) {
		if (el % 2 == 0) even++;
		else odd++;
	}
	int get_even() const { return even; }
	int get_odd() const { return odd; }
};

int main() {
	srand(time(0));

	vector<int> v = { 21, 6, -17, 90, 5, 8, -12, 7, 0, 9 };
	even_oddFunctor f;

	//for (auto it : v)
	//	f(it);

	f = for_each(v.begin(), v.end(), f);

	cout << "Odd: " << f.get_odd();
	cout << "\nEven: " << f.get_even();



	/*counter c;
	c();
	c();
	c();*/






	return 0;
}