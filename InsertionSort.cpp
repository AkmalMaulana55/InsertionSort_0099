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
    cout << endl; // Membuat jarak per baris program
    cout << "=======================" << endl; // Membuat tampilan susunan data element Array
    cout << "Masukkan Elment Array" << endl;
    cout << "=======================" << endl;

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // memasukkan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}