#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int testCase;
	cin >> testCase;
	int bracket[testCase];
	int currentStatus = 0, maxStatus = -1, totalOpened = 0, maxOpened = -1, maxStatusAt, maxOpenedAt;
	for(int i = 0; i < testCase; i++){
		cin >> bracket[i];
	}
	for(int i = 0; i < testCase; i++){
		if(bracket[i] == 1){
			currentStatus++;
			if(currentStatus > maxStatus){
				maxStatus = currentStatus;
				maxStatusAt = i+1;
			}
			totalOpened++;
			
		}else if(bracket[i] == 2){
			currentStatus--;
			if(currentStatus == 0){
				if(totalOpened > maxOpened){
					maxOpened = totalOpened;
					maxOpenedAt = i;	
				}
				totalOpened = 0;
			}
		}
	}
	
	cout << maxStatus << " " << maxStatusAt << " " << maxOpened * 2 << " " << maxOpenedAt+1-((maxOpened*2)-1) << endl;
	
	return 0;
}
