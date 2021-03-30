#include <iostream>
#include <vector>

#ifndef RESISTOR_CONNECTION_H__
#define RESISTOR_CONNECTION_H__

class Resistor_connection {
    protected:
        double resistence_value;
        std::vector<double> resistors;

    public:
        void print_resist_value() const;
        virtual void print_params() const = 0;
        virtual double& calc_resistance() = 0; 
        Resistor_connection();
        Resistor_connection(std::vector<double>& input);
};

#endif //RESISTOR_CONNECTION_H__
