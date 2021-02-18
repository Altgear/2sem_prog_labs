#include "Vector.h"

int main() {
    Vector v1;
    int* row = new int[9];
    for (int i=0; i < 10; i++) {
        v1.push_back(i);
        row[i] = -10 - i;
    }
    Vector v2(v1);
    v2.replace(7, 5);
    v2.replace(5, 99);
    std::size_t size = 9;
    Vector v3(9 , row );
    std::cout << "index of found 99 is" << v2.find(99) << std::endl;
    v1.push_back(999);
    std::cout << v1 << std::endl << v2 << std::endl << v3 << std::endl ;
    std::cout << v1.size() << std::endl << v2.size() << std::endl << 
    v3.size() << std::endl ;
    v3 = v1;
    std::cout <<"v3 = v1:" << std::endl << v3 << std::endl << v3.size() << std::endl;

    return 0;
};
