#ifndef STATS_H
#define STATS_H
#include <cmath>

using namespace std;


//creating my statistics class
class stats 
	{
		public: //to make sure the methods are avaliable to use outside of the class

		//variable declarations

			int data1, data2, data3, data4;

			//method declarations

			double intSqrdDiv();

			double standardDeviation();
	
			double calculateMean();

			double sqrt_val();

			double intSqrd();

		};

#endif // STATS_H