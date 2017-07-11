#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> mp;
	int firstNumber, secondNumber, thirdNumber, data;
	cin >> firstNumber >> secondNumber >> thirdNumber;
	for(int i = 0; i < firstNumber; i++){
		cin >> data;
		mp[data]++;
	}
	for(int i = 0; i < secondNumber; i++){
		cin >> data;
		mp[data]++;
	}
	for(int i = 0; i < thirdNumber; i++){
		cin >> data;
		mp[data]++;
	}
//	for(auto it = mp.begin(); it != mp.end(); it++){
//		cout << it.first << " " << it.second << endl;
//	}
//	for(auto x: mp){
//		if(x.second > 1){
//			cout << x.first << endl;
//		}
//	}
//	for (pair<const int,int>& x: mp) {
//        if(x.second > 1){
//			cout << x.first << endl;
//		}
//		std::cout << x.first << " => " << x.second << '\n';
//	}
	int count = 0;
	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
		if(it->second > 1){
			count++;
		}
		
	}
	cout << count << endl;
	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
		if(it->second > 1){
			cout << it->first << endl;
		}
		
	}  
}
