// 04.11.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Task 1
    //int n;
    //cin >> n;
    //while (n < 10 || n > 100)
    //{
    //    cin >> n;
    //}

    //Task 3
    //int n;
    //int factorial = 1;
    //cout << "Input a number" << endl;
    //cin >> n;
    //for (int i = 1; i <= n; ++i)
    //{
    //    factorial *= i;
    //}
    //cout << factorial << endl;

    //DONT NEED  
    //cout << "Enter a number" << endl;
    //cin >> number;
    //firstN = number / 100;
    //secondN = number / 10 % 10;
    //threeN = number % 100 % 10;
    //cout << firstN << " " << secondN << " " << threeN << endl;
    //
    //
    //
    //DONT NEED


    //Task 4
    int firstN, secondN, threeN;
    for (int i = 100; i <= 999; ++i)
    {
        firstN = i / 100;
        secondN = i / 10 % 10;
        threeN = i % 100 % 10;
        if ((firstN != secondN && firstN != threeN) && (secondN != firstN && secondN != threeN) && (threeN != firstN && threeN != secondN))
        {
            cout << i << " " << endl;
        }
    }



    //Task 5
    //int firstN, secondN, thirdN;
    //for (int i = 100; i <= 999; ++i)
    //{
    //    firstN = i / 100;
    //    secondN = i / 10 % 10;
    //    thirdN = i % 100 % 10;
    //    if (firstN == 0 || secondN == 0 || thirdN == 0)
    //    {
    //        continue;
    //    }
    //    else
    //    {
    //        if (i % (firstN * secondN * thirdN) == 0)
    //        {
    //            cout << i << " " << endl;
    //        }
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
