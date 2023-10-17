/* Mia Koppen
3rd semester, 1st year
Due: October 16th
Lab #3
reading input from a file (integers) 
and finding the mean and standard deviation
*/
#include <iostream> //to use input/output
#include <fstream> //to read and write files
#include "stats.h"
#include <cmath>

using namespace std;

int main()
{
	stats myStats;

		ifstream myFile;  //declaring myFile a variable of fstream
		int data1, data2, data3, data4; //declaring the values before opening the file
		myFile.open("inMeanStd.dat");  //opened the file

		myFile >> myStats.data1 >> myStats.data2 >> myStats.data3 >> myStats.data4; //using " . " to access the integers within the class, inputting the integers from the text file

		ofstream myOtherFile;
		myOtherFile.open("outMeanStd.dat");


		myOtherFile << "the mean is: " << " " << myStats.calculateMean() << endl; //calling the function

		myOtherFile << "the standard deviation is: " << " " << myStats.standardDeviation() << endl; //calling the function

		myOtherFile << myStats.data1 << ',' << myStats.data2 << "," << myStats.data3 << "," << myStats.data4; //outputs the integers to the output file

			
		if (myOtherFile.is_open()) 
			{

				cout << "the output file opened successfully" << endl; //if the file opened successfully, outputs this
			}


		if (myFile.is_open())
			{
				cout << "the input file opened successfully" << endl; //if the file opened successfuly, outputs this
			}

			{
				myOtherFile.close(); //closes the file
				myFile.close(); //closes the file
				return 0;
			
			}

		}
	

