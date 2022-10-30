// 21.10.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Task 1
    //int firstNum, secondNum;
    //cout << "Enter the first number" << endl;
    //cin >> firstNum;
    //cout << "Enter the second number" << endl;
    //cin >> secondNum;
    //int higherNum = (firstNum > secondNum) ? firstNum : secondNum;
    //cout << "The higher number is " << higherNum << endl;

    //Task 2
    //int month;
    //cout << "Enter a valid number of a month" << endl;
    //cin >> month;
    //string isValid = (month < 1 || month > 12) ? "Isn't Valid" : "Is valid";
    //cout << isValid << endl;

    //Task 3
    //int a, b, x;
    //cout << "Enter an a" << endl;
    //cin >> a;
    //cout << "Enter a b" << endl;
    //cin >> b;
    //cout << "Enter a x" << endl;
    //cin >> x;
    //string checkX = (x >= a && x <= b) ? "In" : "Out";
    //cout << checkX << endl;

    //Task 4
    //char symbol;
    //cout << "Enter some char" << endl;
    //cin >> symbol;
    //string check = (('A' <= symbol <= 'Z') || ('a' <= symbol <= 'z')) ? "Is num" : "Is a letter";
    //cout << check << endl;

    //Task 5
    //int a, b;
    //cout << "Enter some num" << endl;
    //cin >> a;
    //cout << "Enter some num" << endl;
    //cin >> b;
    //if (a > 0 && b > 0)
    //{
    //    cout << "Both numbers are positive" << endl;
    //}
    //else if (a > 0 && b < 0 || a < 0 && b > 0)
    //{
    //    cout << "Only one is positive" << endl;
    //}
    //else
    //{
    //    cout << "No one is positive" << endl;
    //}

    //Task 6
    //int month;
    //cout << "Enter the num of a month" << endl;
    //cin >> month;
    //switch (month) {
    //case 1:
    //    cout << "January" << endl;
    //    break;
    //case 2:
    //    cout << "February" << endl;
    //    break;
    //case 3:
    //    cout << "March" << endl;
    //    break;
    //case 4:
    //    cout << "April" << endl;
    //    break;
    //case 5:
    //    cout << "May" << endl;
    //    break;
    //case 6:
    //    cout << "June" << endl;
    //    break;
    //case 7:
    //    cout << "July" << endl;
    //    break;
    //case 8:
    //    cout << "August" << endl;
    //    break;
    //case 9:
    //    cout << "September" << endl;
    //    break;
    //case 10:
    //    cout << "Octomber" << endl;
    //    break;
    //case 11:
    //    cout << "November" << endl;
    //    break;
    //case 12:
    //    cout << "December" << endl;
    //    break;
    //default:
    //    cout << "Not valid" << endl;
    //    break;
    //}
    
    //Task 7
    //int n, m, k;
    //cin >> n;
    //cin >> m;
    //cin >> k;
    //if (k % n == 0 || k % m == 0)
    //{
    //    cout << "Yes" << endl;
    //}
    //else
    //{
    //    cout << "No" << endl;
    //}
    
    //Task 8
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    double D = (b * b) - 4 * a * c;
    if (D > 0)
    {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0)
    {
        double x1_2 = -b / (2 * a);
        cout << "The x is equale " << x1_2 << endl;
    }
    else
    {
        cout << "No solutions" << endl;
    }

    //Task 9
    //double value;
    //char currency;
    //char chageCurrency{};
    //cout << "Enter the value and a currency" << endl;
    //cin >> value;
    //cin >> currency;
    //cout << "Enter the other currency" << endl;
    //cin >> chageCurrency;
    //switch (chageCurrency)
    //{
    //case 'B':
    //    if (currency == 'E')
    //    {
    //        value = 1.95 * value;
    //        cout << value << " BGN" << endl;
    //    }
    //    else if (currency =='Y')
    //    {
    //        value = 75.28 * value;
    //        cout << value << " YEN";
    //    }
    //    break;
    //case 'E':
    //    if (currency == 'B')
    //    {
    //        value = 0.51 * value;
    //        cout << value << "BGN" << endl;
    //    }
    //}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
