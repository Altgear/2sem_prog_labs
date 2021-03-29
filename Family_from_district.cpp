#include <iostream>
#include "Family_from_district.h"
#include <string> 

double Family_from_district::calc_averege_income() const {
    double result;
    auto bonus = get_min_income();
    if (result < bonus)
        result = Family::calc_averege_income() + payout_amount;
    else
        result = Family::calc_averege_income();
    return result;
}

void Family_from_district::print_stats() const {
    District::print_stats();
    Family::print_stats();
}

Family_from_district::Family_from_district(std::string family_name_,
    unsigned int member_count_, double monthly_income_, std::string district_name_,
    unsigned int payout_amount_, double min_average_monthly_income_)
    : Family(family_name_, member_count_, monthly_income_),
    District(district_name_, payout_amount_, min_average_monthly_income_){
}
