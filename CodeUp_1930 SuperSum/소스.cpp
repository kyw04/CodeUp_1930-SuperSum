#include <iostream>
using namespace std;

int memo[15][15];
int super_sum(int k, int n)
{
	if (memo[k][n])
		return memo[k][n];
	if (k == 0)
		return n;
	for (int i = 1; i <= n; i++)
		memo[k][n] += super_sum(k - 1, i);

	return memo[k][n];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int k, n;
	while (cin >> k >> n)
		cout << super_sum(k, n) << '\n';

	return 0;
}