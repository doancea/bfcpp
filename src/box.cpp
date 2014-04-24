#include<iostream>
#include<string>
#include<sstream>

using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

#include "box.h"
Box::Box(int h, int w, char c) {
	height = h;
	width = w;
	sideChar = c;
}

string Box::getRow(int row) {
	if(row == 1 || row == height) { 
		return string(width, sideChar);
	} else {
		ostringstream s;
		s << sideChar << string(width-2, ' ') << sideChar;
		return s.str(); 		
	}
}

int Box::getHeight() {
	return height;
}


