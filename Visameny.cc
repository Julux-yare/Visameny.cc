#include <iostream>

void visaMeny() {
    std::cout << "\n--- Enkel meny ---\n";
    std::cout << "1. Summera två tal\n";
    std::cout << "2. Visa ett meddelande\n";
    std::cout << "3. Avsluta\n";
    std::cout << "Välj ett alternativ: ";
}

int main() {
    int val;

    do {
        visaMeny();
        std::cin >> val;

        switch (val) {
            case 1: {
                int a, b;
                std::cout << "Skriv två tal: ";
                std::cin >> a >> b;
                std::cout << "Summan är: " << a + b << std::endl;
                break;
            }
            case 2:
                std::cout << "Hej från C++!" << std::endl;
                break;
            case 3:
                std::cout << "Avslutar programmet..." << std::endl;
                break;
            default:
                std::cout << "Ogiltigt val, försök igen." << std::endl;
        }
    } while (val != 3);

    return 0;
}
