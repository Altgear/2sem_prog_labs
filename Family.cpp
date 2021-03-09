#include <iostream>
#include "Family.h"

double Family::calc_averege_income() const {
    return monthly_income/member_count;
}

void Family::print_stats() const {
    std::cout << "family name:" << family_name
        << "\nmember count:" << member_count
        << "\nmonthly count:" << monthly_income
        << "\naverege income:" << calc_averege_income() << std::endl; 
}
