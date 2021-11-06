#include <iostream>

int ackermann(int m, int n) {
    if(m == 0) 
        return n + 1;
    else if(n == 0) 
        return ackermann(m - 1, 1);
    else 
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    for(int i = 0; i < 10; i ++) {
        for(int j = 0; j < 10; j ++) {
            std::cout << "Ackermann(" << i << ", " << j << ") = " << ackermann(i, j)
            << std::endl;
        }
    }
    return 0;
}