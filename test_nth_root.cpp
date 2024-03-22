#include <iostream>
#include <cmath>
#include "./nth_root.h"

int main() {
    
    {   
    
    try {
        for(int i = -10; i <= 10; i++) {
            int j = 10;
            nth_root(i,j);
            j -= 1;

            nth_root(-1,0);
            nth_root(2,0.1);
            nth_root(7,-3);
            nth_root(4,-2);
            nth_root(7,0);
        }
    }
    catch(std::domain_error& e) {
        std::cout << e.what() << std::endl;
    }
    }

    {   // TRY HARD
        // report the value
        double actual = nth_root(2, 1);
        std::cout << "nth_root(2, 1) = " << actual << std::endl;
    }

    {   // TRY HARDER
        // compare the actual value to the expected value
        double actual = nth_root(2, 1);
        double expected = 1;
        if (std::fabs(actual - expected) > 0.00005) {
            std::cout << "[FAIL] (n=2, x=1)" << std::endl;
            std::cout << "  expected nth_root(2, 1) to be " << expected << std::endl;
            std::cout << "  got " << actual << std::endl;
        } else {
            std::cout << "[PASS] (n=2, x=1)" << std::endl;
        }
    }
}
