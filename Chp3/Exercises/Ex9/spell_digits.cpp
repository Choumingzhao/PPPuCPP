/* Convert spell-out number to digit, only support zero to four
 *   zero -> 0
 *   one -> 1
 *   two -> 2
 *   three -> 3
 *   four -> 4
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string english;
    int digit=-1;
    cout << "Enter 'zero' to 'four' in English: " << endl;
    cin >> english;
    if (english == "zero")
        digit = 0;
    if (english == "one")
       digit = 1;
    if (english == "two")
        digit = 2;
    if (english == "three")
        digit = 3;
    if (english == "four")
        digit = 4;
    if (digit < 0 || digit > 4)
        cout << "Not a number I know" << endl;
    else    
        cout << "'"  << english << "'->" << digit << endl;

    return 0;
}
