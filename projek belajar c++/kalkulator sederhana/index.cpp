#include <iostream>
using namespace std; 


int main () {

    float a,b,hasil;
    char aritmatika;

    cout << "selamat datang di kalkulator sederhana \n \n" ;

    cout << "masukan angka pertama: ";
    cin >> a;
    cout << "pilih operator +, -, *, / : ";
    cin >> aritmatika;
    cout << "masukkan angka kedua : ";
    cin >> b;

    cout << "\n hasil dari: ";
    cout << a << aritmatika << b;

    if(aritmatika == '+'){
        hasil = a + b;
    }else if (aritmatika == '-'){
        hasil = a - b;
    }else if (aritmatika == '*'){
        hasil = a * b;
    }else if (aritmatika == '/'){
        hasil = a / b;
    } else {
        cout << "operator tidak ada di pilihan" << endl;
    }
    cout << " = " << hasil << endl;


    return 0;
}