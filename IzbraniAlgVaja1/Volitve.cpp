#include<stdio.h>
#include <iostream>
#include "RandomGenerator.h"
#include "PrimeRandomNumberGenerator.h"
#include "Naivna.h"
using namespace std;


int main()
{
	//RandomGenerator* Random = new RandomGenerator();
	int userInput;
	cout << "Izbira opcija: \n\r 1)SuperDuper Generator \n\r 2) Naivna \n\r 3) Miler-Rabin \n\r";
	cin >>userInput ;
	long a;
	int i = 0;
	RandomGenerator Random;
	long p = Random.LCG();
	long long * result;
	PrimeRandomNumberGenerator PrimeGenerator;
	switch (userInput)
	{
	
	case(1):
	
		a=Random.LCG();
		cout <<"Resitva je :"<< a;
		break; 
	case(2):
		cout << "-------Naive Generator-----\r\n";
			  cout<<PrimeGenerator.Naive()<<"\r\n";
			  cout << "-------Naive Tester-----\r\n";
			  //ispitati za 19 i izmeriti vreme
			  cout << "Enter a number:\r\n";
			  cin >> p;
			  cout << " \n\r " << p << " is: " << (PrimeGenerator.NaiveTest(p) ? "a prime number\r\n" : "not a prime number \r\n");
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
		cout << " \n\r "<<p<<" is: "<< (PrimeGenerator.MilerRabinTest(p,3)?"a prime number\r\n":"not a prime number \r\n");
		
		
		break;
	default:
		cout << "Pogrešna izbira!\r\n";
		break;
	}


	return 0;
}