#include <iostream>
#include <cmath>

#include "speacker.h"
#include "distributionType.h"


int main()
{
	double test = 3.2;
	int base = 10;
	int minDB = 23;
	int maxDB = 12;
	double dd = 3.3;
	char sentinel;

	speacker power;
	distributionType distribution;

	while (sentinel != 'Q' )
	{
		int choise;
		std::cout << "Enter 1 to meter speaker power\n";
		std::cout << "Enter 2 to meter weighted Decibel\n";
		std::cout << "Enter choise, or to quite press Q: ";
		std::cin >> choise;

		if(std::cin){
			
		}else{
			std::cin >> sentinel;
			break;
		}


		switch (choise)
		{
		case 1:
			power.print();
			break;
		case 2:
			distribution.getDist(test, base, maxDB, minDB, dd);
			break;
		default:
			std::cout << "invalid input\n";
			break;
		}
	};

	return 0;
};