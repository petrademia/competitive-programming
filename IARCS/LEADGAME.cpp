#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, score1, score2, res, winner;
	int tot1 = 0, tot2 = 0;
	int max = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> score1 >> score2;
		tot1 += score1;
		tot2 += score2;
		res = abs(tot1-tot2);
		if(res > max) {
			max = res;
			winner = tot1 > tot2 ? 1 : 2;
		}
	}
	cout << winner << " " << max << endl;
}
