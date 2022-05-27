#include<iostream>
using namespace std;
int main(){
	int t;
	char top[3],bot[3];
	cin>>t;
	int flag[t];
	for(int i=0;i<t;i++){
		flag[i]=0;
		cin>>top;
		cin>>bot;
		for(int j=0;j<3;j++)
			if(top[j]=='b'||top[j]=='o'||top[j]=='b'||bot[j]=='b'||bot[j]=='o'||bot[j]=='b')
				flag[i]++;
	}
	for(int i=0;i<t;i++){
		if(flag[i]>=3)
			cout<<"yes"<<endl;
		else
			cout<<"no";
	}
	return 0;
}

