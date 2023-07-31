#include<iostream>

using namespace std;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int m = -1;
	for (int i = 0; i * a <= n; i++) {
		for (int j = 0; j * b <= (n - i * a); j++) {
			int ans = n - i * a - j * b;
			if (ans % c == 0) m = max(m, i + j + (ans / c));
		}
	}

	cout << m;
}
