#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char** argv[]) {
	double a = 21.0;
	double b = 12.0;
	Calculator calculator;
	cout << "The a argument: " << a << endl;
	cout << "The b argument: " << b << endl;
	cout << "The result of a and b subtraction is:  " << calculator.Sub(a, b) << endl;

	return 0;	
}
