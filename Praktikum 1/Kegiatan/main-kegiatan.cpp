#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
    a:
    system("color 0a");
    cout<<"======================\n";
    int pil,lagi;
    float satu,dua;
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pembagian\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pengurangan\n";
    cout<<"Masukkan pilihan = "; cin>>pil;
    if (pil<=4 && pil >=1)
    {
        cout << endl;
        switch(pil)
        {
            case 1:
            cout << "Anda Memilih Penjumlahan [+]" << "\n"; break;
            case 2: 
            cout << "Anda Memilih Pembagian [:]" << "\n"; break;
            case 3:
            cout << "Anda Memilih Perkalian [x]" << "\n"; break;
            case 4:
            cout << "Anda Memilih Pengurangan [-]" << "\n"; break;
        }
        cout << "Angka Pertama ="; cin >> satu;
        cout << "Angka Kedua ="; cin >> dua;
        switch(pil)
    }
}