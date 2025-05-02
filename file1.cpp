#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;\
void input() {
    while (true){
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> npanjang;
        if (npanjang <= 20){
            break;
        }
        else {
            cout << "\nAraay maksimal 20 elemen.\n";
        }
    }
