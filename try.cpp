#include <iostream>
using namespace std;

// deklarasi variabel
float jariJari;
float phi = 3.14159;

// prosedur untuk menghitung luas lingkaran
void hitungluas() {
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}

// fungsi untuk menghitung luas lingkaran
float luas ( float jariJari  ){
    return 3.14159 * jariJari * jariJari;
}

void akhir () {
    cout << "Hasil luas untuk lingkaran dengan jari-jari = " << luas  (jariJari) << endl;
}

int main() {
    hitungluas();
    akhir();
}