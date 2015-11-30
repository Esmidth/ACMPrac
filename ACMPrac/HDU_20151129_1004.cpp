#include <cstdio>
#include <algorithm>

using namespace std;

bool b[11111];
int v[11111];
int m;

int main()
{
	for (int i = 2; i < 11111; i++)
		if (!b[i])
			for (int j = i + i; j < 11111; j += i)
				b[j] = true;
	m = 0;
	for (int i = 2; i < 11111; i++)
		if (!b[i])
			v[m++] = i * i;
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int k;
		scanf("%d", &k);
		int p = lower_bound(&v[0], &v[m], k) - &v[0];
		int a = v[p];
		int b = v[p + 1];
		if (p > 0)
		{
			int c = v[p - 1];
			printf("%d\n", abs((abs(b - k) > abs(k - c) ? c : b) - k) < abs(k - a) ? (abs(b - k) > abs(k - c) ? c : b) : a);
		}
		else
			printf("%d\n", b - k > k - a ? a : b);
	}
}
