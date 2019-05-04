#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
             bsCnt = 0, tabCnt = 0, nlCnt = 0, ffCnt = 0, fiCnt = 0, flCnt = 0;
    char ch, prech = '\0';
    while (cin >> std::noskipws >> ch)
    {
        switch (ch)
        {
        case 'A':
        case 'a':
            ++aCnt;
            break;
        case 'E':
        case 'e':
            ++eCnt;
            break;
        case 'i':
            if(prech == 'f')
                ++fiCnt;
        case 'I':
            ++iCnt;
            break;
        case 'O':
        case 'o':
            ++oCnt;
            break;
        case 'U':
        case 'u':
            ++uCnt;
            break;
        case ' ':
            ++bsCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++nlCnt;
            break;
        case 'f':
            if(prech == 'f')
                ++ffCnt;
            break;
        case 'l':
            if(prech == 'f')
                ++flCnt;
            break;
        }
        prech = ((prech != 'f') * ch);
    }
    cout << "Number of vowel a(A): \t" << aCnt << endl
         << "Number of vowel e(E): \t" << eCnt << endl
         << "Number of vowel i(I): \t" << iCnt << endl
         << "Number of vowel o(O): \t" << oCnt << endl
         << "Number of vowel u(U): \t" << uCnt << endl
         << "Number of blank spaces: \t" << bsCnt << endl
         << "Number of tabs: \t" << tabCnt << endl
         << "Number of newlines: \t" << nlCnt << endl
         << "Number of ff: \t" << ffCnt << endl
         << "Number of fi: \t" << fiCnt << endl
         << "Number of fl: \t" << flCnt << endl;
    return 0;
}