#include <iostream>
#include <string>
int main() {
    double s = 0;
    int n,k;
    std::cin >> k;
    for (n = 1;;n++) {
        s += 1.0 / n;
        if (s > k) {
            std::cout << n;
            return 0;
        }
    }
    return 0;
}
