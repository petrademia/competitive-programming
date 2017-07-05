#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	scanf("%d", &tc);
	int a, b;
	while(tc--){
		cin >> a >> b;
		if(a > b) {
			printf(">");
		}else if (a < b) {
			printf("<");
		}else{
			printf("=");
		}
		printf("\n");
	}
}

