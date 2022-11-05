#include <iostream>
#include <cstdlib> //mengantudng fungsi rendom yang di gunakan untuk random yaitu rand()

using namespace std;

int main(){

    for (int i = 0; i < 10; i++){
        cout << 1 + (rand() %6) << endl;
    }

return 0;
}