#include<stdio.h>
#include<string.h>
int main(){
	int p,s,ch,flag;
	scanf("%d %d",&p,&s);
	int sc[p][s],ns[p][s],comp[s][p];
	memset(comp,0,p*s*sizeof(int));
	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++)
			scanf("%d",&sc[i][j]);
		for(int j=0;j<s;j++)
			scanf("%d",&ns[i][j]);
		flag=0;
		ch=sc[i][0];
		for(int j=1;j<s;j++)
			if(ch>sc[i][j])
				flag++;
			else
				ch=sc[i][j];
		if(flag)
			for(int j=0;j<s;j++)
				for(int k=0;k<s-j-1;k++)
					if(sc[i][k]>sc[i][k+1]){
						int t=ns[i][k];
						ns[i][k]=ns[i][k+1];
						ns[i][k+1]=t;
						t=sc[i][k];
						sc[i][k]=sc[i][k+1];
						sc[i][k+1]=t;
					}
			int count=0;
			for(int k=0;k<s-1;k++)
				if(ns[i][k]>ns[i][k+1])
					count++;
			comp[count][i]++;
		}
	for(int i=0;i<s;i++)
		for(int j=0;j<p;j++)
			if(comp[i][j])
				printf("%d\n",j+1);
	return 0;
}
