#include <iostream>
#include <vector>
using namespace std;
int solve_by_brute_force(vector<int> v, int cur, int limit, int sofar, int sum) {
	/*
	v:      coin values list
	cur:    the number coin of current node
	limit:  the total number of coins
	sofar:  the sum value of current node
	sum:    the sum value of total coins
	*/
	if (cur == limit) {
		//the final result after finished all the decisions
		int other = sum - sofar;

		return sofar >= other ? sofar-other : other-sofar;
		
	}
	//choose pick the current value coin
	int ans1 = solve_by_brute_force(v, cur + 1, limit, sofar + v[cur], sum);
	int ans2 = solve_by_brute_force(v, cur + 1, limit, sofar, sum);
	return (ans1 < ans2 ? ans1 : ans2);
}

int main() {
	vector<int> v(10);
	int total = 0;
	for (int i = 0; i < 10; i++) {
		v[i] = i+1;
		total += v[i];
	}

	cout << solve_by_brute_force(v, 0, 1, 0, total) << endl;
	return 0;
}
