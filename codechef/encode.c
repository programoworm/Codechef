#include<stdio.h>
int main(){
	int i,j,t,n;
	char temp,s[9];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		scanf("%s",s);
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
