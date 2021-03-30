#include "Resistor_connection.h"

void Resistor_connection::print_resist_value() const {
    std::cout << "Resistance value is : " << resistence_value << " Ohm\n";
}

Resistor_connection::Resistor_connection() : resistence_value(0) {}

Resistor_connection::Resistor_connection(std::vector<double>& input)
: resistence_value(0) {
    resistors = input;
}
