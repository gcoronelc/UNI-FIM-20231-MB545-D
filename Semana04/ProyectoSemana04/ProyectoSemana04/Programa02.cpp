#include <iostream> 
using namespace std;
int main02() {

	int notas[] = {20, 18, 14, 17, 18, 10};
	int temp, tamanio;

	cout << "Notas: ";
	for (int i = 0; i < 5; i++) {
		cout << notas[i] << " ";
	}
	cout << "\n";

	tamanio = sizeof(notas) / sizeof(notas[0]);
	for (int i = 0; i < tamanio - 2; i++) {
		for (int j = i + 1; j < tamanio - 1; j++) {
			if (notas[i] < notas[j]) {
				temp = notas[i];
				notas[i] = notas[j];
				notas[j] = temp;
			}
		}
	}

	cout << "Notas: ";
	for (int i = 0; i < 5; i++) {
		cout << notas[i] << " ";
	}
	cout << "\n";

	return 0;
}