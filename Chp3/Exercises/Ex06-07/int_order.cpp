#include <iostream>
using namespace std;
// Input 3 int and output them in numerical sequence order 
int main()
{
    int n1, n2, n3;
    cout << "Enter 3 integers to be sorted(separated by SPACE and ended with ENTER): " << endl;
    cin >> n1 >> n2 >> n3;
    int min, max, mid;
    if (n1 < n2){
        if (n1 < n3){
            min = n1;
            if (n2 < n3){
                mid = n2;
                max = n3;
            } else {
                mid = n3;
                max = n2;
            }
        } else {
            min = n3;
            mid = n1;
            max = n2;
        }
    } else {
        if (n2 < n3){
            min = n2;
            if (n1 < n3){
                min = n1;
                max = n3;
            } else {
                min = n3;
                max = n1;
            }
        } else {
            min = n3;
            mid = n2;
            max = n1;
        }
    }
    cout << min << ", " << mid << ", " << max << endl;
    return 0;
}

