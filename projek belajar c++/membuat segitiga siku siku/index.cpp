#include <iostream>

int main(){

    int n;

    std::cout << "masukan panjang pola 1 : ";
    std::cin >> n;

    std::cout << "pola 1 \n";

    for (int i = 1; i <= n; i++){
        for( int j = 1; j <= i; j++){
        std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "pola 2 \n";

    for (int i = 1; i <= n; i++){
        for( int j = n; j >= i; j--){
        std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
