#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct mahasiswa{
    int pk;
    string NIM;
    string nama;
    string jurusan;
};


int getof();
void cekdatabase(fstream &data);

void addmhs(fstream &data){

    mahasiswa inputmhs;

    inputmhs.pk = 1;
    cout << "Nama : ";
    getline(cin, inputmhs.nama);
    cout << "NIM : ";
    getline(cin, inputmhs.nama);
    cout << "jurusan : ";
    getline(cin, inputmhs.nama);
}


int main(){

    fstream data;

    cekdatabase(data);
    
    int pilof = getof();
    char is_continue;



    while (pilof != 5){
        switch(pilof){
            case 1:
                cout << "menambah data" << endl;
                addmhs(data);
                break;
            case 2:
                cout << "menampilkan data" << endl;
                break;
            case 3:
                cout << "mengubah data" << endl;
                break;
            case 4:
                cout << "menghapus data" << endl;
                break;
            default:
                cout << "pilihan tidak di temukan" << endl;
                break;
        }

        label_continue:

        cout << "lanjutkan (y/n) : ";
        cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y')){
            pilof = getof();
        }else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else{
            goto label_continue;
        }
    }
    
    return 0;
}

void cekdatabase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    //cek data ada atau gak
    if(data.is_open()){
        cout << "data ada" << endl;
    }else{
        cout << "data tidak ada dan di buat baru" << endl;
        data.close();
        data.open("data.bin",ios::trunc | ios::out | ios::in | ios::binary);;
    }
}


int getof(){
    int input;
    system("cls");
    cout << "\nProgram CRUD data mahasiswa kelas terbuka" << endl;
    cout << "===========================================" << endl;
    cout << "1. Tambah data" << endl;
    cout << "2. tampilkan data" << endl;
    cout << "3. ubah data" << endl;
    cout << "4. hapus data" << endl;
    cout << "5. selesai" << endl;
    cout << "===========================================" << endl;
    cout << "pilih menu [1-5] : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(1),'\n');
    return input;
}

