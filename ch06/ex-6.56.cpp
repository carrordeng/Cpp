#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int func(int ia, int ib);
int iadd(int ia, int ib)
{
    return ia + ib;
}
int isub(int ia, int ib)
{
    return ia - ib;
}
int imul(int ia, int ib)
{
    return ia * ib;
}
int idiv(int ia, int ib)
{
    return ia / ib;
}

int main()
{
    vector<decltype(func) *> vpfunc;
    vpfunc.push_back(&iadd);
    vpfunc.push_back(&isub);
    vpfunc.push_back(&imul);
    vpfunc.push_back(&idiv);
    for (auto f : vpfunc)
        cout << f(4, 2) << endl;
    return 0;
}