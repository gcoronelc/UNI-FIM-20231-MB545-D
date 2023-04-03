
/*
Numeros aleatorios entre [1,10]
*/

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int num, c;
    long aleatorio;
    srand(time(NULL));
    
    for(c = 1; c <= 10; c++)
    {
        num = 1 + rand() % 10;
        cout << num<< " ";
    }
    return 0;
}
