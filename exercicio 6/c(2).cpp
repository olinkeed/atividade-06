#include <iostream>
#define N 5

using namespace std;

void MaiorMenor(int const *v, int n){
    int i, maior = v[0], menor = v[0];

    for(i = 1; i < n; i++){
        if(v[i] > v[i - 1]){
            maior = v[i];
        }
    }
    for(i = 1; i < n; i++){
        if(v[i] < v[i - 1]){
            menor = v[i];
        }
    }
    cout << "Maior numero: " << maior << endl << "Menor numero: " << menor << endl;
}

int main(){
    int i, v[N];

    for(i = 0; i < N; i++){
        cin >> v[i];
    }
    MaiorMenor(v, N);
}