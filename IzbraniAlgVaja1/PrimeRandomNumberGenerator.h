#pragma once
#include "RandomGenerator.h"
class PrimeRandomNumberGenerator :RandomGenerator
{
public:
	PrimeRandomNumberGenerator();
	~PrimeRandomNumberGenerator();
	long long Naive(int numOfBits);
	bool NaiveTest(long long num);
	bool isPrime(long long num);
	bool MilerRabinTest(long long  p, long s);
	long MilerRabin(int numOfBits);
	long long  ModularExponention(long long  number, long powNumber, int  modulus);
	int TransformIntoNumber(int numOfBits);
};