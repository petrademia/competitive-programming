#include<bits/stdc++.h>
using namespace std;

int main(){
	
	double wellHeight, climbDistance, slideDistance, fatiguePercentage, reduce;
	double currentHeight;
	int day;
	while(scanf("%lf %lf %lf %lf", &wellHeight, &climbDistance, &slideDistance, &fatiguePercentage), wellHeight > 0){
		day = 0;
		currentHeight = 0;
		reduce = climbDistance * (fatiguePercentage/100.0);
		while(true){
			day++;
			currentHeight = currentHeight + climbDistance;
			if(currentHeight > wellHeight){
				printf("success on day %d\n", day);
				break;
			}
			currentHeight = currentHeight - slideDistance;
			if(currentHeight < 0){
				printf("failure on day %d\n", day);
				break;
			}
			climbDistance = climbDistance - reduce;
			if(climbDistance < 0){
				climbDistance = 0;
			}
		}
	}
}

