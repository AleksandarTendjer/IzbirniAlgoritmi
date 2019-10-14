#pragma once
#include "RandomGenerator.h"
class PrimeRandomNumberGenerator :RandomGenerator
{
public:
	PrimeRandomNumberGenerator();
	~PrimeRandomNumberGenerator();
	long long Naive();
	bool NaiveTest(long long num);
	bool isPrime(long long num);
	bool MilerRabinTest(long long  p, long s);//tester
	long MilerRabin();//generator
	long long  ModularExponention(long long  number, long powNumber, int  modulus);
};