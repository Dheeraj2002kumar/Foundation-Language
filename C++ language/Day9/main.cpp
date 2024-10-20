// Template
// Program to add, subtract, multiply and  divide two numbers using class template

#include<iostream>
using namespace std;
template<class T>

class Calculator{
	private:
		T num1, num2;
	
	public:
		Calculator(T n1, T n2){
			num1 = n1;
			num2 = n2;
		}
		
		void displayResult(){
			cout << "Number are: " << num1 << " and " << num2 << "." << endl;
			cout << "Addition is: " << add() << endl;
			cout << "Subtraction is: " << subtract() << endl;
			cout << "Product is: " << multiply() << endl;
			cout << "Division is: " << divide() << endl;
		}
		
		T add(){
			return num1 + num2;
		}
		
		T subtract(){
			return num1 - num2;
		}
		
		T multiply(){
			return num1 *  num2;
		}
		
		T divide(){
			return num1 / num2;
		}
};

int main(){
	Calculator<int>intCalc(2, 1);
	Calculator<float>floatCalc(2.4, 1.2);
	cout << "Int results: " << endl;
	intCalc.displayResult();
	cout << endl << "Float results: " << endl;
	floatCalc.displayResult();
	return 0;
}


/*
Int results:
Number are: 2 and 1.
Addition is: 3
Subtraction is: 1
Product is: 2
Division is: 2

Float results:
Number are: 2.4 and 1.2.
Addition is: 3.6
Subtraction is: 1.2
Product is: 2.88
Division is: 2

--------------------------------
Process exited after 0.1501 seconds with return value 0
Press any key to continue . . .
*/
