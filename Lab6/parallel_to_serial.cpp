#include "parallel_to_serial.h"
#include "pch.h"

parallel_to_serial::parallel_to_serial(int n) {
	myPort = n;
}

void parallel_to_serial::operator+=(int inc) {
	if (inc > 1 || inc < 0) {
		cout << "\nError: can only shift by one place";
		return;
	}

	myPort = myPort << 1;
	if (inc == 1) {
		myPort += 1;
	}
	myPort = myPort & 0xf;
}

void parallel_to_serial::display() {
	bitset<4> temp;
	bitset<8> temp2;
	temp = myPort;
	temp2 = myPort;
	cout << "\n4 Bits: " << temp;
	cout << "\n8 Bits: " << temp2;
	cout << "\nDec:\t" << int(myPort) << endl;
}