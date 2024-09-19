#include <iostream>

using namespace std;

void decompor(double *a, double *frac, int *inteiro)
{
    *inteiro = (int)*a;
    std::cout << "a: " << *inteiro << std::endl;
    *frac = *a - *inteiro;
}

int main()
{
    double a, frac = 0;
    int inteiro = 0;

    cin >> a;
    decompor(&a, &frac, &inteiro);
    cout << "Parte inteira: " << inteiro << endl
         << "Parte fracionaria: " << frac << endl;
}