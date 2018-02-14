#include<iostream>
using namespace std;
//simple calculator for c++

//calculates addition
void add(int in1, int in2) {
	cout << in1 + in2 << endl;
}
//calculates subtraction
void sub(int in1, int in2) {
	cout << in1 - in2 << endl;
}
//calculates multiplication
void multi(int in1, int in2) {
	cout << in1 * in2 << endl;
}
//calculates division
void divide(int in1, int in2) {
	if (in2 == 0){
		cout << "No dividing by 0 \n";
	}
	else{
		cout << in1 / in2 << "." << in1 % in2 << endl;
	}
}
//calculates square root
void squareRoot(int in1) {
	cout << sqrt(in1) << endl;
}
//calculates remainder
void modulo(int in1, int in2) {
	cout << "." << in1 % in2 << endl;
}
//continue or quit
bool keepGo(char charin) {
	bool out;
	if ((charin == 'y') || (charin == 'Y')) {
		out = true;
	}
	else {
		out = false;
	}
	return out;
}


int main()
{
	//if true program will continue 
	bool keepGoing = true;
	// holds operator and tag for continue
	char sign = 'n';
	char quit = 'y';
	//holds numbers for calculation
	int num1 = 0, num2 = 0;
	while (keepGoing)
	{
		//takes and stores input
		cout << "Please enter your first number. ";
		cin >> num1;
		cout << "Please enter your operator. ";
		cin >> sign;
		if (sign == 'r') {
			squareRoot(num1);
		}
		else {
			cout << "Please enter your second number. ";
			cin >> num2;

			//uses sign to select and process output
			if (sign == '+') {
				add(num1, num2);
			}
			else if (sign == '-') {
				sub(num1, num2);
			}
			else if (sign == '*') {
				multi(num1, num2);
			}
			else if (sign == '/') {
				divide(num1, num2);
			}
			else if (sign == '%') {
				modulo(num1, num2);
			}
			else {
				cout << "Use operators + - * / % or 'r' for square root";
			}
		}
		
		
		cout << "Please type 'y' to restart. ";
		
		//gets input to restart or not
		cin >> quit;
		keepGoing = keepGo(quit);
		
	}
	
	
	
	return 0;
}