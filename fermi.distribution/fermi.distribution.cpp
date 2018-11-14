#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	float E, y, T = 0;
	float z = pow(10, -5);
	float K = 8.6173324*z;
	cout << "Input temperature (K):" << endl;
	cin >> T;
	cout << "Input E \n";
	cin >> E;
	cout << "Input chemical potential \n";
	cin >> y;
	float FermiDistribution = (1 / ((pow(2.71828182846, (E - y) / (K*T))) + 1));

	if (T == 0.0)
	{
		cout << "The Fermi distribution is 1.0";
		return 1.0;
	}
	else
	{
		cout << "The Fermi distribution is " << FermiDistribution;
	}

	double g = 9.8;
	double Pi = 3.14;
	double m;
	cout << E << endl;
	int i, j;
	double IntegralOfFermi;
	cout << "Choose value for m (MeV)" << endl;
	cin >> m;
	IntegralOfFermi = (pow((pow(E, 2) - pow(m, 2)), 3 / 2))* FermiDistribution;
	for (j = 0; j <= 9999; j++)
	{
		IntegralOfFermi;
	}
	cout << " The integral appproximation for P_i is ... " << IntegralOfFermi << endl;
	system("PAUSE");
	return 0;

}
