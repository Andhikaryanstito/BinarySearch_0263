#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;
void input() { //prosedur input
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
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for(int i=0;i<npanjang;i++){
        cout << "Data ke-" << (i+1) << " = ";
        cin >> element[i];
    }
}
void bubbleSortArray(){
    int pass = 1; //step 1
   do{
    for (int j=0;j<=npanjang-1-pass;j++){ //step 2
    }
}
}