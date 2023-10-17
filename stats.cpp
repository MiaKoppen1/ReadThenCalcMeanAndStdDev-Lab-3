#include "stats.h"
#include <iostream>
#include <cmath>

//method definitions 

using namespace std;

	double stats::calculateMean() //method to calculate mean
		{
			return (data1 + data2 + data3 + data4) / 4.0;
		}

	double stats::sqrt_val()
		{
			return 0.0;
		}

	double stats::intSqrd()
		{
			return ((data1 - calculateMean()) * (data1 - calculateMean())) + ((data2 - calculateMean()) * (data2 - calculateMean())) + ((data3 - calculateMean()) * (data3 - calculateMean())) + ((data4 - calculateMean())) * ((data4 - calculateMean()));
		}

	double stats::intSqrdDiv()
		{
			return intSqrd() / 4.0;
		}

	double stats::standardDeviation() //method to calculate standard deviation
		{	
			double variance = intSqrdDiv();
			return sqrt(variance);
		}


