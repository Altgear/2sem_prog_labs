#ifndef FAMILY_FROM_DISTRICT_H_
#define FAMILY_FROM_DISTRICT_H_

#include "Family.h"
#include "District.h"

class Family_from_district : public Family, District{
    
    public:
        double calc_averege_income() const;
        void print_stats() const;
        Family_from_district(std::string family_name_,
            unsigned int member_count_, double monthly_income_, std::string district_name_,
            unsigned int payout_amount_, double min_average_monthly_income_);


};

#endif //FAMILY_FROM_DISTRICT_H_
