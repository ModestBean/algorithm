#include <stdio.h>
//�ݹ飬n�Ľ׳�
int cal(int n){
	if(n==1){
		return 1;
	}
	return n*cal(n-1);
}

int main(){
	int n=5;
	printf("%d",cal(n));
	return 0;
} 