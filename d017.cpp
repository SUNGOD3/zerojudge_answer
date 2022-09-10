#include <iostream>  
#include <string>  
using namespace std;  
int main(){  
	cin.tie(0); ios::sync_with_stdio(false);
    int c=0;  
    string a;  
    while(cin >> a){  
        cout << "AB Circle #" << ++c << ":\n";  
        int ac=0,bc=0,al=a.length();  
        for(int i=0;i<al;++i)  
            (a[i]=='a')?ac++:bc++;  
        for(int i=0;i<al;++i){
            for(int j=i+1;j<al;++j){    
                if(j-i==bc||j-i==ac)  
                    cout << i << "," << j << "\n";  
            }  
        }  
        cout << "\n";  
    }  
}  
