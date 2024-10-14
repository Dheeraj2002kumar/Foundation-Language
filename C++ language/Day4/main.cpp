// Enumeration
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thrsday, Friday, saturday
};

int main(){
	week today;
	today = Wednesday;
	cout << "Day" << today + 1;
	return 0;
}
