#include <iostream>
#include <string>
using namespace std;

int main(){
    system("cls");
    
    // Substring yaitu mengambil sebuah text dalam variabel string
    string Kata("Kangguru");
    cout << "Kata : " << Kata << endl << endl;

    // Mengambil Kata Guru
    string Simpan = Kata.substr(4,4);
    cout << "Kata Yang diambil : " << Simpan;

    cin.get();
    return 0;
}