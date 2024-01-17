#include <iostream>
#include <cmath>

class speacker
{
public:
	void setFormula(double PI, int r);
	double getArea(double area)const;
	double getLog(double base, int W)const;
	void print() const;

	speacker(double, int);
	speacker();
	~speacker();
private:
	double pi;
	int radius;

};

speacker::speacker(double sPi, int sRadius)
{
	pi = sPi;
	radius = sRadius;

	return;
};

speacker::speacker()
{
	pi = M_PI_4;
	radius = 1;

	return;
}

speacker::~speacker()
{
}

void speacker::setFormula(double PI, int r)
{
	PI = M_PI_4;
	r = 1;

	return;
};

double speacker::getArea(double area)const
{
	double PI = M_PI_4;
	int r;
	


	std::cout << "Enter radius: ";
	std::cin >> r;
	std::cout << "\n";

	int R = r * r;

	area = PI * R;

	std::cout << "Area: " << area << "\n";

	return area;
};

double speacker::getLog(double base, int W)const
{
	std::cout << "Test log\n";
	std::cout << "Enter speacker watt: ";
	std::cin >> W;
	std::cout << "\n";

	base = getArea(3.33);

	double logarithm = 100 * (log(W) / log(base));

	std::cout << "DECIBEL: " << logarithm << "\n";

	return logarithm;
};

void speacker::print()const
{
	
	getLog(23.2, 22);

	return;
};