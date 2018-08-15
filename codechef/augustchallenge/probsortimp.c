#include<stdio.h>
typedef struct diff{
	int num;
	int prob;
}diff;
void sort(diff*,int);
int main(){
	int p,s;
	scanf("%d %d",&p,&s);
	int sc[p][s],ns[p][s];
	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++)
			scanf("%d",&sc[i][j]);
		for(int j=0;j<s;j++)
			scanf("%d",&ns[i][j]);
	}

	for(int i=0;i<p;i++)
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

	diff n[p];
	for(int i=0;i<p;i++){
		n[i].prob=i+1;
		int count=0;
		for(int k=0;k<s-1;k++)
			if(ns[i][k]>ns[i][k+1]){
				count++;
			}
		n[i].num=count;
	}
	sort(n,p);
	for(int i=0;i<p;i++)
		printf("%d\n",n[i].prob);
	return 0;
}
void sort(diff n[],int p){
	for(int i=0;i<p;i++)
		for(int j=0;j<p-i-1;j++)
			if(n[j].num>n[j+1].num){
				diff t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
/*	for(int i=0;i<p-1;i++)
		if(n[i].num==n[i+1].num)
			if(n[i].prob>n[i+1].prob){
				int t=n[i].prob;
				n[i].prob=n[i+1].prob;
				n[i+1].prob=t;
			}*/
}
				
