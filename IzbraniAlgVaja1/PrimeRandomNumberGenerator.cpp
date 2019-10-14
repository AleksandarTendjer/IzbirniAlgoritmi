#include "PrimeRandomNumberGenerator.h"
#define MAX 80000


PrimeRandomNumberGenerator::PrimeRandomNumberGenerator() :RandomGenerator() 
{
	PrimeRandomNumberGenerator::setA(69069);
	PrimeRandomNumberGenerator::setB(0);
	PrimeRandomNumberGenerator::setM(pow(2,32));
	PrimeRandomNumberGenerator::setRo(1);
}

//long long* PrimeRandomNumberGenerator::Naive()
//{
//	long long    p = Random(69069, 0);
//	bool found = false;
//	long q;
//	long long* result = new  long long[MAX];
//	result[0] = p;
//	int j,k=1;
//	if (p % 2 == 0)
//		p +=  1;
//	j = 3;
//	while (k<MAX)
//	{
//		found = false;
//		q = sqrt(p);
//		while (found != true)
//		{
//			while (p % j != 0 && j <= q)//p%j==0 kdaj nema ostateka
//			{
//				j += 2;
//			}
//			if (j > q)
//			{
//				found = isPrime(p);
//				if (found)
//				{
//					result[k] = p;
//					k++;
//				}
//				else
//				{
//					p += 2;
//				}
//			}
//			else
//			{
//				p += 2;
//			}
//		}
//		p += 2;
//	}
//	return result;
//}
long long  PrimeRandomNumberGenerator::Naive()
{
	long long r = LCG();
	if (r % 2 == 0)
		r += 1;
	while (!NaiveTest(r))
	{
		r += 2;
	}
	return r;
}
bool PrimeRandomNumberGenerator::NaiveTest(long long p)
{
		int j,k=1;
		long double q;
	j = 3;
		q = sqrt(p);
		
			while (p % j != 0 && j <= q)//p%j==0 kdaj nema ostateka
			{
				j += 2;
			}
			if (j > q)
				return true;
			
				return false;
			
	}


bool PrimeRandomNumberGenerator::isPrime(long long num)
{
	if (num == 1)
		return false;

	if (num == 2)
		return true;

	if (num % 2 == 0)
		return false;
	for (int d = 3; d <= (int)sqrt(num); d++)
		if (num % d == 0)
			return false;

	return true;
}
long PrimeRandomNumberGenerator::MilerRabin()
{
	long  s = 3;
	long long r = LCG();
	if (r % 2 == 0)
		r += 1;
	while (!MilerRabinTest(r, s))
		if (r % 2 == 0)
		{
			r += 1;
		}
		else
		{
			r += 2;
		}
	return r;
}
bool PrimeRandomNumberGenerator::MilerRabinTest(long long  p, long  s)
{
	long long  d ,a,x;
			long k;
	if (p <= 3)
		return true;
	if (p % 2 == 0)
		return false;
	//resolving the equalition
	d = p - 1;
	k = 0;
	while (d % 2 == 0)
	{
		d /= 2;
		k += 1;
	}
	
	for (int i = 0; i <= s; i++)
	{
		a = Random(2, p - 2);
		x = ModularExponention(a, d, p); //((long long)pow(a,d)) % p;//zameniti  
		if (x != 1) {
			for (int j = 0; j <= k - 1; j++)
			{
				if (x == p - 1)
					break;
				x = ((long long)pow(x, 2)) % p;
			}
			if (x != p - 1)
				return false;
		}
	}
	return true;
}
long long PrimeRandomNumberGenerator::  ModularExponention(long long  number, long power, int  modulus)
{
	
	long long res = 1;
	number = number % modulus;
	while (power > 0)
	{
		if (power & 1)
			res = (res * number) % modulus;

		power = power >> 1;
		number = (number * number) % modulus;
	}
	return res;
}
PrimeRandomNumberGenerator::~PrimeRandomNumberGenerator()
{
}
