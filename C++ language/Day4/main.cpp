// Enumeration
/*
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
*/

/*
Day4
--------------------------------
Process exited after 0.1415 seconds with return value 0
*/

//=========================================================
// Enumeration ex: 2

#include <iostream>
using namespace std;

enum seasons{
	spring = 34, 
	summer = 4, 
	automn = 9, 
	winter = 32
};

int main(){
	seasons s;
	s = summer;
	cout << "Summer = " << s << endl;
	return 0;
}

/*
Summer = 4

--------------------------------
Process exited after 0.01113 seconds with return value 0
*/
