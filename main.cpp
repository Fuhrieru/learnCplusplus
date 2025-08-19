#include <iostream>
//Ask the user to enter three values and print those values in a sentence
int main() {
    std::cout << "Enter three numbers seperated by a space: \n";

    int x {};
    int y {};
    int z {};

    std::cin >> x >> y >> z;

   std::cout << "You entered " << x  << ", " << y << ", and " << z << "\n";
    return 0;
}