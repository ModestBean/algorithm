#include <stdio.h>
//��������(���˸��Ӱ汾)
int main(){
	int a[10]={1,-5,34,89,110,123,-56,-78,0,18};
	for(int i=1;i<10;i++){
		int temp=a[i];//��ǰ��Ҫ�жϵ�Ԫ�� 		
		for(int j=0;j<i;j++){
			if(a[j]>a[i]){
				//����ԭλ��ֵ 
				int temp = a[i]; 
				//ԭλ���Ժ��ֵ����
				for(int z=i;z>j;z--){
					a[z] = a[z-1];
				} 
				a[j] = temp;
			}
		}
	} 
	for(int i=0;i<10;i++){
		printf("%d   ",a[i]); 
	}	
}