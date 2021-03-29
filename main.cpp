#include "Family.h"
#include "District.h"
#include "Family_from_district.h"

#include <iostream>

int main() {
    Family ZARA("ZARA",59,500000);
    ZARA.print_stats();
    District New_York("New York", 4800, 10000);
    New_York.print_stats();
    Family_from_district Expensive("ZARA",59,500000,"New York", 4800, 10000);
    Expensive.print_stats();
    std::cout << "New monthly_income: " << Expensive.calc_averege_income()
    << std::endl;
    
    return 0;
};
