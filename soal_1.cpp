#include <iostream>

using namespace std;

string username;
string password;
int peluang = 0;

int main () {

    do {
        cout << "Masukkan username : ";
        cin >> username;
        cout << "Masukkan password : ";
        cin >> password;
        if (password == "21103071") {
            cout << "Selamat anda masuk program" << endl;
            peluang = 3;
        } else {
            cout << "Password yang anda masukkan salah" << endl;
            peluang = peluang + 1;
        }
    } while (peluang < 3);

    if(peluang == 3) {
        cout << "Anda telah salah 3x" << endl;
    } 

    return 0;
}
