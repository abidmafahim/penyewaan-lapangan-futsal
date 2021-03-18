#include<iostream>
#include<limits>
#include<unistd.h>
using namespace std;

struct data{
    string nama;
    int jml_orang;
    int harga = 50000;
};

inputData(){

}

menu(){
    char choose;
    cout << "=======================================================================\n";
    cout << "\t\tAPLIKASI PEMESANAN LAPANGAN FUTSALL\n";
    cout << "=======================================================================\n";
    cout << "1. Tambah data penyewaan\n";
    cout << "2. Tampilkan data penyewaan\n";
    cout << "3. Keluar\n";
    cout << "Pilih Menu: ";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin >> choose;
    return choose;
}

main(){
    char choose = menu();
    while(true){
        if(choose == '1'){

            break;
        }
        else if(choose == '2'){

            break;
        }
        else if(choose == '3'){

            break;
        }
        else{
           exit(0);
        }
    }

}
