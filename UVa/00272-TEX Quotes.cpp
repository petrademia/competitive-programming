#include<bits/stdc++.h>
using namespace std;

int main(){
	
	bool clock = true;
	
	char story[10005];
	while(gets(story)){
		for(int i = 0; i < strlen(story); i++){
			if(story[i] == '"'){
				if(clock){
					printf("``");	
				}else{
					printf("''");
				}
				clock = !clock;
			}else{
				printf("%c", story[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

