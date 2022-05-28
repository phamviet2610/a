#pragma once
#include<iostream>
using namespace std;
class QuanCo {
	string loaico, mausac;
	int x, y, trangthai;
public:
	void setQuanCo(string loaico, string mausac, int x, int y);
	string getLoaiCo();
	string getMauSac();
	int getX();
	int getY();
	int getTT();
	void xuat();
};