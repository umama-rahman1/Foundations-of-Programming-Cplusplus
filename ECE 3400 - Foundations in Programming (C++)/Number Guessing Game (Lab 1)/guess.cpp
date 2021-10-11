// guess.cpp 
// Umama Rahman; ID: 202000915; ECE 3400
#include <iostream>
using namespace std;


int main(int argc, const char* argv[]) {

	int num = atoi(argv[1]); //setting input number as the number

	int startRange = 1;
	int endRange = 1001;

	bool found = false; //boolean to check if number was found

	while (!found) {

		if (num > 1000 || num < 1) {
			std::cout << "Invalid number!"; 
			break;
		}

		int mid = (startRange + endRange) / 2; //calculating mid

		std::cout << "Is the number you are thinking of less than " << mid << "?\n";

		if (num < mid) {
			endRange = mid - 1; //setting new endRange
		}
		else if (num > mid) {
			startRange = mid + 1; //setting new startRange
		}
		else if (num == mid) {
			std::cout << "Your number is " << mid << "!\n"; //number found
			found = true;
		}

	}


}

