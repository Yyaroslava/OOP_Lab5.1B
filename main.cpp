// lab5.1B.cpp
#include <iostream>
#include <exception>
#include <stdexcept>
#include "LongLong.h"

using namespace std;

int main() {
	LongLong A, B, s;
	bool result;

	cout << "LongLong: " << endl;
	do {
		try {
			result = true;
			cin >> A;
		}
		catch (invalid_argument e) {
			result = false;
			cout << e.what() << endl;
		}
		catch (bad_exception e) {
			result = false;
			cout << e.what() << endl;
		}
		catch (BadException& e) {
			result = false;
			cout << e.what() << endl;
		}
		catch (const char* e) {
			result = false;
			cerr << e << endl;
		}
	} while (!result);

	cout << A;
	cin >> B;
	cout << B;

	cout << endl;
	cout << "Addition: " << endl;
	cout << A + B << endl;
	cout << "Multiplication: " << endl;
	cout << A * B << endl;
	cout << "High comparison: " << endl;
	s.CompareHigh(A, B);
	cout << "Low comparison: " << endl;
	s.CompareLow(A, B);

	cout << "A++ " << endl;
	cout << A++ << endl;
	cout << "A-- " << endl;
	cout << A-- << endl;
	cout << "++A " << endl;
	cout << ++A << endl;
	cout << "--A " << endl;
	cout << --A << endl;

	return 0;
}