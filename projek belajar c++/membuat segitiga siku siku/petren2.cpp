#include <iostream>

int main (){

    int n;

    std::cout << "masukan panjang pola : ";
    std::cin >> n;

    std::cout << "pola 3";

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            std::cout << " ";
        }
        for (int j = n; j >= i; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}