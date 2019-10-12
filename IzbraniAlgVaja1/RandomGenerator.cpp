#include "RandomGenerator.h"



long RandomGenerator::getA()
{
	return a;
}
long RandomGenerator::getB()
{
	return b;
}
long long  RandomGenerator::getRo() {
	return Ro;
}
long long RandomGenerator::getM() {
	return m;
}
void  RandomGenerator::setB(long b) {
	RandomGenerator::b = b;
}
void  RandomGenerator::setRo(long long  Ro) {
	RandomGenerator::Ro = Ro;
}
void  RandomGenerator::setA(long a) {
	RandomGenerator::a = a;
}
void  RandomGenerator::setM(long long  m) {
	RandomGenerator::m = m;
}
RandomGenerator::RandomGenerator()
{
	setM(pow(2, 32));
	setA(69069);
	setB(0);
	setRo(1);
	
}
long long  RandomGenerator::LCG()
{
	
	return (abs(getA()) * getRo() + getB()) % getM();
}
long long  RandomGenerator::Random(long long  a,long long b)
{
	return (a + LCG()) % (b - a + 1);
}


RandomGenerator::~RandomGenerator()
{
}
