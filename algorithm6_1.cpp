#include <stdio.h>
#include <vector>
using namespace std;
//vector�ķ��ʷ�ʽ 
int main(){
	vector<int> vi;
	for(int i=0;i<3;i++){
		vi.push_back(i);
	}
	//����ֱ��ʹ����������
	printf("%d\n",vi[0]); 
	
	//ͨ������������
	vector<int>::iterator it=vi.begin();
	for(int i=0;i<3;i++){
		printf("%d\n",*(it+i));
	}
	return 0;
}
