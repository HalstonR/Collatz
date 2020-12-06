// Collatz conjecture is a mathematical theory named after Lothar Collatz, who introduced the idea in 1937

// Start with any positive whole number greater than one
// If number is odd, multiply by 3 and add 1
// If number is even, divide by 2

// After a certain number of iterations, you will always end up at 1, regardless of the starting value

#include <iostream>

using namespace std;

extern "C" int CollatzASM(unsigned int startingValue);

int CollatzCPP(unsigned int startingValue) {
	int iterations = 0;

	if (startingValue <= 1) return 0;

	while (startingValue > 1) {
		if ((startingValue % 2) == 0)
			startingValue /= 2;
		else {
			startingValue *= 3;
			startingValue++;
		}

		iterations++;
	}

	return iterations;
}

int main() {
	cout << "CPP Returned: " << CollatzCPP(25) << endl;
	cout << "ASM Returned: " << CollatzASM(25) << endl;

	cin.get();
	return 0;
}