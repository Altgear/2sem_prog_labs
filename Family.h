#ifndef FAMILY_H_
#define FAMILY_H_

#include <string>

class Family {
    private:
        std::string family_name;
        unsigned int member_count;
        double monthly_income;
    
    public:
        double calc_averege_income() const;
        void print_stats() const;
        Family(std::string family_name_, unsigned int member_count_,
        double monthly_income_);
};

#endif //FAMILY_H_
