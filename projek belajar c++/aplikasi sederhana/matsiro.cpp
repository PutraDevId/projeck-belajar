#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int kuadrat (int x) {
    int y;
    y = x * x;
    return y;
}

int main (){

    char menu;

    cout << "~~~~SELAMAT DATANG DI MATSIRO~~~~\n\n\n\n";
    cout << "silahkan pilih menu di bawah\n\n";
    cout << "1.) kuadrat 2 \n\n";
    cout << "2.) random dadu \n\n";
    cout << "3.) akar \n\n";
    cout << "ketikan angka pilihan : ";
    cin >> menu;

    //pengkuadratan
    if (menu == '1'){
        int input, hasil;
        cout << "masukan angkanya : ";
        cin >> input;
        hasil = kuadrat(input);
        cout << "hasil dari " << input << " kuadrat 2 adalah : " << hasil <<endl;
    //random dadu
    } else if (menu == '2'){

    char lanjut;
        while (true){
            cout << "mau mengocok dadu (y/n)";
            cin >> lanjut;
            if (lanjut == 'y'){
                cout << 1 + (rand() %6) << endl;
            } else if (lanjut == 'n'){
                break;
            }else {
                cout << "masukan y/n aja ya :) \n\n";
            }
        }
    } else if (menu == '3'){ //pengakaran
        int i;
        cout << "masukan angka yang mau di akarkan : ";
        cin >> i;
        double y = sqrt(i);
        cout << "akar dari " << i << " adalah " << y <<endl;
    }

    cin.get();
    return 0;
}