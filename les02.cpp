/*fibonacci series*/

#include <iostream>
 
int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int a = 0, b = 1, c;
    std::cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        std::cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    std::cout << std::endl;
    return 0;
}
