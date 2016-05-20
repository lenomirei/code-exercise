#include<iostream>
using namespace std;




int MaxGY(int a, int b)
{
	int tmp;
	while (b) {
		tmp = b; b = a % b; a = tmp;
	}
	return a;
}

int LevelUp()
{
	int numofmonsters, ability;



	cin >> numofmonsters >> ability;
	int *guardofmonsters = new int[numofmonsters];

	for (int i = 0; i < numofmonsters; ++i)
	{

		cin >> guardofmonsters[i];

	}
	for (int i = 0; i < numofmonsters; ++i)
	{
		if (ability >= guardofmonsters[i])
		{
			ability += guardofmonsters[i];
		}
		else
		{
			ability += MaxGY(guardofmonsters[i], ability);
		}
	}
	return ability;

}





int main()
{
	int result = LevelUp();
	cout << result;
	return 0;
}


//#include <cstdio>
//#include <cstring>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//int gcd(int a, int b) {
//	int tmp;
//	while (b) {
//		tmp = b; b = a % b; a = tmp;
//	}
//	return a;
//}
//int main() {
//	int n, a;
//	while (scanf_s("%d%d", &n, &a) != EOF) {
//		for (int i = 0, x; i < n; ++i) {
//			scanf_s("%d", &x);
//			if (x <= a) a += x;
//			else a += gcd(x, a);
//		}
//		printf("%d\n", a);
//	}
//	return 0;
//}