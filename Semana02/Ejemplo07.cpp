
/*
Numeros aleatorios: [11,40]
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
    
    for(c = 1; c <= 50; c++)
    {
        num = 11 + rand() % 30;
        cout << num<< " ";
    }
    return 0;
}