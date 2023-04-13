#include <iostream>

using namespace std;

int main()
{
    double miles;
    cout << "Input number of miles to convert: " << endl;
    cin >> miles;
    cout << miles << " miles=" << 1.609*miles << " kilometers" << endl;
    return 0;
}

