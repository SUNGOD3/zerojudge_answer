#include <iostream>
#include <algorithm>

using namespace std;

int check(int x[]){
    
    int g=0;
    int checker[9]={1,2,3,4,5,6,7,8,9};
    sort(x,x+9);
    
    for(int i=0;i<9;i++){
        if(x[i]!=checker[i]){
            g++;
            break;
        }
    }
    
    return g;
    
}

int main() {
	
	int a[9][9],load[9],t;
	
	while(cin>>a[0][0]){
    	
    	int p=0;
    	
    	for(int i=0;i<9;i++){
    	    for(int j=0;j<9;j++){
    	        if(i==0&&j==0);
    	        else cin >> a[i][j];
    	    }
    	}
    	
    	for(int i=0;i<9;i++){
    	    for(int t=0;t<2;t++){
    	        for(int j=0;j<9;j++){
    	            if(t==0){
    	            	load[j]=a[i][j];
    	            	
    	            }
    	            else if(t==1){
    	            	load[j]=a[j][i];
    	            	
    	            }
    	        }
    	        if(check(load)){
    	            cout << "no" << endl;
    	            p++;
    	        }
    	        if(p!=0)break;
    	    }
    	    if(p!=0)break;
    	}
    	
    	for(int m=0;m<=6;m+=3){
    	    for(int n=0;n<=6;n+=3){
    	        for(int i=0;i<3;i++){
    	            for(int j=0;j<3;j++){
    	                load[(i*3)+j]=a[m+i][n+j];
    	            }
    	            
    	        }
    	        if(check(load)){
    	        		cout << "no" << endl;
    	        		p++;
    		    }
    		    if(p!=0)break;
    	    }
    	    if(p!=0)break;
    	}
    	
    	if(p==0) cout << "yes" << endl;
    	
	}
	
	return 0;
	
}
