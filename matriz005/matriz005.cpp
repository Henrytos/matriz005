//5) Crie um programa que recebe uma matriz de inteiros positivos e substitui seus elementos de valor ímpar por -1 e os pares por +1.
#include <iostream>
using namespace std;
int main()
{
	int matriz[3][3], col, lin;
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 3; col++) {
			cout << "Digite um valor:";
			cin >> matriz[lin][col];
		}
	}
	cout << "ARRAY 1\n";
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 3; col++) {
			if (col < 2) {
				cout << matriz[lin][col] << " ";
			}
			else {
				cout << matriz[lin][col] << endl;
			}
		}
	}
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 3; col++) {
			if (matriz[lin][col] % 2 == 1) {
				matriz[lin][col] = matriz[lin][col] - 1;
			}
			else {
				matriz[lin][col] = matriz[lin][col] + 1;
			}
		}
	}
	cout << "ARRAY 2\n";
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 3; col++) {
			if (col < 2) {
				cout << matriz[lin][col] << " ";
			}
			else {
				cout << matriz[lin][col] << endl;
			}
		}
	}

}

