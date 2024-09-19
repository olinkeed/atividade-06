#include <iostream>

void ordem(int *a, int *b);
int main()
{

    int a, b;
    std::cin >> a >> b;
    ordem(&a, &b);

    return 0;
}
void ordem(int *a, int *b)
{
    if (b > a)
        std::swap(b, a);
}