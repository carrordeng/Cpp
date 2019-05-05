#include <iostream>
#include "stdexcept"

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    if (num2 == 0)
        throw runtime_error("The divisor is 0.");
    cout << static_cast<double>(num1) / num2 << endl;
    return 0;
}