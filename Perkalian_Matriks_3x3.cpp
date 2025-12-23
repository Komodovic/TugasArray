#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3] = {0};

    cout << "Masukkan elemen matriks A (3x3):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Masukkan elemen matriks B (3x3):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> B[i][j];

    // Proses perkalian matriks
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\nHasil Perkalian Matriks (A x B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << C[i][j] << " ";
        cout << "\n";
    }

    // Menampilkan panjang array
    int panjangArray = sizeof(A) / sizeof(A[0][0]);
    cout << "\nPanjang array A: " << panjangArray << endl;

    return 0;
}

