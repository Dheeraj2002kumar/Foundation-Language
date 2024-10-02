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

////===============================================
//// This program calcuates the average of numbers entered by the user.
//// If the user enters a negative number, it ignores the number and
//// calculates the average number entered before it.
//
//#include <iostream>
//using namespace std;
//
//int main(){
//	float num, average, sum = 0.0;
//	int i, n;
//	cout << "Maximum number of inputs: ";
//	cin >> n;
//	
//	for(i = 1; i <= n; i++){
//		cout << "Enter n" << i << ": ";
//		cin >> num;
//		
//		if(num < 0.0){
//			// Control of the program move to jump:
//			goto jump;
//		}
//		sum += num;
//	}
//	jump:
//		average = sum / (i - 1);
//		cout << "\nAverage = " << average;
//		return 0;
//}


//==============================================
// C++ Program to check whether number is Even or Odd

//#include <iostream>
//using namespace std;
//
//int main(){
//	int num;
//	cout << "Enter number: ";
//	cin >> num;
//	
//	if(num % 2 == 0){
//		cout << "Number is Even...";
//	}
//	else {
//		cout << "Number is Odd...";
//	}
//	return 0;
//}



//================================================
// C++ Program to check whether a character is vowel or consonant.

//#include <iostream>
//using namespace std;
//
//int main(){
//	char ch;
//	cout << "Enter single character: ";
//	cin >> ch;
//	
//	if(ch == 'a' || ch == 'A' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
//		cout << "Entered character is vowel...";
//	}
//	else {
//		cout << "Entered charater is consonant...";
//	}
//	return 0;
//} 




//============================================
// C++ program to find largest number among three numbers

#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout << "Enter Three number: ";
	cin >> num1 >> num2 >> num3;
	
	if ((num1 > num2) && (num1 > num3)){
		cout << num1 << " is largest number!";
	}
	else if (num2 > num3){
		cout << num2 << " is largest number!";
	}
	else {
		cout << num3 << " is largest number!";
	}
	return 0;
}
