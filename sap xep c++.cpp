#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int a[n];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		sort(a, a + n);
		
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}
