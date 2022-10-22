#include <iostream>
#include <string>

using namespace std;

string ifDigitCharInNumber(int& char1, int& number);

int main() {

	string C, D;
	int A, B;

	while (true) {

		cout << "Enter A and B: " << endl;

		cin >> C >> D;
		cout << endl;

		try {

			A = stoi(C);
			B = stoi(D);

		}
		catch (invalid_argument) {

			cout << "A and B must be numbers" << endl << endl;
			continue;

		}
		catch (out_of_range) {

			cout << "A or B is too big" << endl << endl;
			continue;

		}
		catch (exception) {

			cout << "Unknown exception" << endl << endl;
			continue;

		}
		if (A < 0 || A > 9) {

			cout << "A must be in range 0..9" << endl << endl;
			continue;

		}

		break;

	}

	cout << ifDigitCharInNumber(A, B) << endl;

	system("pause");
	return 0;

}

string ifDigitCharInNumber(int& char1, int& number) {

	auto char1Str = to_string(char1);
	auto numberStr = to_string(number);

	char1 = stoi(char1Str);
	number = stoi(numberStr);

	bool response(false);
	int temp = number;
	int digits(1);

	do {

		if (number % 10 == char1 || number % 10 == char1 * -1) {

			response = true;

			break;

		}

		number /= 10;

	} while (number != 0);

	if (response) {

		return "true";

	}

	else {

		return "false";

	}

}