#include<stdio.h>
int main(){
	int test;
	char t[3],b[3];
	scanf("%d",&test);
	while(test--){
		int flagb=0,flago=0,m=0,n=0;
		int co[3],cb[3];
		scanf("%s",t);
		scanf("%s",b);
		for(int i=0;i<3;i++){
			if(t[i]=='b'||b[i]=='b'){
				flagb++;
				cb[m++]=i;
			}
			if(t[i]=='o'||b[i]=='o'){
				flago++;
				co[n++]=i;
			}
		}
		if(flagb>=3&&flago>=2){
			printf("yes\n");
		}
		else{
			for(int i=0;i<m;i++)
				for(int j=0;j<n;j++)
					if(cb[i]==co[j])
						if(flagb>=3)
							flagb--;
						else
							flago--;
			if(flagb>=2&&flago>=1)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}
