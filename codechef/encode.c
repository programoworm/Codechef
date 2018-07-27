#include<stdio.h>
int main(){
	int i,j,t,n,k;
	char s[30],temp;
	printf("Enter T: ");
	scanf("%d",&t);
	for(k=0;k<t;k++){
		printf("Test case %d:\n",k+1);
		printf("Enter n, String: ");
		scanf("%d %s",&n,s);
		for(i=0;i<n;i+=2){
			temp=s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
			j=i;
			while(j<=i+1){
				if(s[j]>='a'&&s[j]<='m'){
					s[j]='z'-(s[j]-'a');
				}
				else if(s[j]<='z'&&s[j]>='n'){
					s[j]='a'+('z'-s[j]);
				}
				j++;
			}
		}
		printf("%s\n",s);
	}
	return 0;
}
