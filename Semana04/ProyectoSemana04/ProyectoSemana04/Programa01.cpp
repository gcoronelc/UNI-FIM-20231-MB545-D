#include <iostream> 
using namespace std; 
int main01() {
	int notas[5];

	for (int i = 0; i < 5; i++) {
		cout << notas[i] << " ";
	}
	cout << "\n";

	notas[0] = 20;
	notas[1] = 18;
	notas[2] = 19;
	notas[3] = 16;
	notas[4] = 17;

	for (int i = 0; i < 5; i++) {
		cout << notas[i] << " ";
	}
	cout << "\n";

	cout << notas[5] << " ";

	return 0;
}