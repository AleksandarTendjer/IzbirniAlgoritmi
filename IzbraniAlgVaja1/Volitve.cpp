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

	RandomGenerator Random;
	long p = Random.LCG();
	long* result;
	PrimeRandomNumberGenerator PrimeGenerator;
	switch (userInput)
	{
	
	case(1):
	
		a=Random.LCG();
		//a = Random.Random();
		cout <<"Resitva je :"<< a;
		break; 
	case(2):
		 
			 result= PrimeGenerator.Naive();
			while (result)
			{
				cout << " \n\r" << *result;
				result++;
			}
			break;
	case(3):
		
		p = 13;
		cout << " \n\r 13 " << PrimeGenerator.MilerRabin(p, 3);
		p = 17;
		cout << " \n\r 17 " << PrimeGenerator.MilerRabin(p, 3);
		p = 31;
		cout << " \n\r 37 " << PrimeGenerator.MilerRabin(p, 3);
		p = 234131;
		cout << " \n\r 234131 " << PrimeGenerator.MilerRabin(p, 3);
		p = 99991;
		cout << " \n\r 99991 " << PrimeGenerator.MilerRabin(p, 3);
		
		break;
	default:
		cout << "Pogrešna izbira!\r\n";
		break;
	}


	return 0;
}