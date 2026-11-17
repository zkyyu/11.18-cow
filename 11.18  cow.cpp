# include<stdio.h>
int main(){
	long long f[55]={0};
	int n,i;
	f[1]=1;
	f[2]=2;
	f[3]=3;
	for(i=4;i<55;i++){
		f[i]=f[i-1]+f[i-3];
	}
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		printf("%lld\n",f[n]);
	}
	return 0;
}
