/*
Ejemplo 5:
Instrucciones: break y continue
*/

#include <iostream> 
#include <sstream> 
using namespace std; 
int main() {

	for(int i=1; i<=10; i++){
		
		if(i==5) continue;
		cout << i << "\t";
		if(i==7) break;
		
	}

	
}
