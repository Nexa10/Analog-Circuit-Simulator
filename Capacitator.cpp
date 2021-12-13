//Dennis Audu
//daudu@myseneca.ca
#include "Capacitor.h"

Capacitor::Capacitor(double _capacitance) {
	capacitance = _capacitance;
	current = 0.0;
	voltage = 0.0;
}

double Capacitor::GetCurrent(double newVoltage, double timeStep) {
	current = capacitance * (newVoltage - voltage) / timeStep;
	voltage = newVoltage;
	return current;
}