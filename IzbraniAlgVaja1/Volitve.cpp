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
	cout << "Izbira opcijo: \n\r 1)SuperDuper Generator \n\r 2) Naivna \n\r 3) Miler-Rabin \n\r";
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
		
		/*p = 4;
		cout<<"\n\r dvojka  "<<PrimeGenerator.MilerRabin(p,3);
		p = 3;
		cout << " \n\r trojka " << PrimeGenerator.MilerRabin(p, 3);
		p = 7;
		cout << "\n\r 7: " << PrimeGenerator.MilerRabin(p, 3);*/
		break;
	default:
		cout << "Pogrešna izbira!\r\n";
		break;
	}


	return 0;
}