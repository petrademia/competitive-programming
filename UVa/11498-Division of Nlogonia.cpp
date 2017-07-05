#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int data, longdiv, latdiv, a, b;
	while(scanf("%d", &data), data){
		cin >> longdiv >> latdiv;
		for(int i = 0; i < data; i++){
			cin >> a >> b;
			if(a == longdiv || b == latdiv){
				printf("divisa\n");
			}else{
				if(a > longdiv && b > latdiv){
					printf("NE\n");
				}else if(a > longdiv && b < latdiv){
					printf("SE\n");
				}else if(a < longdiv && b > latdiv){
					printf("NO\n");
				}else if(a < longdiv && b < latdiv){
					printf("SO\n");
				}
			}
		}
	}
}

