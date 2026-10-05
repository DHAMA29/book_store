#include <iostream>
using namespace std;

int main(){

    int repeat =1;

    string namabarang[3]= {
      "Bukutulis",
      "Bukugambar",
      "PensilWarna"  
    };

    int harga[3]= {
        10000,
        20000,
        30000
    };


    int jumlah = 0;

    cout << "=======Selamat Datang========"<< endl;
    cout << "============================="<< endl;
    cout << "==========Daftar Buku========"<< endl;
    for (int i = 0; i < 3; i++)
    {

        cout <<  (i+1) << "." <<  namabarang[i] << endl;
        
    }

    int pilihan[100];
    int jumlahpilihan=0;

    while (repeat ==1)
    {

    cout << "Silahkan memilih Buku mana : ";
    cin >> pilihan[jumlahpilihan];
    jumlahpilihan++;
    cout << "Berhasil Memesan apakah ingin lagi [1/0] ? "
;
    cin >> repeat;
   
    }

    for (int i = 0; i < jumlahpilihan; i++)
    {
        cout << namabarang[pilihan[i]-1] << " "
        << harga [ pilihan[i]-1] << endl;

        jumlah = jumlah + harga[pilihan[i] -1]; 
    }

    cout << " total harga = " << jumlah << endl;
}
    // cout <<  namabarang[pilihan-1] << " " 
    // <<harga[pilihan-1 ]<< endl;

    
   
    

    

    

