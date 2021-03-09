#ifndef DISTRICT_H__
#define DISTRICT_H__

#include <string>

class District {
    private:
        std::string district_name;
        unsigned int payout_amount;
        double min_average_monthly_income;
    
    public:
        District(std::string district_name,
            unsigned int payout_amount, double min_average_monthly_income);
        void print_stats() const;
        double get_min_income() const;
};

#endif //DISTRICT_H__
