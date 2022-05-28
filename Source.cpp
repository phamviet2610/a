#include <iostream>
#include"BanCo.h"
using namespace std;



void Menu() {
    BanCo bc;



    char chon, check;
    do {
        system("cls");
        do {
            cout << "CHUONG TRINH CO TUONG" << endl;
            cout << "1. Tao ban co" << endl;
            cout << "2. Di chuyen" << endl;
            cout << "3. Thoat";
            cin >> chon;
        } while (chon < '1' || chon>'3');



        switch (chon) {
        case '1': bc.Nhap(); break;
        case '2': cout << "Di chuyen"; break;
        case '3': exit(0);
        }



        cout << "Bac co tiep tuc khong (C/K):";
        cin >> check;



    } while (check != 'K' || check != 'k');
}



int main()
{
    Menu();
    return 0;
}