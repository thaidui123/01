// 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	int so1, so2, tong;
	cout << "chuong trinh tinh tong\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu 2:";
	cin >> so2;
	tong = so1 + so2;
	cout << so1 << "+" << so2 << "="
		<< tong
		<< endl;
	return 0;
}