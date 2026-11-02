#include <iostream>

using std::string, std::cout, std::cin, std::getline;

char DrawPlot[16][16] = {
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
};
string TypePlot[] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""};

void MakeDrawMatrix(int X, int Y, char Char);
void DrawMatrix();
void MakeStringArray(int Position, string String);

int main() {
	int X = 15;
	int Y = 8;
	int Stop = 0;
	char Char = '#';
	int StringPosition;
	string String;
	do {
		cout << "enter new String Y position (top 0-15 bottom) : ";
		cin >> StringPosition;
		if (StringPosition > 15) {
			StringPosition = 15;
		}
		else if (StringPosition < 0) {
			StringPosition = 0;
		}
		cin.ignore(10000, '\n');

		cout << "enter new string text (under 40 chars recomended!) : ";
		getline(cin, String);

		MakeStringArray(StringPosition, String);

		cout << "enter new Charecter(only works for single charecters) : ";
		cin >> Char;

		cout << "enter new X (0-15) : ";
		cin >> X;
		if (X > 15) {
			X = 15;
		}
		else if (X < 0) {
			X = 0;
		}

		cout << "enter new Y (top 0-15 bottom) : ";
		cin >> Y;
		if (Y > 15) {
			Y = 15;
		}
		else if (Y < 0) {
			Y = 0;
		}

		MakeDrawMatrix(X, Y, Char);
		DrawMatrix();

		cout << "Stop? enter 1 to stop and 0 to continue : ";
		cin >> Stop;
	} while (!Stop == 1);
}

void MakeDrawMatrix(int X, int Y, char Char) {
	DrawPlot[Y][X] = Char;
}

void DrawMatrix() {
	cout << "\x1b[2J" << "\x1b[H";
	for (int y = 0;y <= 15; ++y) {
		for (int x = 0;x <= 15; ++x) {
			cout << DrawPlot[y][x];
		}
		cout << TypePlot[y] << '\n';
	}
}

void MakeStringArray(int Position, string String) {
	TypePlot[Position] = String;
}
