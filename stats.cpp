#include "stats.h"
#include <iostream>
#include <cmath>

//method definitions 

using namespace std;

	float stats::calculateMean() //method to calculate mean
		{
			return (data1 + data2 + data3 + data4) / 4.0;
		}

	float stats::sqrt_val()
		{
			return 0.0;
		}

	float stats::intSqrd()
		{
			return ((data1 - calculateMean()) * (data1 - calculateMean())) + ((data2 - calculateMean()) * (data2 - calculateMean())) + ((data3 - calculateMean()) * (data3 - calculateMean())) + ((data4 - calculateMean())) * ((data4 - calculateMean()));
		}

	float stats::intSqrdDiv()
		{
			return intSqrd() / 4.0;
		}

	float stats::standardDeviation() //method to calculate standard deviation
		{	
			float variance = intSqrdDiv();
			return sqrt(variance);
		}


