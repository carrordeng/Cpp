#include <iostream>
//You can only use Hx or Oct in escape sequences

int main()
{
    std::cout << "\062\115\012";
    std::cout << "\062\t\115\012";
    return 0;
}