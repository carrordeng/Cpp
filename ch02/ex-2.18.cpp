#include <iostream>

int main()
{
    int i = 8, *pi = nullptr;
    pi = &i;
    *pi = 1;
    std::cout << i << " " << *pi << std::endl;
    return 0;
}
