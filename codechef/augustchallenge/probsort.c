#include<stdio.h>
typedef struct diff{
	int num;
	int prob;
}diff;
void sort(diff*,int);
int main(){
	int p,s;
//	scanf("%d %d",&p,&s);
	p=3,s=3;
	int sc[p][s],ns[p][s];
/*	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++)
			scanf("%d",&sc[i][j]);
		for(int j=0;j<s;j++)
			scanf("%d",&ns[i][j]);
	}*/
	int i=0,j=0;
	sc[i][j]=16;
	sc[i][j+1]=24;
	sc[i][j+2]=60;
	sc[i+1][j]=14;
	sc[i+1][j+1]=24;
	sc[i+1][j+2]=62;
	sc[i+2][j]=16;
	sc[i+2][j+1]=15;
	sc[i+2][j+2]=69;
	i=0,j=0;
	ns[i][j]=498;
	ns[i][j+1]=861;
	ns[i][j+2]=589;
	ns[i+1][j]=72;
	ns[i+1][j+1]=557;
	ns[i+1][j+2]=819;
	ns[i+2][j]=435;
	ns[i+2][j+1]=779;
	ns[i+2][j+2]=232;
/*	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++)
			printf("%d\t",sc[i][j]);
		printf("\n");
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++)
			printf("%d\t",ns[i][j]);
		printf("\n");
	}*/
	for(int i=0;i<p;i++)
		for(int j=0;j<s;j++)
			for(int k=0;k<s-j-1;k++)
				if(sc[i][k]>sc[i][k+1]){
				//	printf("HI %d,%d\t%d and %d\n",i+1,k+1,sc[i][k],sc[i][k+1]);
					int t=ns[i][k];
					ns[i][k]=ns[i][k+1];
					ns[i][k+1]=t;
					t=sc[i][k];
					sc[i][k]=sc[i][k+1];
					sc[i][k+1]=t;
				}
/*	for(int i=0;i<p;i++){
		for(int j=0;j<s;j++)
			printf("%d\t",ns[i][j]);
		printf("\n");
	}*/
//	printf("ns[1][3]=%d\n",ns[0][2]);

	diff n[p];
	for(int i=0;i<p;i++){
		n[i].prob=i+1;
		int count=0;
		for(int k=0;k<s-1;k++)
			if(ns[i][k]>ns[i][k+1]){
			//	printf("HI there\n");
				count++;
			}
		n[i].num=count;
	//	printf("problem %d=%d\n",i+1,n[i].num);
	}
/*	for(int i=0;i<p;i++)
		printf("problem: %d\tdifficulty: %d\n",n[i].prob,n[i].num);*/
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
	for(int i=0;i<p-1;i++)
		if(n[i].num==n[i+1].num)
			if(n[i].prob>n[i+1].prob){
				int t=n[i].prob;
				n[i].prob=n[i+1].prob;
				n[i+1].prob=t;
			}
}
				
