#include <iostream>
bool has_zero(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            return true; 
        }
    }
    return false; 
}


int main()
{
    int a[5]{0};
    for (int i = 0; i < 5; i++)
    {
        std::cin >> a[i];
    }
    std::cout << has_zero(a, 5);


    return 0;
}