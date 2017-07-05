#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc, a[3], st = 1;
	cin >> tc;
	while(tc--){
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3, greater<int>());
		printf("Case %d: %d\n", st++, a[1]);
	}
}

