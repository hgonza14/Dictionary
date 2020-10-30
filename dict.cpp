#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    std::ifstream file("dictionary.txt");
    std::string str;
    while (std::getline(file, str)) {
        std::cout << str << "\n";
    }
}