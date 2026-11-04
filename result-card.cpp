#include <iostream>
using namespace std;
int main()
{
    int pf, ict, phy, tq, eng, obt;
    int total = 500;
    float percentage = 0;
    cout << "Enter marks for each subject by giving sequence:" << endl;
    cout << "PF: ";
    cin >> pf;
    cout << "ICT: ";
    cin >> ict;
    cout << "Physics: ";
    cin >> phy;
    cout << "TQ: ";
    cin >> tq;
    cout << "English: ";
    cin >> eng;
    obt = pf + ict + phy + tq + eng;
    percentage = obt * 100.0 / total;
    cout << "Total Marks Obtained: " << obt << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 80)
    {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 50)
    {
        cout << "Grade: C" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    return 0;
}
