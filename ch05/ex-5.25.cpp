#include <iostream>
#include "stdexcept"

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int num1, num2;
    while (cin >> num1 >> num2)
    {
        try
        {
            if (num2 == 0)
                throw runtime_error("The divisor is 0.");
            cout << static_cast<double>(num1) / num2 << endl;
            break;
        }
        catch (runtime_error is_zero)
        {
            cout << is_zero.what() << endl
                 << "Try again? Enter y or n." << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
    return 0;
}