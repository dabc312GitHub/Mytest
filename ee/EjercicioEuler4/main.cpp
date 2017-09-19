#include <iostream>
using namespace std;
int main() {
    int max_product = 0;
    for (int i = 99; i > 9; i--) {
        for (int j = i; j > 9; j--) {
            int product = i * j;
            if (product < max_product)
                break;
            int number = product;
            int reverse = 0;
            while (number != 0) {
                reverse = reverse * 10 + number % 10;
                number /= 10;
            }
            if (product == reverse && product > max_product) {
                max_product = product;
            }
        }
    }
    cout << "Solution: " << max_product << endl;
    return 0;
}
