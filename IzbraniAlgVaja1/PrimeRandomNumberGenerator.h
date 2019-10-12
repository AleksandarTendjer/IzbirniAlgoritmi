#pragma once
#include "RandomGenerator.h"
class PrimeRandomNumberGenerator :RandomGenerator
{
public:
	PrimeRandomNumberGenerator();
	~PrimeRandomNumberGenerator();
	long* Naive();
	bool isPrime(long long num);
	bool MilerRabin(long long  p, long s);
	long long  Modular_Expression(long long  a, long b, int  n);
};