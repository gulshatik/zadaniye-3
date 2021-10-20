#include <iostream>
using namespace std;

void prostiye_mnozh(int n)
{
	int mnozh = 2;
	while (n % mnozh != 0) {
		mnozh++;
	}
	cout << mnozh << " ";
	prostiye_mnozh(n / mnozh);
	return;
}

int main()
{
	int N;cin >> N;
	prostiye_mnozh(N);
	return 0;
}