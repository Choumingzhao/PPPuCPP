/* This program user for different coins 
 * and output the input with number right-justified
 * and report the sum in dollars and cents
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int get_n_digits(int num);

int main()
{
    int penny, nickel, dime, quarter, half, one = 0;
    double sum = 0;
    // prompt to get infos
    cout << "How many pennies do you have? ";
    cin >> penny;
    cout << "How many nickels do you have? ";
    cin >> nickel;
    cout << "How many dimes do you have? ";
    cin >> dime;
    cout << "How many quarters do you have? ";
    cin >> quarter;
    cout << "How many half dollars do you have? ";
    cin >> half;
    cout << "How many one-dollar coins do you have? ";
    cin >> one;
    cout << endl;
    // print the report with number right-justified
    int largest=0, max_n_digits=1;
    int n_coins [6] = {penny, nickel, dime, quarter, half, one};
    string singular [6] = {"penny", "nickel", "dime", "quarter", "half dollar", "one-dollar coin"};
    string plural [6] = {"pennies", "nickels", "dimes", "quarters", "half dollars", "one-dollar coins"};
    for (int i=0; i<6; ++i)
    {
      int elem = n_coins[i];
      if (elem > largest)
            largest = elem;
    }
    max_n_digits = get_n_digits(largest);
    for (int i=0; i<6; ++i){
      if (n_coins[i] > 1)
        cout << "You have " << setw(max_n_digits) << n_coins[i] << " " << plural[i] << "." << endl;
      else
        cout << "You have " << setw(max_n_digits) << n_coins[i] << " " << singular[i] << "." << endl;
    } 
//    cout << "max number of digits: " << max_n_digits << endl;
    sum = (1*penny+5*nickel+10*dime+25*quarter+50*half+100*one)/100.0;
    cout << fixed << setprecision(2) << "The value of all your coins is $" << sum << endl;
    return 0;
} 
// Get number of digits of a positive integer
int get_n_digits(int num)
{
    int n_digit = 1;
    while (num>=10) {
        num /= 10;
        n_digit += 1;
    }
    return n_digit;
}

