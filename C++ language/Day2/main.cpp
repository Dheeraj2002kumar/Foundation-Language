//#include <iostream>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main() {
//	if(0){
//		std::cout <<"Good bye";
//	} else {
//		std::cout << "Good";
//	}
//	return 0;
//}

//===============================================
// This program calcuates the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number and
// calculates the average number entered before it.

#include <iostream>
using namespace std;

int main(){
	float num, average, sum = 0.0;
	int i, n;
	cout << "Maximum number of inputs: ";
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cout << "Enter n" << i << ": ";
		cin >> num;
		
		if(num < 0.0){
			// Control of the program move to jump:
			goto jump;
		}
		sum += num;
	}
	jump:
		average = sum / (i - 1);
		cout << "\nAverage = " << average;
		return 0;
}
