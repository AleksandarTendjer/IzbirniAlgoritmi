#include "PrimeRandomNumberGenerator.h"
#define MAX 80000


PrimeRandomNumberGenerator::PrimeRandomNumberGenerator() :RandomGenerator() 
{
	PrimeRandomNumberGenerator::setA(69069);
	PrimeRandomNumberGenerator::setB(0);
	PrimeRandomNumberGenerator::setM(pow(2,32));
	PrimeRandomNumberGenerator::setRo(1);
}


long long  PrimeRandomNumberGenerator::Naive(int numOfBits)
{
	int num;
	num = TransformIntoNumber(numOfBits);
	int r = Random(0, num);
	if (r % 2 == 0)
		r += 1;
	while (!NaiveTest(r))
	{
		r += 2;
	}
	return r;
}
int  PrimeRandomNumberGenerator::TransformIntoNumber(int numOfBits)
{
	int res=0;
	int i = 0;
	while (i < numOfBits)
	{
		res += pow(2, i);
		i++;
	}
	return res;
}
bool PrimeRandomNumberGenerator::NaiveTest(long long p)
{
		int j,k=1;
		long double q;
	j = 3;
		q = sqrt(p);
		
			while (p % j != 0 && j <= q)
			{
				j += 2;
			}
			if (j > q)
				return true;
			
				return false;
			
	}

long PrimeRandomNumberGenerator::MilerRabin(int numOfBits)
{
	long  s = 3;
	long long r, num;
	if (numOfBits >= 32)
		return 0;

	num = TransformIntoNumber(numOfBits);
	 r = Random(0,num );

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
		x = ModularExponention(a, d, p);   
		if (x != 1) {
			for (int j = 0; j <= k - 1; j++)
			{
				if (x == p - 1)
					break;
				x = ModularExponention(x, 2, p);
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
