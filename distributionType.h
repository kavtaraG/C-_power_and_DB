#ifndef DISTRIBUTIONTYPE_H
#define DISTRIBUTIONTYPE_H

#include <iostream>
#include <cmath>
#include <iomanip>

class distributionType
{
public:

	void setDist(double& freqMin, const int base, int& mnDB, int& mxDB, double& freqMax);
	void getDist(double& freqMin, const int base, int& mnDBm, int& mxDB, double& freqMax)const;
	void print()const;

	distributionType(double, int, int, int, double);
	distributionType();
	~distributionType();

private:

	int frequencyMin;
	int frequencyMax;
	int logBase;
	int minDB;
	int maxDB;

};

distributionType::distributionType(double frMin, int lB, int mindb, int maxdb, double frMax)
{
	frequencyMin = frMin;
	frequencyMax = frMax;
	logBase = lB;
	minDB = mindb;
	maxDB = maxdb;

	return;
}

distributionType::distributionType()
{
	frequencyMin = 0;
	frequencyMax = 0;
	logBase = 10;
	minDB = 0;
	maxDB = 0;

	return;
}

distributionType::~distributionType()
{
}

void distributionType::setDist(double& freqMin, const int base, int& mnDB, int& mxDB, double& freqMax)
{
	frequencyMin = freqMin;
	frequencyMax = freqMax;
	logBase = base;
	minDB = mnDB;
	maxDB = mxDB;

	return;
};

void distributionType::getDist( double& freqMin, const int base, int& mnDB, int& mxDB, double& freqMax)const
{
	//int base;
	std::cout << "Enter frequcncy of miniman DB: ";
	std::cin >> freqMin;
	std::cout << "\n";

	std::cout << "Enter minimal DB: ";
	std::cin >> mnDB;
	std::cout << "\n";

	std::cout << "Enter frequency of maximal DB: ";
	std::cin >> freqMax;
	std::cout <<"\n";

	std::cout << "Enter maximal DB: ";
	std::cin >> mxDB;
	std::cout << "\n";



	double test = (((base / freqMin) * mnDB) + ((base / freqMax) * mxDB)) / 2;

	//binominal module
	{
		double binom = pow(mnDB, test) * pow(mxDB, (1-test));

		std::cout << std::right << std::setw(15) << "binomiman probability of DB: " << binom << "\n";
	};

	return;
};


#endif // !DISTRIBUTIONTYPE_H