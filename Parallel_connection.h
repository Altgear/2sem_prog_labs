#include "Resistor_connection.h"

#ifndef PARALLEL_CONNECTION_H__
#define PARALLEL_CONNECTION_H__

class Parallel_connection : public Resistor_connection {
    public:
        virtual void print_params() const override;
        virtual double& calc_resistance() override; 
        Parallel_connection();
        Parallel_connection(std::vector<double>& input);

};

#endif //PARALLEL_CONNECTION_H__
