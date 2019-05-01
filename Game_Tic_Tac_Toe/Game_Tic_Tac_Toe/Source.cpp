#include<iostream>
#include<string>
#include <windows.h>
using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
string strPlayer1;
string strPlayer2;

void Draw()
{
	system("cls");
	cout << "My Tic Tac Toe Game " << endl;
	cout << "Player 1 (X)" << endl;
	cout << "Player 2 (O)" << endl;
	cout << "To Play, please select and enter the number" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " -------------" << endl;  //grid construction
		for (int j = 0; j < 3; j++)
		{
			cout << " | ";
			//For changing the color
			HANDLE std_output = GetStdHandle(STD_OUTPUT_HANDLE);
			if (matrix[i][j] == 'X') {
				//system("color 01");
				SetConsoleTextAttribute(std_output, FOREGROUND_BLUE);
			}
			if (matrix[i][j] == 'O') {
				//system("color 02");
				SetConsoleTextAttribute(std_output, FOREGROUND_GREEN);
			}
			cout << matrix[i][j];
			SetConsoleTextAttribute(std_output, 15);
			cout <<"";

	    }
		cout << " |" << endl;
	}
	cout << " -------------" << endl;

}

void Input()
{
	string sInput;
	int a;
	if (player == 'X')
		cout << strPlayer1  << ", your turn:";
	else
		cout << strPlayer2 << ", your turn:";
	getline(cin,sInput);
	a = std::stoi(sInput);

	if (a == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}

	if (a == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}

	if (a == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}

	if (a == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}
	if (a == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}
	if (a == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}

	if (a == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}

	if (a == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}

	if (a == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "Field is already in use try again! " << endl;
			Input();

		}

	}
	//system("pause");
}

void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

/*    00 01 02
	  10 11 12
	  20 21 22 */ 

char Win()
{

	// Winning scinario for first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	// winning scanario for second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}


int main()
{
	n = 0;
	//Draw the Grid to show & tell the user about game
	Draw();
	//Take Player1 & Player2 name
	cout << "Player 1, enter your name please:";
	getline(cin, strPlayer1);
	cout << "Player 1, enter your name please:";
	getline(cin, strPlayer2);

	//Draw again to clear and display the player name
	Draw();
	while (1)
	{
		n++;
		Input();
		Draw();
		if (Win() == 'X')
		{
			cout << strPlayer1 << " wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << strPlayer2 << " wins! " << endl;
			break;
		}
		else if (Win() == '/' && n == 9)
		{
			cout << "Its a draw" << endl;
			break;
		}

		TogglePlayer();
	}
	system("pause");
	return 0;

}