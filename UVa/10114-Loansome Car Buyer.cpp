#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int loanDuration, depreciationRecord, monthAt, clock = 0;
	double downPayment, loanAmount, amount, depreciationMonth[105];
	while(scanf("%d %lf %lf %d", &loanDuration, &downPayment, &loanAmount, &depreciationRecord), loanDuration > 0){
		while(depreciationRecord--){
			scanf("%d %lf", &monthAt, &amount);
			for(int i = monthAt; i < loanDuration; i++){
				depreciationMonth[i] = amount;
			}
		}
		double carPrice = downPayment + loanAmount;
		double monthlyPayment = loanAmount / (double) loanDuration;
		for(int i = 0; i < loanDuration; i++){
			carPrice = carPrice - carPrice * depreciationMonth[i];
			if(carPrice > loanAmount){
				clock = 1;
				int monthLarger = i;
				if(monthLarger != 1) {
					cout << monthLarger << " months" << endl;
				}else{
					cout << monthLarger << " month" << endl;
				}
				break;
			}
			loanAmount = loanAmount - monthlyPayment;
			
		}
		if(clock == 0){
			int monthLarger = loanDuration;
				if(monthLarger != 1) {
					cout << monthLarger << " months" << endl;
				}else{
					cout << monthLarger << " month" << endl;
				}
		}
		clock = 0;
	}
	
}

