#pragma once
#include"Quanco.h"
void QuanCo::setQuanCo(string loaico, string mausac, int x, int y) {
	this->loaico = loaico;
	this->mausac = mausac;
	this->x = x; this->y = y;
	trangthai = 1;
}
void QuanCo::xuat() {
	cout << loaico << " " << mausac << " " << "(" << x << ";" << y << ")";
}
string QuanCo::getLoaiCo() {
	return loaico;
}
string QuanCo::getMauSac() {
	return mausac;
}
int QuanCo::getX() {
	return x;
}
int QuanCo::getY() {
	return y;
}
int QuanCo::getTT() {
	return trangthai;
}