#include <iostream>
#include <map>
#include <string>

using namespace std;

using mci = map<char, int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto check = mci{};

	int n;
	cin >> n;

	auto isPredaja = bool{ true };
	while (0 < (n--)) {
		string x;
		cin >> x;

		check[x[0]] += 1;
		if (5 == check[x[0]]) {
			isPredaja = false;
		}
	}

	if (isPredaja) {
		cout << "PREDAJA";
	}
	else {
		for (const auto& [k, v] : check) {
			if (5 <= v) {
				cout << k;
			}
		}
	}

	return 0;
}