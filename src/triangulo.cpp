#include <iostream>

void imprimirTriangulo(int altura) {
    for (int i = 1; i <= altura; ++i) {
        std::cout << std::string(i, '*') << "\n";
    }
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    imprimirTriangulo(a);
    imprimirTriangulo(b);
    imprimirTriangulo(c);
    
    return 0;
}
