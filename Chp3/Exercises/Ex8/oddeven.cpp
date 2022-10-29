/* This program test if a number is odd or even.
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string result;
    cout << "Input a integer for odd/even test: " << endl;
    cin >> n;

    if (n%2 == 0)
        result = "even";
    else
        result = "odd";
    cout << "The value " << n << " is an " << result << " number." << endl;
    return 0;
}
