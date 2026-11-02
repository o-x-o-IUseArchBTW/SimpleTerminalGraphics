#include <iostream>

using std::cout, std::cin;

char DrawPlot_0[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_1[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_2[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_3[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_4[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_5[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_6[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_7[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_8[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_9[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_a[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_b[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_c[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_d[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_e[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char DrawPlot_f[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void MakeDrawMatrix(int X, int Y, char Char);
void DrawMatrix();

int main() {
	int X = 15;
	int Y = 8;
	int Stop = 0;
	char Char = '#';
	do {
		cout << "enter new X (0-15) : ";
		cin >> X;
		if (X > 15) {
			X = 15;
		}
		else if (X < 0) {
			X = 0;
		}
			cout << "enter new Y (0-15) : ";
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
	switch(Y) {
		case 0:DrawPlot_0[X] = Char;
			break;
		case 1:DrawPlot_1[X] = Char;
			break;
		case 2:DrawPlot_2[X] = Char;
			break;
		case 3:DrawPlot_3[X] = Char;
			break;
		case 4:DrawPlot_4[X] = Char;
			break;
		case 5:DrawPlot_5[X] = Char;
			break;
		case 6:DrawPlot_6[X] = Char;
			break;
		case 7:DrawPlot_7[X] = Char;
			break;
		case 8:DrawPlot_8[X] = Char;
			break;
		case 9:DrawPlot_9[X] = Char;
			break;
		case 10:DrawPlot_a[X] = Char;
			break;
		case 11:DrawPlot_b[X] = Char;
			break;
		case 12:DrawPlot_c[X] = Char;
			break;
		case 13:DrawPlot_d[X] = Char;
			break;
		case 14:DrawPlot_e[X] = Char;
			break;
		case 15:DrawPlot_f[X] = Char;
			break;
		default: cout << "error in code!";
	}
}

void DrawMatrix() {
	cout << "\x1b[2J" << "\x1b[H";
	cout << DrawPlot_0[0] << DrawPlot_0[1] << DrawPlot_0[2] << DrawPlot_0[3] << DrawPlot_0[4] << DrawPlot_0[5] << DrawPlot_0[6] << DrawPlot_0[7] << DrawPlot_0[8] << DrawPlot_0[9] << DrawPlot_0[10] << DrawPlot_0[11] << DrawPlot_0[12] << DrawPlot_0[13] << DrawPlot_0[14] << DrawPlot_0[15] << '\n';
	cout << DrawPlot_1[0] << DrawPlot_1[1] << DrawPlot_1[2] << DrawPlot_1[3] << DrawPlot_1[4] << DrawPlot_1[5] << DrawPlot_1[6] << DrawPlot_1[7] << DrawPlot_1[8] << DrawPlot_1[9] << DrawPlot_1[10] << DrawPlot_1[11] << DrawPlot_1[12] << DrawPlot_1[13] << DrawPlot_1[14] << DrawPlot_1[15] << '\n';
	cout << DrawPlot_2[0] << DrawPlot_2[1] << DrawPlot_2[2] << DrawPlot_2[3] << DrawPlot_2[4] << DrawPlot_2[5] << DrawPlot_2[6] << DrawPlot_2[7] << DrawPlot_2[8] << DrawPlot_2[9] << DrawPlot_2[10] << DrawPlot_2[11] << DrawPlot_2[12] << DrawPlot_2[13] << DrawPlot_2[14] << DrawPlot_2[15] << '\n';
	cout << DrawPlot_3[0] << DrawPlot_3[1] << DrawPlot_3[2] << DrawPlot_3[3] << DrawPlot_3[4] << DrawPlot_3[5] << DrawPlot_3[6] << DrawPlot_3[7] << DrawPlot_3[8] << DrawPlot_3[9] << DrawPlot_3[10] << DrawPlot_3[11] << DrawPlot_3[12] << DrawPlot_3[13] << DrawPlot_3[14] << DrawPlot_3[15] << '\n';
	cout << DrawPlot_4[0] << DrawPlot_4[1] << DrawPlot_4[2] << DrawPlot_4[3] << DrawPlot_4[4] << DrawPlot_4[5] << DrawPlot_4[6] << DrawPlot_4[7] << DrawPlot_4[8] << DrawPlot_4[9] << DrawPlot_4[10] << DrawPlot_4[11] << DrawPlot_4[12] << DrawPlot_4[13] << DrawPlot_4[14] << DrawPlot_4[15] << '\n';
	cout << DrawPlot_5[0] << DrawPlot_5[1] << DrawPlot_5[2] << DrawPlot_5[3] << DrawPlot_5[4] << DrawPlot_5[5] << DrawPlot_5[6] << DrawPlot_5[7] << DrawPlot_5[8] << DrawPlot_5[9] << DrawPlot_5[10] << DrawPlot_5[11] << DrawPlot_5[12] << DrawPlot_5[13] << DrawPlot_5[14] << DrawPlot_5[15] << '\n';
	cout << DrawPlot_6[0] << DrawPlot_6[1] << DrawPlot_6[2] << DrawPlot_6[3] << DrawPlot_6[4] << DrawPlot_6[5] << DrawPlot_6[6] << DrawPlot_6[7] << DrawPlot_6[8] << DrawPlot_6[9] << DrawPlot_6[10] << DrawPlot_6[11] << DrawPlot_6[12] << DrawPlot_6[13] << DrawPlot_6[14] << DrawPlot_6[15] << '\n';
	cout << DrawPlot_7[0] << DrawPlot_7[1] << DrawPlot_7[2] << DrawPlot_7[3] << DrawPlot_7[4] << DrawPlot_7[5] << DrawPlot_7[6] << DrawPlot_7[7] << DrawPlot_7[8] << DrawPlot_7[9] << DrawPlot_7[10] << DrawPlot_7[11] << DrawPlot_7[12] << DrawPlot_7[13] << DrawPlot_7[14] << DrawPlot_7[15] << '\n';
	cout << DrawPlot_8[0] << DrawPlot_8[1] << DrawPlot_8[2] << DrawPlot_8[3] << DrawPlot_8[4] << DrawPlot_8[5] << DrawPlot_8[6] << DrawPlot_8[7] << DrawPlot_8[8] << DrawPlot_8[9] << DrawPlot_8[10] << DrawPlot_8[11] << DrawPlot_8[12] << DrawPlot_8[13] << DrawPlot_8[14] << DrawPlot_8[15] << '\n';
	cout << DrawPlot_9[0] << DrawPlot_9[1] << DrawPlot_9[2] << DrawPlot_9[3] << DrawPlot_9[4] << DrawPlot_9[5] << DrawPlot_9[6] << DrawPlot_9[7] << DrawPlot_9[8] << DrawPlot_9[9] << DrawPlot_9[10] << DrawPlot_9[11] << DrawPlot_9[12] << DrawPlot_9[13] << DrawPlot_9[14] << DrawPlot_9[15] << '\n';
	cout << DrawPlot_a[0] << DrawPlot_a[1] << DrawPlot_a[2] << DrawPlot_a[3] << DrawPlot_a[4] << DrawPlot_a[5] << DrawPlot_a[6] << DrawPlot_a[7] << DrawPlot_a[8] << DrawPlot_a[9] << DrawPlot_a[10] << DrawPlot_a[11] << DrawPlot_a[12] << DrawPlot_a[13] << DrawPlot_a[14] << DrawPlot_a[15] << '\n';
	cout << DrawPlot_b[0] << DrawPlot_b[1] << DrawPlot_b[2] << DrawPlot_b[3] << DrawPlot_b[4] << DrawPlot_b[5] << DrawPlot_b[6] << DrawPlot_b[7] << DrawPlot_b[8] << DrawPlot_b[9] << DrawPlot_b[10] << DrawPlot_b[11] << DrawPlot_b[12] << DrawPlot_b[13] << DrawPlot_b[14] << DrawPlot_b[15] << '\n';
	cout << DrawPlot_c[0] << DrawPlot_c[1] << DrawPlot_c[2] << DrawPlot_c[3] << DrawPlot_c[4] << DrawPlot_c[5] << DrawPlot_c[6] << DrawPlot_c[7] << DrawPlot_c[8] << DrawPlot_c[9] << DrawPlot_c[10] << DrawPlot_c[11] << DrawPlot_c[12] << DrawPlot_c[13] << DrawPlot_c[14] << DrawPlot_c[15] << '\n';
	cout << DrawPlot_d[0] << DrawPlot_d[1] << DrawPlot_d[2] << DrawPlot_d[3] << DrawPlot_d[4] << DrawPlot_d[5] << DrawPlot_d[6] << DrawPlot_d[7] << DrawPlot_d[8] << DrawPlot_d[9] << DrawPlot_d[10] << DrawPlot_d[11] << DrawPlot_d[12] << DrawPlot_d[13] << DrawPlot_d[14] << DrawPlot_d[15] << '\n';
	cout << DrawPlot_e[0] << DrawPlot_e[1] << DrawPlot_e[2] << DrawPlot_e[3] << DrawPlot_e[4] << DrawPlot_e[5] << DrawPlot_e[6] << DrawPlot_e[7] << DrawPlot_e[8] << DrawPlot_e[9] << DrawPlot_e[10] << DrawPlot_e[11] << DrawPlot_e[12] << DrawPlot_e[13] << DrawPlot_e[14] << DrawPlot_e[15] << '\n';
	cout << DrawPlot_f[0] << DrawPlot_f[1] << DrawPlot_f[2] << DrawPlot_f[3] << DrawPlot_f[4] << DrawPlot_f[5] << DrawPlot_f[6] << DrawPlot_f[7] << DrawPlot_f[8] << DrawPlot_f[9] << DrawPlot_f[10] << DrawPlot_f[11] << DrawPlot_f[12] << DrawPlot_f[13] << DrawPlot_f[14] << DrawPlot_f[15] << '\n';
}
