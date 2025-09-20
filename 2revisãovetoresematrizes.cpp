#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::vector<int> vetor(10);

    std::cout << "Números aleatórios: ";
    for (int &num : vetor) {
         num = std::rand() % 100;
           std::cout << num << " ";
    }
    std::cout << std::endl;
    std::sort(vetor.begin(), vetor.end());
    
    
    std::cout << "Em ordem: ";
    for (const int &num : vetor) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}