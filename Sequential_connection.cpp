#include "Sequential_connection.h"

void Sequential_connection::print_params() const {
    if ( !resistors.empty() ) {
        std::size_t index = 1;
        std::cout << "Sequqntial connection parameters\n";
        for (const auto& current : resistors) {
            std::cout << "    Resistor №" << index << " : " << current << " Ohm\n";
            index++;
        }
    } else {
        std::cout << "    No resistors found\n";
    } 
}

double& Sequential_connection::calc_resistance() {
    resistence_value = 0;
    if ( !resistors.empty() ) {
        for (const auto & current : resistors) {
            resistence_value += current;
        }
    }
    return resistence_value;
}

Sequential_connection::Sequential_connection() : Resistor_connection() {}

Sequential_connection::Sequential_connection(std::vector<double>& input)
: Resistor_connection(input) {}
