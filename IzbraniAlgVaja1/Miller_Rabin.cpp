#include<stdio.h>
#include<math.h>
#include<string>
#include <iostream>

#include "Miler_Rabin.h"
#include "LCG.h"


bool Miller_Rabin(int p, int s)
{
	if (p <= 3)
	{
		return true;
	}
	else if (p % 2 == 0)
	{
		return true;
	}
	

	return true;
}