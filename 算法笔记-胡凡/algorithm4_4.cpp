#include <stdio.h>
//ɢ�г������ռ任ʱ�䣬���ռ���ڼ������˵������ʲô���������M��N���Ƿ���ֹ� 
 int main(){
 	const int maxn=10010; 
 	bool hashTable[maxn]={false};
	int m,n,x;
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++){
		scanf("%d",&x);
		hashTable[x]=true;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(hashTable[x]==true){
			printf("�ظ���");
		}else{
			printf("û���ظ�");
		}
	} 
 }