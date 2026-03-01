#include <stdio.h>
#include <queue>
int main() {
    int a=0;
    std::queue<int> st;
	scanf("%d",&a);
    while(scanf("%d",&a)>0) {
    	if(a==1){
    		scanf("%d",&a);
    		st.push(a);
		}
		else if(a==2){
			if(st.empty()==1)
				printf("-1\n");
			else
    			printf("%d\n",st.front());
    	}
        else{
        	if(st.empty()!=1)
				st.pop();
		}
    }
}
