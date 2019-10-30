#include<iostream>
#include<cmath>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100000], b[100000], c[100000], d[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];

	}
	for (int i = 0; i < n; i++)
	{
		int diff = abs(a[i] - b[i]);
		if (diff > 1)
		{
			c[i] = diff;
		}
		else
			d[i] = diff;
	}
	int e = *max_element(c, c + c.size());
	int f = *max_element(d, d + d.size());
	if (e > f)
	{
		cout << "1" << e;
	}
	else
		cout << "2" << f;
	return 0;

}