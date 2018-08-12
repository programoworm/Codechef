#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int ind[64],m,mi;
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
			if(n<0)
				n=abs(n);
			x=n;
			while(x){
				c++;
				if(x%2==1)
					ind[s++]=c-1;
				x=x/2;
			}
			if(s>=2){
				m=pow(2,ind[s-1])+pow(2,ind[s-2]);
				mi=pow(2,ind[s-1]+1)+1;
			}
			else
				m=pow(2,ind[s-1])+1;
			if(abs(m-n)>abs(mi-n))
				printf("%d\n",abs(mi-n));
			else
				printf("%d\n",abs(m-n));
		}
	}
	return 0;
}
