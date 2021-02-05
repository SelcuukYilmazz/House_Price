#include <iostream>

int main() {
    float price;
    float wideness;
    int neighbours;

    std::cin >> wideness;
    std::cin >> neighbours;

    price =(pow(neighbours,3)+pow(wideness,2))*1000;

    std::cout << price;


}
