#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void obliczanie_stozka() {
	double r, h;
	cout << "stozek";
	cout << " podaj r i h: ";
	cin >> r >> h;
	if (r < 0 || h < 0) {
		cout << "podales h lub r mniejsze od 0";
	}
	else {
		double v = 1.0 / 3 * M_PI * r * r * h;
		double l = sqrt(r * r + h * h);
		double p = M_PI * r * r + M_PI * r * l;
		cout << fixed << setprecision(2) << " v = " << v << ", p = " << p;
	}
}

void obliczanie_ostroslupa() {
	double a, b, H;
	cout << "ostroslup prosty o podstawie prostokata";
	cout << " podaj a, b, H: ";
	cin >> a >> b >> H;
	if (a < 0 || b < 0 || H < 0) {
		cout << "podales h lub r mniejsze od 0";
	}
	else {
		double Pp = a * b;
		double v = Pp * H;
		double d = sqrt(a * a + b * b);// przekatna podstawy
		double h = sqrt(d / 2 + H);
		double Pt1 = a / 2 * h;
		double Pt2 = b / 2 * h;
		double Pc = Pp + 2 * Pt1 + 2 * Pt2;
		cout << fixed << setprecision(2) << " v = " << v << ", p = " << Pc;
	}






}

void obliczanie_walca() {
	double r, h;
	cout << "walec";
	cout << " podaj r i h: ";
	cin >> r >> h;
	if (r < 0 || h < 0) {
		cout << "podales h lub r mniejsze od 0";
	}
	else {
		double Pp = M_PI * r * r;
		double Pb = 2 * M_PI * r * h;
		double p = 2* Pp + Pb;
		double v = M_PI * r * r * h;
		cout << fixed << setprecision(2) << " v = " << v << ", p = " << p;
	}
}




int main() {
	int wybor;

	cout << "stozek (1), walec (2), ostroslup(3): ";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		// stozek
		obliczanie_stozka();
		break;
	case 2:
		// stozek
		obliczanie_walca();
		break;
	case 3:
		// stozek
		obliczanie_ostroslupa();
		break;
	default:
		cout << "\nzla opcja";
		break;
	}







}