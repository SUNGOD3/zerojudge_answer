#include <stdio.h>
#include <stack>
int main() {
    int a=0;
    std::stack<int> st;
	scanf("%d",&a);
    while(scanf("%d",&a)>0) {
    	if(a==3){
    		scanf("%d",&a);
    		st.push(a);
		}
		else if(a==2)
    		printf("%d\n",st.top());
        else
        	st.pop();
    }
}
