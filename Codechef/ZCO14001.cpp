#include<bits/stdc++.h>
using namespace std;

int main(){
	int boxLength, maxHeight, command;
	cin >> boxLength >> maxHeight;
	int box[boxLength+5];
	for(int i = 0; i < boxLength; i++){
		cin >> box[i];
	}
	int current = 0;
	int pickedSomething = 0;
	while(1){
		scanf("%d", &command);
		if(command == 0) break;
		if(command == 3){
			if(box[current]>0 && pickedSomething == 0){
				box[current]--;
				pickedSomething = 1;	
			}
		}else if (command == 4 && pickedSomething == 1){
			if(box[current]<maxHeight){
				box[current]++;	
				pickedSomething = 0;
			}
		}else if (command == 2 && current < boxLength-1){
			current++;
		}else if (command == 1 && current > 0){
			current--;
		}
	}
	for(int i = 0; i < boxLength; i++){
		cout << box[i];
		if( i == boxLength-1){
			cout << endl;
		}else{
			cout << " ";
		}
	}
	return 0;
}
