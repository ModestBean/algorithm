#include <stdio.h>
#include <math.h>
const int maxn=11;
int n,count=0,P[maxn],hashTable[maxn]={false};
void genf(int index){
	//������Խ���һ���������� 
	if(index == n+1){
		count++;
		return; 
	}
	for(int x=1;x<=n;x++){
		//��ÿ�θ�֮ǰ���ж��Ƿ���ǰ��Ļʺ��ظ������������ű��� 
		if(hashTable[x]==false){
			bool flag=false;//û���ظ�
			//!!!!ע��˴����ɳ���index-index�Լ������ 
			for(int pre=1;pre<index;pre++){
				if(abs(index-pre)==abs(x-P[pre])){
					flag=true;
					break;
				}
			}
		 	if(!flag){
			 	P[index]=x;
				hashTable[x]=true;
				genf(index+1);
				hashTable[x]=false;	
		 	}
		}
	}
}
int main(){
	n=8;
	genf(1);
	printf("%d\n",count);
	return 0;
}
