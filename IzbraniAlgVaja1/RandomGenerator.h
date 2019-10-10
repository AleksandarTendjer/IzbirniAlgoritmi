#include <math.h>
#pragma once
class RandomGenerator
{
private:
	long a;//= long (pow(2, 31))-1;//jedan bit je rezervisan za neativnu vrednost(32 bit )
	long b;//= 69069;
	long long Ro;//=0;
	long long m; //=1;
public:

	RandomGenerator();
	//setters
	void setA(long a);
	void setB(long b);
	void setRo(long long  Ro);
	void setM(long long  m);
	//getters
	long getA();
	long getB();
	long long  getRo();
	long long  getM();

	long long  LCG();
	long long  Random(long long a, long b );
	//destructor
	~RandomGenerator();
};

