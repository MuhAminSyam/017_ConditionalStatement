#include <iostream>
using namespace std;

float panjang, lebar; //var global
void inputData(){
    cout << "masukkanpanjangnya:";
    cin >> panjang;
     cout << "masukkan lebarnya:";
     cin >> lebar;
}
 float fungsiLuas(){
    return panjang * lebar;
 }

 float hitungLuasBerparameter(float a, float b){
    return a * b;
 }

 void tampilkanFungsiLuas(){
    cout << "Luas persegi panjang (fungsi tidak berparameter): " << fungsiLuas() << endl;
 }

 void tampilkanLuasBerparameter(){
    cout << "Luas persegi panjang (fungsi berparameter): " << hitungLuasBerparameter(panjang,lebar);}
 
 int main()
 {
  inputData();
  tampilkanFungsiLuas();
  tampilkanLuasBerparameter();

 }