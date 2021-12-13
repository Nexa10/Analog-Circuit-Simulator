//Dennis Audu
//daudu@myseneca.ca

#ifndef _CAPACITOR_H_
#define _CAPACITOR_H_

class Capacitor {
	double capacitance;
	double current;
	double voltage;
public:
	Capacitor(double _capacitance);
	double GetCurrent(double newVoltage, double timeStep);


};



#endif //_CAPACITOR_H_