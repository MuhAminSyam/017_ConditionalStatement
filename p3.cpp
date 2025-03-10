#include <iostream>
using namespace std;

float hitungRerata(int x, int y){
    return (x+y)/2;
}

string statuskelulusan(float a){
    if (a >= 75)
        return "lulus";
    else 
       return "gagal";
}

int main(){ //begin
     //numeric nilai1, nilai2, rerata;
     int nilai1, nilai2;
     float rerata;
     // character status;
     string status;
     // display "masukkan nilai pertama:"
     cout << "masukkan nilai pertama:";
     //accept nilai1;
     cin >> nilai1;
     //display "masukkan nilai kedua:"
     cout << "masukkan nilai kedua:";
     //accept nilai2
     cin >> nilai2;

     //rerata = (nilai1+nilai2)/2;
     //if (rerata >= 75)
     // status = "lulus";
     //else 
     //status = "gagal";

     //display "statuskelulusan =" + status
     cout << "statuskelulusan:" << statuskelulusan(hitungRerata(nilai1,nilai2));

} //end
   