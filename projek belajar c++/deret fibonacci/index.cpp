#include <iostream>

int main (){

    //f_n = f_n1 + f_n2

    int n;
    int f_n;
    int f_n1;
    int f_n2;

    std::cout << "program deret pibonacci \n";
    std::cout << "masukan nilai ke-n :";
    std::cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    std::cout << f_n << " ";


    for (int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;

        f_n2 = f_n1;
        f_n1 = f_n;

        std::cout << f_n << " ";
    }
    std::cout << "\n";


    return 0;
}