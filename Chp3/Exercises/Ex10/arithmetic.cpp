/* This program implement simple two element arithmetic operation of two doubles.
 *   operation implented:
 *      - +
 *      - -
 *      - *
 *      - /
 *      - plus
 *      - minus
 *      - mul
 *      - div
 */
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

double plus_f(double d1, double d2);
double minus_f(double d1, double d2);
double mul_f(double d1, double d2);
double div_f(double d1, double d2);

int main()
{
    string operation;
    double d1, d2, r;
    cout << "Input your calculation (e.g. '* 2.1 3.9', 'div -134 324'): " << endl;
    cin >> operation >> d1 >> d2;
    if (operation == "+" || operation == "plus")
        r = plus_f(d1, d2);
    if (operation == "-" || operation == "minus")
        r = minus_f(d1, d2);
    if (operation == "*" || operation == "mul")
        r = mul_f(d1, d2);
    if (operation == "/" || operation == "div")
        r = div_f(d1, d2);
    int precision = numeric_limits<double>::max_digits10;
    cout << setprecision(precision) << r << endl;
    return 0;
}

double plus_f(double d1, double d2)
{
    return d1+d2;
}

double minus_f(double d1, double d2)
{
    return d1-d2;
}

double mul_f(double d1, double d2)
{
    return d1*d2;
}

double div_f(double d1, double d2)
{
    return d1/d2;
}
