#include <iostream>
using namespace std;

int arr[20];
int n;

void input (){
    while (true){
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }

        }
    cout << endl;
    cout << "=============================================";
    cout << "==========Masukan Element Array==============";
    cout << "=============================================" << endl;

   for ( int i = 0; i < n; i++ ){
        cout << "Data ke-" << (i+i) << ": ";
        cin >> arr[i];
    }
}

void insertionsort(){
    int temp;
    int j;

    