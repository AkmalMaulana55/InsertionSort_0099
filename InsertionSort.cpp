#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengn panjang data 20
int n; // Membuat Variable inputan n

void input ()
{ // Procedure Input
    while (true)
    {
        cout << "masukkan Jumlah Data pada Array : "; // membuat Inputan jumlah element array
        cin >> n; // memanggil variable inputan n

        if (n <= 20)
        { // Membuat Kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
}