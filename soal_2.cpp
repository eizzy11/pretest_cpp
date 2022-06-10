#include <iostream>

using namespace std;

float A[2][3];
float C[3][2];


int main () {
    
    cout << "Masukkan elemen matrik A : " << endl;

    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            cout << "Elemen [" << x << "] [" << y << "] = ";
            cin >> A[x][y];
        }
    }

    cout << endl;

    cout << "Matriks A" << endl;

    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            cout << A[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Hasil transpose matrik A" << endl;

    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 2; n++) {
            C[m][n] = A[n][m];
        }
    }

    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 2; n++) {
            cout << C[m][n] << " ";
        }
        cout << endl;
    }

    cout << endl << endl << endl;

}
