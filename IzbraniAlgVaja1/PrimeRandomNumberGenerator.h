#pragma once
#include "RandomGenerator.h"
class PrimeRandomNumberGenerator:RandomGenerator
{
public:
	PrimeRandomNumberGenerator() ;
	~PrimeRandomNumberGenerator();
	long* Naive();
	bool isPrime(long long num);
	bool MilerRabin(long p,long s);
};

