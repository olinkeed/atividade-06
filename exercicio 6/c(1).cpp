#include <iostream>
#define N 5

using namespace std;

void maior(int const v[], int n){
    int m = v[0], i;

    for(i = 1; i < n; i++){
        if(v[i] > v[i - 1]){
            m = v[i];
        }
    }

    cout << "O maior numero e: " << m << endl;
}

void media(int const v[N]){
    int m = 0, i;

    for(i = 0; i < N; i++){
        m += v[i];
    }
    m = m/N;
    cout << "A media do vetor: " << m << endl;
}

void positivos(int const *v, int n){
    int i;

    cout << "Os valores positivos sao :";
    for (i = 0; i < n; i++){
        if(v[i] > 0){
            cout << v[i] << ", ";
        }
    }
}

int main(){
    int i, v[N];

    for (i = 0; i < N; i++){
        cin >> v[i];
    }
    maior(v, N);
    media(v);
    positivos(v, N);
}