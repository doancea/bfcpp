//oval.h
//Oval Class def
//Members defined in oval.cpp
#include<string>
using std::string;
#ifndef OVAL_H
#define OVAL_H

class Oval {
	
	public:		
		Oval(int, int, char);
		string getRow( int );
		int getHeight();
	private:
		int height;
		int width;
		char sideChar;
};
#endif
