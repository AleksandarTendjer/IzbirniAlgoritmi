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
	double duration;
	PrimeRandomNumberGenerator PrimeGenerator;
	std::clock_t start;
	
	cout << "Choose an option: \n\r 1)SuperDuper Generator \n\r 2) Naive \n\r 3) Miler-Rabin \n\r";
	cin >>userInput ;


	switch (userInput)
	{
	
	case(1):
	
		p=Random.LCG();
		cout <<"Resitva je :"<< p;
		break; 
	case(2):
		cout << "-------Naive Generator-----\r\n";

		cout<<PrimeGenerator.Naive()<<"\r\n";

		cout << "-------Naive Tester-----\r\n";
			  //ispitati za 19 i izmeriti vreme
			  cout << "Enter a number:\r\n";
			  cin >> p;
			  start = std::clock();
			  cout << " \n\r " << p << " is: " << (PrimeGenerator.NaiveTest(p) ? "a prime number\r\n" : "not a prime number \r\n");
			  duration = (double)(std::clock() - (double)start) / (double)CLOCKS_PER_SEC;
			  cout << duration;//duration of fnction
			  /*while (*(result+i)<61169)
			{
				cout << " \n\r" << *(result+i);
				i++;
			}*/
			break;
	case(3):

		cout << "-------MilerRabin Generator-----\r\n";
		cout<<PrimeGenerator.MilerRabin()<<"\r\n";

		//ispitati za 19 i zimeriti vreme
		cout << "-------MilerRabin Tester-------\r\n";
		cout << "Enter a number: \r\n";
		cin >> p;
		start = std::clock();
		cout << " \n\r "<<p<<" is: "<< (PrimeGenerator.MilerRabinTest(p,3)?"a prime number\r\n":"not a prime number \r\n");
		duration = (double)(std::clock() - (double)start) / (double)CLOCKS_PER_SEC;
		cout << duration;//duration of function
		
		break;
	default:
		cout << "Pogrešna izbira!\r\n";
		break;
	}


	return 0;
}