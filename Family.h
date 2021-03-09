#ifndef FAMILY_HPP_
#define FAMILY_HPP_

#include <string>

class Family {
    protected:
        std::string family_name;
        unsigned int member_count;
        double monthly_income;
    
    public:
        double calc_averege_income();
        void print_stats();

};

#endif //FAMILY_HPP_
