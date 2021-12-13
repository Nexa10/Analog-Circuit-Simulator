//Dennis Audu
//daudu@myseneca.ca

#ifndef _RESISTOR_H_
#define _RESISTOR_H_

class Resistor {
	double current;
	double resistance;
public:
	Resistor(double _resistance);
	double GetCurrent(double voltage);
};



#endif //_RESISTOR_H_