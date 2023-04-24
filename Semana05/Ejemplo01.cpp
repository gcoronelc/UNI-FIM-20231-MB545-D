/*
Desarrollar una función para calcular el factorial de N.
*/
#include <iostream> 
using namespace std;

long factorial(int n){
	long f = 1;
	while(n>1) f *= n--;
	return f;
}

long factorial2(int n){
	if(n==0)
		return 1;
	else
		return n * factorial2(n-1);
}

int main() {
	
	cout << "Factorial: " << factorial2(5) << endl; 
	return 0;
}
