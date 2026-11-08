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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=5,b=200;
//     float percentage= a*100.0/b;  // correct way to calculate percentage
//     auto wrong_percentage= a/b*100;   // wrong way to calculate percentage
//     cout << " Right Percentage: " << percentage << "%" << endl;
//     cout << " Wrong Percentage : " << wrong_percentage << "%" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float Eng,Math,Obt;
//     float percentage=0;
//     auto total= 200;

//     // cout << "Enter marks of English: ";
//     // cin >> Eng;
//     // cout << "Enter marks of Math: ";
//     // cin >> Math;

//     cout << "Enter marks of English and Math: ";
//     cin >> Eng >> Math;
//     Obt = Eng + Math;
//     percentage = Obt * 100.0 / total;
//     cout << "Total Marks Obtained: " << Obt << endl;
//     cout << "Percentage: " << percentage << "%" << endl;
//     return 0;
// }

// Arthematic operators (Increment and Decrement operators)


// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5, b = 10;
//     cout << "Initial value of a: " << a << endl;
//     cout << "Initial value of b: " << b << endl;

//     // Increment operators
//     cout << "Using pre-increment operator (++a): " << ++a << endl; // a becomes 6
//     cout << "Using post-increment operator (b++): " << b++ << endl; // prints 10, then b becomes 11

//     // Decrement operators
//     cout << "Using pre-decrement operator (--a): " << --a << endl; // a becomes 5
//     cout << "Using post-decrement operator (b--): " << b-- << endl; // prints 11, then b becomes 10

//     cout << "Final value of a: " << a << endl;
//     cout << "Final value of b: " << b << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string name;
//     cout << "Enter your name : " << endl;
//     getline(cin, name); // Use getline to read the full name including spaces
//     cout << "Your name is : " << name << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout << "Enter 2 numbers : " << endl;
//     cin >> a >> b;
//     if (a>=10 || b<=15 )
//     {
//         cout << "Great" << endl;
//     }
//     else 
//     {
//         cout << "Ahnn" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     bool isStudent = true;
//     cout << boolalpha; // Enable boolean output as true/false
//     cout << "Is the person a student? " << isStudent << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a and b: ";
//     cin >> a >> b;
//     int greater = (a > b) ? a : b; 
//     cout << "The greater number is: " << greater << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int time;
//     cout << "Enter the time (in 24-hour format): ";
//     cin >> time;
//     string message = (time < 20) ? "Good Morning" : (time < 18) ? "Good Afternoon" : "Good Evening";
//     cout << message << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     bool isCitizen;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "Are you a citizen? (1 for Yes, 0 for No): ";
//     cin >> isCitizen;
//     if (age >= 18)
//     {
//         if (isCitizen)
//         {
//             cout << "You are eligible to vote." << endl;
//         }
//         else
//         {
//             cout << "You must be a citizen to vote." << endl;
//         }
//     }
//     else
//     {
//         cout << "You must be at least 18 years old to vote." << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
int day;
cout << "Enter a number (1-7) to represent the day of the week: " ;
cin >> day;
switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;


}
return 0;
}