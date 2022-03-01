#include <iostream>
using namespace std;
/*
Nama : Ega Gofur Triwahana
Kelas : X RPL 2
NO : 13
Tanggal : 01-03-2022
Tugas : Pemrograman dasar materi looping for
*/

int main()
{
    /* SOAL!!
Buatlah perulangan untuk menampilkan angka kelipatan 3 sebanyak 10
kali? Hasil akhir yang kita inginkan adalah sebagai berikut:

3 6 9 12 15 18 21 24 27 30
*/
    int inputDeret;

    cout << "masukan deret angka! " << endl;
    cin >> inputDeret;

    for (int i = 1; i <= inputDeret; i++)
    {
        cout << " " << i * 3 << " "
             << "Hasil dari perulangan ke : " << i << endl
             << endl;
    }
    return 0;
}