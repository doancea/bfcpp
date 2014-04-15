#include<iostream>
#include<string>
#include<sstream>
#include "box.h"

using std::cout;
using std::endl;
using std::string;

#define WS ' '
#define C '*'
#define SHAPE_HEIGHT 10
#define BOX_WIDTH 5
#define SPACING 5

int main() {
	
	int i;	
	Box b(SHAPE_HEIGHT, BOX_WIDTH, C);		
	
	for(i = 1; i <= b.getHeight(); i++) {
		cout << b.getRow(i) << string(SPACING, WS) << C << endl;
	}
	
	return 0;
}

