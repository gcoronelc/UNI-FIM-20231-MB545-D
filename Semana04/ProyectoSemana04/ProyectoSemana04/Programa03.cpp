#include <iostream> 
#include <vector>
using namespace std;
int main03() {

	vector<int> notas;

	notas.push_back(16);
	notas.push_back(15);
	notas.push_back(18);
	notas.push_back(20);
	notas.push_back(13);

	cout << notas[0] << endl;
	cout << notas[100] << endl;

	for (int item : notas) {
		cout << item << " ";
	}

	
	return 0;
}