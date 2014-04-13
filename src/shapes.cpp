#include<iostream>
#include<string>
#include<sstream>

using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

#define C '*'
#define WS ' '
#define SHAPE_HEIGHT 10

string ovalRow( int, int );
string boxRow( int, int );

int main() {
	
	ostringstream oss;

	int i, 
	boxWidth = 10 
	,shapeSpace = 5
	//,ovalWidth  = 5
	//,arrowWidth = 5
	//,diaWidth = 10i
	;	

	//bool //boxFill = false
	//,ovalFill = false
	//,diaFill = false;
		
	
	for(i = 1; i <= SHAPE_HEIGHT; i++) {
		oss << boxRow(boxWidth, i) << string(shapeSpace, WS) << C << endl;
	}
	
	cout << oss.str();
	return 0;
}

string boxRow(int w, int row) {
	if(row == 1 || row == SHAPE_HEIGHT) { 
		return string(w, C);
	} else {
		ostringstream s;
		s << C << string(w-2, WS) << C;
		return s.str(); 		
	}
}

/*
string ovalRow(int w, int row) {
	
}*/
