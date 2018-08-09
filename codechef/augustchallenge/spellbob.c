#include<stdio.h>
int main(){
	int test;
	char t[3],b[3];
	scanf("%d",&test);
		int flag[test];
		for(int j=0;j<test;j++){
			flag[j]=0;
			scanf("%s",t);
			scanf("%s",b);
			for(int i=0;i<3;i++)
				if(t[i]=='b'||t[i]=='o'||t[i]=='b'||b[i]=='b'||b[i]=='o'||b[i]=='b')
					flag[j]++;
		}
		for(int i=0;i<test;i++){
			if(flag[i]>=3)
				printf("yes\n");
			else
				printf("no\n");
		}
	return 0;
}
