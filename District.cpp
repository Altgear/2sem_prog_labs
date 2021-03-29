#include <iostream>
#include "District.h"

District::District(std::string district_name_, unsigned int payout_amount_,
        double min_average_monthly_income_) : district_name(district_name_),
        payout_amount(payout_amount_),
        min_average_monthly_income(min_average_monthly_income_) {
}

void District::print_stats() const {
    std::cout << "district name:" << district_name
        << "\npayout amount:" << payout_amount
        << "\nmin monthly count:" << min_average_monthly_income << "\n\n";
}

double District::get_min_income() const{
    return min_average_monthly_income;
}
