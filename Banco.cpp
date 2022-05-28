#include"Banco.h"
#include<fstream>
void BanCo::Nhap() {
	string x, y;
	int k, t;
	ifstream input("D:\\Tren lop\\temp\\temp\\a.txt");
	for (int i = 0; i < 32; i++) {
		input >> x >> y >> k >> t;
		bc[i].setQuanCo(x, y, k, t);
		tt[k - 1][t - 1] = 1;
	}
}
void BanCo::DiChuyen(string loaico, string mausac) {
	int i = 0;
	for (; i < 32; i++) {
		if (bc[i].getLoaiCo() == loaico && bc[i].getMauSac() == mausac) {
			break;
		}
	}
	cout << "\nNhung cach di duoc: ";
	if (bc[i].getLoaiCo() == "tuong") {
		if (tt[bc[i].getX()-2][bc[i].getY()-1] != 1 && bc[i].getX()==5) {
			cout << "\nCan go to " << "(" << bc[i].getX() - 1 << ";" << bc[i].getY() << ")";
		}
		if (tt[bc[i].getX()][bc[i].getY() - 1] != 1 && bc[i].getX()== 5) {
			cout << "\nCan go to " << "(" << bc[i].getX() + 1 << ";" << bc[i].getY() << ")";
		}
		/*...*/
	}
}