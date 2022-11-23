// 11.11.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double biggerN(double firstN, double secondN)
{
	if (firstN == secondN)
	{
		return firstN;
	}
	return (firstN < secondN) ? secondN : firstN;
}

bool isPrime(int number)
{
	if (number == 0 || number == 1)
	{
		return true;
	}
	for (int i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			return false;
			break;
		}
	}
}

void printPrimeNumbers(int n)
{
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i))
		{
			cout << i << " " << endl;
		}
	}
}

int reverseNumber(int number)
{
	int reverseNumber = 0;
	while (number != 0)
	{
		/*reverseNumber += number % 10;*/
		reverseNumber = (reverseNumber * 10) + number % 10;
		number /= 10;
	}
	return reverseNumber;
}

bool isPallindrom(int number)
{
	return (number == reverseNumber(number)) ? true : false;
}

void printAllPallindroms(int number)
{
	for (int i = 0; i < number; ++i)
	{
		if (isPrime(i) && isPallindrom(i) && i > 10)
		{
			cout << i << " " << endl;
		}
	}
}

bool isPowerOfTwo(int number)
{
	return number % 2 == 0 ? true : false;
}

int powerNumber(int number, int power)
{
	int result = 1;
	for (int i = 1; i <= power; ++i)
	{
		result *= number;
	}
	return result;
}

bool isPower(int firstN, int secondN)
{
	return secondN == powerNumber(firstN, secondN) ? true : false;
}



int main()
{
	cout << powerNumber(2, 2) << endl;
	cout << isPower(2,4) << endl;
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
