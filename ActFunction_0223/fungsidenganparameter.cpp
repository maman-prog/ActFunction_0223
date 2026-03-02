//library
#include <iostream>
using namespace std;
//deklarasi variable global
int panjang, lebar;
//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
}
int luaspersegi(int a,int b){
    return a * b;
}
int jumlah(int x, int y, int z){
    return x+y+z;
}
void output(){
    cout << "Hasilnya : " << luaspersegi(panjang,lebar) << endl;
}