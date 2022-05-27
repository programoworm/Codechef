//Problem code: Download
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int s[n],e[n];
	for(int i=0;i<n;i++)
		scanf("%d %d",&s[i],&e[i]);
	int q;
	scanf("%d",&q);
	int k[q],**t;
	t=(int**)malloc(q*sizeof(int));
	for(int i=0;i<q;i++){
		scanf("%d",&k[i]);
		t[i]=(int*)malloc(k[i]*sizeof(int));
		for(int j=0;j<k[i];j++)
			scanf("%d",&t[i][j]);
	}
	for(int i=0;i<q;i++){
		int count=0;
		for(int p=0;p<n;p++){
			for(int j=0;j<k[i];j++)
				if(t[i][j]>=s[p]&&t[i][j]<=e[p]){
					count++;
					break;
				}
		}
		printf("%d\n",count);
	}
	return 0;
}
