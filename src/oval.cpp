#include<iostream>
#include<string>
#include<sstream>

using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

#include "oval.h"
Oval::Oval(int h, int w, char c) {
	height = h;
	width = w;
	sideChar = c;
}

string Oval::getRow(int row) {
	return string(1, '*');	
}

int Oval::getHeight() {
	return height;
}
