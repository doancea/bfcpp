//box.h
//Box Class def
//Members defined in box.cpp
#include<string>
using std::string;
#ifndef BOX_H
#define BOX_H

class Box {
	
	public:		
		Box(int, int, char);
		string getRow( int );
		int getHeight();
	private:
		int height;
		int width;
		char sideChar;
};
#endif
