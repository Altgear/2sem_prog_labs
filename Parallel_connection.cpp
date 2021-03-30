#include "Parallel_connection.h"

void Parallel_connection::print_params() const  {
    if ( !resistors.empty() ) {
        std::size_t index = 1;
        std::cout << "Parallel connection parameters\n";
        for (const auto& current : resistors) {
            std::cout << "    Resistor №" << index << " : " << current << " Ohm\n";
            index++;
        }
    } else {
        std::cout << "No resistors found\n";
    } 
}

double& Parallel_connection::calc_resistance() {
    if ( !resistors.empty() ) {
        double mult_r = 1;
        double sum_r = 0;
        for (const auto & current : resistors) {
            mult_r *= current;
            sum_r += current;
        }
        return resistence_value = mult_r/sum_r;
    } else {
        return resistence_value = 0;
    }
}

Parallel_connection::Parallel_connection() : Resistor_connection() {}

Parallel_connection::Parallel_connection(std::vector<double>& input)
: Resistor_connection(input) {}

