#include "Sequential_connection.h"
#include "Parallel_connection.h"
#include "ctime"

int main() {
    std::vector<Resistor_connection*> resist_vector;
    srand(time(NULL));




    for (std::size_t i = 0; i < rand() % 15;i++) {
        std::vector<double> tmp;
            for (std::size_t j = 0; j < rand() % 13; j++) {
                tmp.push_back((rand() %100) / ((rand() % 10 + 1.0)));
            }
        if ( i % 2 ) {
            resist_vector.push_back(new Sequential_connection(tmp));
        } else {
            resist_vector.push_back(new Parallel_connection(tmp));
        } 
    }
    for (std::size_t i = 0; i < resist_vector.size(); i++ ) {
        resist_vector[i]->calc_resistance();
        resist_vector[i]->print_resist_value();
        resist_vector[i]->print_params();
    }
    return 0;
}