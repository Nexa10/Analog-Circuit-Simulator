//Dennis Audu
//daudu@myseneca.ca
#include "Resistor.h"

Resistor::Resistor(double _resistance) {
	resistance = _resistance;
	current = 0.0;
}

double Resistor::GetCurrent(double voltage) {
	current = voltage / resistance;
	return current;
}