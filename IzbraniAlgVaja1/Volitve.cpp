#include<stdio.h>
#include <iostream>
#include <ctime>
#include "RandomGenerator.h"
#include "PrimeRandomNumberGenerator.h"
#include "Naivna.h"
using namespace std;


int main()
{

	//RandomGenerator* Random = new RandomGenerator();
	int userInput;
	RandomGenerator Random;
	long  long p;
	int numOfBits;
	double duration;
	int s=0;
	PrimeRandomNumberGenerator PrimeGenerator;
	std::clock_t start;
	bool inMenu = true;
	while (inMenu)
	{
		cout << "Choose an option: \n\r 1)SuperDuper Generator \n\r 2) Naive \n\r 3) Miler-Rabin \n\r 4) Exit \n\r";
		cin >> userInput;
		switch (userInput)
		{

		case(1):

			p = Random.LCG();
			cout << "Resitva je :" << p;
			break;
		case(2):
			cout << "1)Generate with Naive \r\n 2)Test with Naive \r\n";
			cin >> userInput;
			if (userInput == 1)
			{
				cout << "-------Naive Generator-----\r\n";
				cout << "Insert number of bits: \r\n";
				cin >> numOfBits;
				start = std::clock();
				cout << PrimeGenerator.Naive(numOfBits) << "\r\n";
				duration = (double)(std::clock() - (double)start) / (double)CLOCKS_PER_SEC;
				cout <<"Time needed: "<< duration<<"\n\r";
			}
			else if (userInput == 2)
			{
				cout << "-------Naive Tester-----\r\n";
				cout << "Enter a number:\r\n";
				cin >> p;
				cout << " \n\r " << p << " is: " << (PrimeGenerator.NaiveTest(p) ? "a prime number\r\n" : "not a prime number \r\n");  
			}
			break;
		case(3):
			cout << "1)Generate Random Number with MilerRabin \r\n 2)Test if a number is prime\r\n";
			cin >> userInput;
			if (userInput == 1)
			{
				cout << "Enter number of bits: \r\n";
				cin >> numOfBits;
				
				cout << "-------MilerRabin Generator-----\r\n";
				start = std::clock();
				cout << PrimeGenerator.MilerRabin(numOfBits) << "\r\n";
				duration = (double)(std::clock() - (double)start) / (double)CLOCKS_PER_SEC;
				cout << "Time needed: " << duration<<"\n\r";
			}
			else if (userInput == 2)
			{
				cout << "-------MilerRabin Tester-------\r\n";
				cout << "Enter a number : \r\n";
				cin >> p;
				cout << "Enter precision : \r\n";
				cin >> s;
				cout << " \n\r " << p << " is: " << (PrimeGenerator.MilerRabinTest(p, s) ? "a prime number\r\n" : "not a prime number \r\n");

			}
			break;
		case(4):
			inMenu = false;
			break;
		default:
			cout << "Pogrešna izbira!\r\n";
			break;
		}

	}
	return 0;
}