#include "Resistor_connection.h"

#ifndef SEQUENTIAL_CONNECTION_H__
#define SEQUENTIAL_CONNECTION_H__

class Sequential_connection : public Resistor_connection {
    public:
        virtual void print_params() const override;
        virtual double& calc_resistance() override;
        Sequential_connection();
        Sequential_connection(std::vector<double>& input);

};

#endif //SEQUENTIAL_CONNECTION_H__