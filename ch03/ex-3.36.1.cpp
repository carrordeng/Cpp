#include <iostream>

using std::begin;
using std::cout;
using std::end;
using std::endl;

bool icompare(int *pb1, int *pe1, int *pb2, int *pe2)
{
    if ((pe1 - pb1) != (pe2 - pb2))
        return 0;
    else
    {
        for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
        {
            if (*i != *j)
                return 0;
        }
        return 1;
    }
}

int main()
{
    int ia1[5] = {1, 2, 3, 4, 5};
    int ia2[5] = {1, 2, 3, 4, 5};
    int ia3[5] = {1, 2, 3, 4, 6};
    int ia4[3] = {1, 2, 3};
    cout << "ia1 and ia2 are "
         << (icompare(begin(ia1), end(ia1), begin(ia2), end(ia2)) ? "equal." : "not equal.") << endl;
    cout << "ia1 and ia3 are "
         << (icompare(begin(ia1), end(ia1), begin(ia3), end(ia3)) ? "equal." : "not equal.") << endl;
    cout << "ia1 and ia4 are "
         << (icompare(begin(ia1), end(ia1), begin(ia4), end(ia4)) ? "equal." : "not equal.") << endl;
}