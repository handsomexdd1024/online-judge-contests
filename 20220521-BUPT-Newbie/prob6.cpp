#include <iostream>
#include <cstring>

int main() {
    char buf=0, cur;
    while(std::cin >> cur) {
        if(buf != cur) {
            buf = cur;
            std::cout << cur;
        }
    }
    return 0;
}