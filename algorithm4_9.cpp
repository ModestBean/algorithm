#include <stdio.h>
#include <math.h>
const int maxn=11;
int n,count=0,P[maxn],hashTable[maxn]={false};
void genf(int index){
	if(index == n+1){
		//�ж������Ƿ���ͬһ���Խ�����
		//�������������ʺ�
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if((i-j)!=abs(P[i]-P[j])){
					count++;
				}
			}
		}
		return;
	}
	for(int x=1;x<=n;x++){
		if(hashTable[x]==false){
			P[index]=x;
			hashTable[x]=true;
			genf(index+1);
			hashTable[x]=false;
		}
	}
}
int main(){
	n=8;
	genf(n);
	printf("%d",count);
	return 0;
}
