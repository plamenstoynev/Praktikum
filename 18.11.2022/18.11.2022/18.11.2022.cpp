// 18.11.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const unsigned int MAX_SIZE = 100;
using namespace std;

void inptuArr(int arr[MAX_SIZE], int n)
{
	for (int i = 0; i < n && i < MAX_SIZE; ++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void printArr(int arr[MAX_SIZE], int n)
{
	for (int i = 0; i < n && i < MAX_SIZE; ++i)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

void evenNumebrs(int arr[MAX_SIZE], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
}

void evenIndex(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
}

int biggerNeighbers(int arr[], int n)
{
	int count = 0;
	for (int i = 1; i < n - 1; ++i)
	{
		//if (i == 0 && arr[i] > arr[i + 1])
		//{
		//	count += 1;
		//}
		if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
		{
			count +=1;
		}
	}
	return count;
}

int lenghtChars(char arr[])
{
	int i = 0;
	int count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

int sizeOfCharArr(char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}

//char reverseChar(char arr[])
//{
//
//	for (int i = 0; i < sizeOfCharArr(arr) / 2; ++i)
//	{
//		char temp = arr[i];
//		arr[i] = arr[sizeOfCharArr(arr) - i - 1];
//		temp = arr[sizeOfCharArr(arr) - i - 1];
//		
//	}
//} DON'T WORK

bool isPalindrom(char arr[])
{
	for (int i = 0; i < sizeOfCharArr(arr); ++i)
	{
		if (arr[i] != arr[sizeOfCharArr(arr) - i - 1])
		{
			return false;
		}
	}
	return true;
}

void multiplieAllArr(int arr[], int size, int n)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = arr[i] * n;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

void reverseArr(int arr[], int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

void bullbeSort(int arr[], int n)
{
	for (int i = 1; i < n-1; ++i)
	{
		if (arr[i] < arr[i + 1])
		{
			arr[i] = arr[i + 1];
			arr[i + 1] = arr[i];
		}
	}
}


int main()
{
	int arr[5];
	inptuArr(arr, 5);
	multiplieAllArr(arr, 5, 6);

/*	char arr[MAX_SIZE];
	cin.getline(arr, MAX_SIZE);
	cout <<boolalpha<< isPalindrom(arr) << endl;*/	
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
