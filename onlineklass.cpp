#include <iostream>
using namespace std;

float luasPersegi(float p,float l){
    return p*l;
}

float luasLingkaran(float r){
    return 3.14*r*r;
}

float luasSegitiga(float a,float t){
    return 0.5*a*t;
}

int main(){
    float panjang,lebar,jejari,alas,tinggi;
    int pilihan;
    bool menu;
    menu=true;

    system("cls");
    while (menu==true){

    cout << "\n\n======================" <<endl;
    cout << "======M  E  N  U======" <<endl;
    cout << "======================" <<endl;
    cout << "1. Luas Persegi Panjang" <<endl;
    cout << "2. Luas Lingkaran" <<endl;
    cout << "3. Luas Segitiga" <<endl;
    cout << "4. Exit" <<endl;
    cout << "\nPilihan (1/2/3/4) : ";
    cin >> pilihan ;

    switch (pilihan){
        case 1 :
                cout << "Masukan panjang = ";
                cin >> panjang;
                cout << "Masukan Lebarnya = " ;
                cin >> lebar;
                cout << "Luas Persegipanjang = " <<luasPersegi(panjang,lebar);
                break;
        case 2 :
                cout << "Masukan jari-jarinya = " ;
                cin >> jejari;
                cout << "Luas lingkaran = " <<luasLingkaran(jejari);
                break;
        case 3 :
                cout << "Masukan alasnya = ";
                cin >> alas;
                cout << "Masukan Tingginya = " ;
                cin >> tinggi;
                cout << "Luas Segitiga = " <<luasSegitiga(alas,tinggi);
                break;
        case 4 : 
                menu=false;
                break;
        default :
                cout <<"Pilihan Salah !";
                break;
        }
    }
}

