#include<iostream>
#define min 0.01
using namespace std;




double Getlength(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y1 - y1, 2));
}



void Damage()
{
	double R, x1, y1, x2, y2, x3, y3, x0, y0;
	cin >> R >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x0 >> y0;
	int count = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (abs(Getlength(x1, y1, x0, y0) - R) < min)
		{
			count++;
		}
		if (abs(Getlength(x2, y2, x0, y0) - R) < min)
		{
			count++;
		}
		if (abs(Getlength(x3, y3, x0, y0) - R) < min)
		{
			count++;
		}
	}
	cout << count << "x";
}



int main()
{
	Damage();
	return 0;
}