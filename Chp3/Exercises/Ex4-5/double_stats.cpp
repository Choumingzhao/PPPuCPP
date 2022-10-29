#include <iostream>

using namespace std;



int main()
{
    double val1, val2;
    cout << "Input two floating numbers ( seperated by space, ended with ENTER): " << endl;
    cin >> val1 >> val2;
    double min, max, sum, diff, prod, ratio;
    if (val1 < val2)
    {
        min = val1;
        max = val2;
    } else {
        min = val2;
        max = val1;
    }
    sum = val1 + val2;
    diff = val1 - val2;
    prod = val1 * val2;
    ratio = val1 / val2;
    cout << "smallest: " << min << endl
         << "largest: " << max << endl
         << "sum: " << sum << endl
         << "difference: " << diff << endl
         << "product: " << prod << endl
         << "ratio: " << ratio << endl;
    return 0;
}


