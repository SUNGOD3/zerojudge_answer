#include <iostream>
#include <string>
int main(){
	std::string a,b;
	int n,m;
	while(scanf("%d%d",&n,&m)>0){
		for(;n>0;n--){
			std::cin >> a;
			b+=a;
		}
		a.clear();
		for(;m>0;m--){
			scanf("%d",&n);
			printf("%c",b[n-1]);
		}
		b.clear();
		printf("\n");
	}
}
