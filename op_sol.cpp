#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s, e;
		int l, r;
		cin >> s >> e >> l >> r;
		// create a string array that consists of days of the week
		string days[] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday"};
		int start = 0;
		int end = 0;
		for (int i = 0; i < 7; i++) {
			if (s == days[i]) {
				// get the numeral equivalent of the day(string to int)
				// for the starting day
				start = i;
			}
			if (e == days[i]) {
				// get the numeral equivalent of the day(string to int)
				// for the ending day
				end = i;
			}
		}
		// formula for getting the number of days between the start and end day
		int diff = (end - start + 1 + 7) % 7;
		int ans = -1;
		int cnt = 0;
		for (int i = 0; i < 100; i++) {
			if (diff >= l && diff <= r) {
				// if the duration is within the range
				// then increment the counter and store the new value of days
				cnt++;
				ans = diff;
			}
			// add 7 to diff to proceed to the next week
			diff += 7;
		}
		if (cnt > 1) {
			cout << "many";
		} else if (cnt == 0) {
			cout << "impossible";
		} else {
			cout << ans;
		}
		cout << '\n';
	}
	return 0; 
}
