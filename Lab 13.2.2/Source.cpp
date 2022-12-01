#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

void Audit(double sum_rad);
void Suma(double rad_A, double rad_B, double rad_C, double& sum_rad);

#define SUM(x,y,z) (x)+(y)+(z)
#define RAD(grad, PI) (grad)*((PI) / 180)
#define GRAD(rad, PI) (rad) * (180 / (PI))

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	const double PI = 4 * atan(1);
	double grad_A;
	double grad_B;
	double grad_C;
	cout << "Gradus A = "; cin >> grad_A;
	cout << "Gradus B = "; cin >> grad_B;
	cout << "Gradus C = "; cin >> grad_C;
	double rad_A;
	double rad_B;
	double rad_C;
	double sum_grad;
	double sum_rad;
	sum_grad = SUM(grad_A, grad_B, grad_C);
	if (sum_grad != 180)
	{
		cout << sum_grad << endl;
		cout << "This triangle is not correct" << endl;
	}
	else
	{
		rad_A = RAD(grad_A, PI);
		rad_B = RAD(grad_B, PI);
		rad_C = RAD(grad_C, PI);
		cout << "Radian A = " << rad_A << endl;
		cout << "Radian B = " << rad_B << endl;
		cout << "Radian C = " << rad_C << endl;
		Suma(rad_A, rad_B, rad_C, sum_rad);
		cout << "Sum of all cos of radian = " << sum_rad << endl;
		Audit(sum_rad);
	}
}
void Suma(double rad_A, double rad_B, double rad_C, double& sum_rad) {
	sum_rad = SUM(cos(rad_A), cos(rad_B), cos(rad_C));
}
void Audit(double sum_rad)
{
	if (sum_rad <= 3. / 2)
		cout << "True" << endl;
	else
		cout << "False" << endl;
}