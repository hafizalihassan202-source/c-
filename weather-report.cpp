#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    if (temp >= 30)
    {
        cout << "It's a hot day." << endl;
    }
    else if (temp >= 20)
    {
        cout << "It's a warm day." << endl;
    }
    else if (temp >= 10)
    {
        cout << "It's a cool day." << endl;
    }
    else
    {
        cout << "It's a cold day." << endl;
    }
    return 0;
}