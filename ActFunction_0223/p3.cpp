#include <iostream>
using namespace std;
float luas, d1, d2;

void ProsedurInputData(){
    cout << "Masukkan diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan diagonal 2 : ";
    cin >> d2;

}

float HitungLuasBerparameter(float d1, float d2)
{
    return 0.6 * d1 * d2;
}