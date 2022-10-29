#include "std_lib_facilities.h"
using namespace std;

void prompt_delim();
int main()
{
    // Part 1: Get mail receiver name
    prompt_delim();
    cout << "Enter the name of the person you want to write to:" << endl;
    string first_name;
    cin >> first_name;
    prompt_delim();
    // Start mail content
    cout << "Dear " << first_name << "," << endl;
    cout << endl;
    cout << "How are you? I am fine. I miss you." << endl
         << "I hope you are alright" << endl
         << "This mail is generate from a C++ program I recent wrote. " << endl;
    cout << endl;
    // Get name of another friend
    prompt_delim();
    cout << "Enter the name of another friend you'd like to bring up: " << endl;
    string friend_name;
    cin >> friend_name;
    prompt_delim();
    cout << "Have you seen " << friend_name << " lately?" << endl;
    // Get friend's sex
    char friend_sex=0;
    prompt_delim();
    cout << "Enter an 'm' if the friend is male and an 'f' if the friend is female: " << endl;
    cin >> friend_sex;
    prompt_delim();
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    // Get receiver's age
    int age;
    prompt_delim();
    cout << "Enter the age of the recipient: " << endl;
    cin >> age;
    prompt_delim();
    if (age < 1 || age > 110)
        error("You are kidding");
    if (age < 12)
        cout << "Next year you will be " << age+1 << "." << endl;

    if (age == 17)
        cout << "Next year you will be able to vote. " << endl;
    if (age > 70)
        cout << "I hope you are enjoying retirement." << endl;

    // mail end
    cout << "Your sincerely," << endl << endl << endl;
    cout << "Jialin Wang" << endl << "Mail: choumingzhao@outlook.com" << endl;
    return 0;
}

void prompt_delim()
{
    cout << "----------------------------------------------------------\n";
}
