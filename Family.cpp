#include <iostream>
#include "Family.h"

double Family::calc_averege_income() const {
    return monthly_income/member_count;
}

void Family::print_stats() const {
    std::cout << "family name:" << family_name
        << "\nmember count:" << member_count
        << "\nmonthly count:" << monthly_income
        << "\naverege income:" << calc_averege_income() << "\n\n"; 
}

Family::Family(std::string family_name_, unsigned int member_count_,
        double monthly_income_) : family_name(family_name_),
        member_count(member_count_),
        monthly_income(monthly_income_) {
}