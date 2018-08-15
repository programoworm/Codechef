#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int min(int,int,int);
int main(){
	int ind[64],m,mi,mii,miii;
	long int t;
	long long int n;
	scanf("%ld",&t);
	while(t--){
		int s=0,c=0,x;
		scanf("%lld",&n);
		if(n<=2&&n>=0){
			m=3;
			printf("%d\n",abs(m-n));
		}
		else{
			x=n;
			while(x){
				c++;
				if(x%2==1)
					ind[s++]=c-1;
				x=x/2;
			}
			if(s<2)
				printf("1\n");
			else{
				m=pow(2,ind[s-1])+pow(2,ind[s-2]);
				mi=pow(2,ind[s-1]+1)+1;
				if(ind[s-1]!=(ind[s-2]+1)){
					mii=pow(2,ind[s-1])+pow(2,ind[s-2]+1);
				}
				else
					mii=0;
				printf("%d\n",min(abs(mii-n),abs(mi-n),abs(m-n)));
			}
		}
	}
	return 0;
}
int min(int x,int y,int z){
	int m=x;
	if(m>y)
		m=y;
	if(m>z)
		m=z;
	return m;
}
