#include <iostream>
#include <string>
using namespace std;
int main(){
    string str[53] = {"A.-", "B-...", "C-.-.", "D-..", "E.", "F..-.", "G--.","H....", "I..", "J.---", "K-.-", "L.-..", "M--", "N-.", "O---","P.--.", "Q--.-", "R.-.", "S...", "T-", "U..-", "V...-", "W.--","X-..-", "Y-.--", "Z--..", "0-----", "1.----", "2..---", "3...--","4....-", "5.....", "6-....", "7--...", "8---..", "9----.","..-.-.-", ",--..--", "?..--..", "'.----.", "!-.-.--", "/-..-.","(-.--.", ")-.--.-", "&.-...", ":---...", ";-.-.-.", "=-...-","+.-.-.", "--....-", "_..--.-", "\".-..-.", "@.--.-."};
    string a;
    int T;
    scanf("%d", &T);
    getline(cin,a);
    for (int t = 1; t <= T; ++t){
        printf("Message #%d\n", t);
       	getline(cin,a); 
       	a+=' ';
        int al=a.length();
        string tmp;
        int i=0;
        while(a[i]==' ')++i;
        for (;i<al;++i){
        	bool space=0;
            if (a[i] == ' '){
            	int tl=tmp.length();
            	if(tmp==" "){
            		cout << a[i];
            		break;
            	}
            	for(int j=0;j<53;++j){
            		if(tl!=str[j].length()-1)continue;
            		bool ans=1;
            		for(int k=1;k<str[j].length();++k){
            			if(tmp[k-1]!=str[j][k]){
            				ans=0;
            				break;
						}
					}
					if(ans)
						cout << str[j][0];
				}
                tmp.clear();
                ++i;
            }
            while(a[i]==' '){
            	if(space==0){
            		cout << " ";
            		space=1;
            	}
            	++i;
			}
            tmp+=a[i];
        }
        if(t!=T)
        	puts("\n");
        else
        	puts("");
    }
    return 0;
}
