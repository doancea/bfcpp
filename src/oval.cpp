#include<iostream>
#include<string>
#include<sstream>

using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

#include "oval.h"
Oval::Oval(int h) {
	height = h;
}
/*
string Oval::getRow(int row) {
	return string(1, '*');	
}
*/
int Oval::getHeight() {
	return height;
}
