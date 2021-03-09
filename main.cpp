#include "Family.h"
#include "District.h"
#include "Family_from_district.h"

int main() {
    Family ZARA("ZARA",59,500000);
    ZARA.print_stats();
    District New_York("New York", 4800, 10000);
    New_York.print_stats();
    
    
    return 0;
};
