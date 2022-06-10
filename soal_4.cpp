#include <iostream>

using namespace std;

void push_data(char huruf);
char pop_data();
char tumpukan[10];
int posisi = -1;

void push_data(char huruf){
    tumpukan[++posisi] = huruf;
}

char pop_data(){
    return tumpukan[posisi--];
}

int main(){
    char masuk_data[10];
    int i, panjang, penghitung = 0;

    cout << "Masukkan sebuah kata : ";
    cin >> masuk_data;

    panjang = strlen(masuk_data);

    for(i = 0; i < panjang; i++){
        push_data(tolower(masuk_data[i]));
    }
    for(i = 0; i < panjang; i++){
        if(tolower(masuk_data[i]) == pop_data()){
            penghitung++;
        }
    }
    if(penghitung == panjang){
        cout<< masuk_data <<" termasuk palindrom"<<endl;
    }else{
        cout<< masuk_data <<" tidak termasuk dalam palindrom"<<endl;
    }

    return 0;
}



