#include <bits/stdc++.h>
using namespace std;

char c[10000][10000];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		for(int i = 1; i <= n; i++)
		{
			cin >> (c[i] + 1);
		}
		int count = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1, total = 1; j <= m; j = total)
			{
				if(c[i][j] != '#' || c[i - 1][j] == '#')
				{
					total++;
				}
				else
				{
					while(c[i][total] == '#'&& c[i - 1][total]!='#')
					{
						total++;
					}
				}
				count = max(count, total - j);
			}
		}
		cout << count <<endl;
	}
}