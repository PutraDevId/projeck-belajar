#include <iostream>

int main (){

    float a, b;
    int operasi;
    float hasil2;
    int hasil;

    std::cout << "masukan angka a =";
    std::cin >> a;

    std::cout << "masukan operasi salah satu dari +=(0), -=(1), *=(2), /=(3), = " ;
    std::cin >> operasi;

    std::cout << "masukan nilai b =";
    std::cin >> b;


    if (operasi == 0){
        hasil = a + b;
        std::cout << "hasil dari " << a << " + " << b << "  sama dengan " << hasil << std::endl;
    } else if (operasi == 1){
        hasil = a - b;
        std::cout << "hasil dari " << a << " - " << b <<" sama dengan " << hasil << std::endl;
    } else if (operasi == 2){
        hasil = a * b;
        std::cout << "hasil dari " << a << " X " << b << " sama dengan " << hasil << std::endl;
    } else if (operasi == 3) {
        hasil2 = a / b;
        std::cout << "hasil dari " << a << " : " << b << " sama dengan " << hasil2 << std::endl;
    }
    //  else if (operasi == 4){
        // hasil2 = a % b;
        // std::cout << "hasil dari " << a << " : " << b << " sama dengan " << hasil2 << std::endl;
    // }
    else {
        std::cout << "operasi tidak di temukan" << std::endl;
    }




    return 0;
}