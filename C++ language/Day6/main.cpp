#include <iostream>
using namespace std;

class MyClass {
	private:
		int value;
		
	public:
		MyClass() : value(0){}
		
		// Prefic increment
		MyClass& operator++(){
			++value;
			return *this;
		}
		
		// Postfix increment
		MyClass operator++ (int){
			MyClass temp = *this;
			++value;
			return temp;
		}
		
		// Prefix decrement
		MyClass& operator-- (){
			--value;
			return *this;
		}
		
		// Postfix decrement
		MyClass operator--(int){
			MyClass temp = *this;
			--value;
			return temp;
		}
		
		void display() const {
	 		 cout << "Value: " << value << endl;
		}
};

int main(){
	MyClass obj;
	
	cout << "Initial ";
	obj.display();
	
	cout << "After prefix increment ";
	++obj;
	obj.display();
	
	cout << "After postfix increment ";
	obj++;
	obj.display();
	
	cout << "After prefix decrement ";
	--obj;
	obj.display();
	
	cout << "After postfix decrement ";
	obj--;
	obj.display();
	
	return 0;
}



/*
Initial Value: 0
After prefix increment Value: 1
After postfix increment Value: 2
After prefix decrement Value: 1
After postfix decrement Value: 0

--------------------------------
Process exited after 0.1404 seconds with return value 0
*/

