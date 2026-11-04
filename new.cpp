// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// #include <iostream>
// // #define PI 3.14
// using namespace std;
// int main() {
//     int age=20;
//     // cout << "Value of PI: " << PI << endl;
//     cout << " Your Age is: " << age << endl;
//     return 0;
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned int a= 19;
//     int age= 19;
//     float height = 5.12f;
//     double fee = 14.005656;
//     char grade = 'A';
//     bool Isstudent = true;
//     string name = "Ali HAssan";
//     int marks_total=882;
//     cout << "Unsigned Integer: " << a << endl;
//     cout << "Age: " << age << endl;
//     cout << "Height: " << height << endl;
//     cout << "Fee: " << fee << endl;
//     cout << "Grade: " << grade << endl;
//     cout << "Is Student: " << Isstudent << endl;
//     cout << "Name: " << name << endl;
//     cout << "Total Marks: " << marks_total << endl;
//     cout << "Size of age: " << sizeof(age) << " bytes" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "You entered: " << age << endl;
//     return 0;
// } 

#include <iostream>
using namespace std;
int main()
{
    int a=5,b=200;
    float percentage= a*100.0/b;  // correct way to calculate percentage
    auto wrong_percentage= a/b*100;   // wrong way to calculate percentage
    cout << " Right Percentage: " << percentage << "%" << endl;
    cout << " Wrong Percentage : " << wrong_percentage << "%" << endl;
    return 0;

    
}







