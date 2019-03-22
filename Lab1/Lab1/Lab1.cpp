//--------------------------------------------------------------------
// CS215-000 LAB 1 402
//--------------------------------------------------------------------
// Author: Ryan Bezold
// Date: 1/17/2019
// Description: My first C++ program. It does arithmetic on two numbers.
//--------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{

	//initialize variables
	int number1;
	int number2;
	int sum, difference, product, intQuotient;
	float fQuotient;

	cout << "+-------------------------------+" << endl;
	cout << "|          Number Fun           |" << endl;
	cout << "|       By: Ryan Bezold         |" << endl;
	cout << "+-------------------------------+" << endl;

	cout << "Enter a number: ";  //cout outputs to the console
	cin >> number1; //cin inputs from the console to the variable
	cout << "Enter another number: ";
	cin >> number2;

	sum = number1 + number2; //adds number1 and number2
	difference = number1 - number2; //subracts number1 by number2
	product = number1 * number2;// multiplies number1 and number 2;
	intQuotient = number1 / number2; //divides the integers number1 and number2 and stores it as an integer
	fQuotient = (float)number1 / (float)number2; // divides the numbers and stores it as a float.


	//below are more outputs with the variables.

	cout << "Sum:                " << sum << endl;
	cout << "Difference:         " << difference << endl;
	cout << "Product:            " << product << endl;
	cout << "Integer Quotient:   " << intQuotient << endl;
	cout << "Float Quotient:     " << fQuotient << endl;


	//console waits to continue until user presses a button
	system("PAUSE");
	
}