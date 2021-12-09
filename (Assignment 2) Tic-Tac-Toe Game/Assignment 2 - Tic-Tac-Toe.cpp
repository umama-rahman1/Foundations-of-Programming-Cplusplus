
//Assignment 2
// Umama Rahman; ID: 202000915

#include <iostream>

char square[10] = { '0','1','2','3','4','5','6','7','8','9' };

int checkWin();
int main()
{
	int player = 1;
	int i = -1;
	char mark;
	int choice;
	bool forceEnd = false;

	while (i == -1) {

		player = (player % 2) ? 1 : 0;

		if (player == 1) {
			mark = 'X';
		}
		else {
			mark = 'O';
		}

		std::cout << "Player " << mark << ": which square number (1-9)? ";
		std::cin >> choice;


		if (choice < 0) {
			forceEnd = true;
			break;
		}

		if (choice == 1 && square[1] == '1') {
			square[1] = mark;
		}
		else if (choice == 2 && square[2] == '2') {
			square[2] = mark;
		}
		else if (choice == 3 && square[3] == '3') {
			square[3] = mark;
		}
		else if (choice == 4 && square[4] == '4') {
			square[4] = mark;
		}
		else if (choice == 5 && square[5] == '5') {
			square[5] = mark;
		}
		else if (choice == 6 && square[6] == '6') {
			square[6] = mark;
		}
		else if (choice == 7 && square[7] == '7') {
			square[7] = mark;
		}
		else if (choice == 8 && square[8] == '8') {
			square[8] = mark;
		}
		else if (choice == 9 && square[9] == '9') {
			square[9] = mark;
		}
		else if (choice > 9 || choice < 1) {
			std::cout << "Invalid square selected, please try again." << std::endl;
		}
		else {
			std::cout << "Square already chosen, please try again." << std::endl;
			player--;
		}

		i = checkWin();
		player++;
	}

	if (forceEnd) {
		std::cout << "GAME ENDED BY USER!";
	}
	if (i == 1) {
		if (mark == 'X') {
			std::cout << "PLAYER X WINS!";
		}
		else if (mark == 'O') {
			std::cout << "PLAYER Y WINS!";
		}
	}
	else if (i == 0) {
		std::cout << "DRAW";
	}

	return 0;
}

int checkWin() {
	if (square[1] == square[2] && square[2] == square[3]) {
		return 1;
	}
	else if (square[4] == square[5] && square[5] == square[6]) {
		return 1;
	}
	else if (square[7] == square[8] && square[8] == square[9]) {
		return 1;
	}
	else if (square[1] == square[4] && square[4] == square[7]) {
		return 1;
	}
	else if (square[2] == square[5] && square[5] == square[8]) {
		return 1;
	}
	else if (square[3] == square[6] && square[6] == square[9]) {
		return 1;
	}
	else if (square[1] == square[5] && square[5] == square[9]) {
		return 1;
	}
	else if (square[3] == square[5] && square[5] == square[7]) {
		return 1;
	}
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else {
		return -1;
	}
		
}