#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &ia, int &ib)
{
    int tmp = ia;
    ia = ib;
    ib = tmp;
}

int main()
{
    int ia, ib;
    cin >> ia >> ib;
    swap(ia, ib);
    cout << ia << " " << ib << endl;
    return 0;
}