#include <iostream>
using namespace std;

int hitung_v (int i, int r){
    int v;
    v = i * r;
    return v;
}

float hitung_i (float v, float r){
    float i;
    i = v / r;
    return i;
}

int main (){

    int i, r, v;

    cout << "~~~SELAMAT DATANG DI KALKULATOR AE!~~~" << endl;
    cout << "Rumus yang di gunkan V= i x r\n\n";
    cout << "masukan Nilai arus : ";
    cin >> i;
    cout << "masukan Nilai Hambatan : ";
    cin >> r;


    v = hitung_v(i,r);
    cout << "\n\nnilai V adalah : ";
    cout << v << endl;

    float i2, v2, r2;

    cout << "Rumus Yang di Gunakan I = v : r " << endl;
    cout << "masukan nilai voltase : ";
    cin >> v;
    cout << "masukan nilai hambatannya : ";
    cin >> r;

    i2 = hitung_i(r2,v2);

    cout << " hasil dari arus adalah : ";
    cout << i2 << endl;


    return 0;
}