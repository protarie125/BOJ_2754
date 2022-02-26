#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string g;
	cin >> g;

	auto score = double{ 0 };
	if ("F" != g) {
		if ('A' == g[0]) {
			score = 4;
		}
		else if ('B' == g[0]) {
			score = 3;
		}
		else if ('C' == g[0]) {
			score = 2;
		}
		else if ('D' == g[0]) {
			score = 1;
		}

		if ('+' == g[1]) {
			score += 0.3;
		}
		else if ('-' == g[1]) {
			score -= 0.3;
		}
	}
	cout << fixed << setprecision(1) << score;

	return 0;
}