//oval.h
//Oval Class def
//Members defined in oval.cpp
//#include<string>
//using std::string;
#ifndef OVAL_H
#define OVAL_H

class Oval {
	
	public:		
		Oval(int);
		int getHeight();
		int getWidth();
	private:
		int height;
};
#endif
