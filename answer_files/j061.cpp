#include <bits/stdc++.h>
using namespace std;
main() {
	cin.tie(0); ios::sync_with_stdio(0);
    int n;
    string s;
    for(int ca=1;cin >> n;++ca){
        getline(cin,s);
        if(n == 0)break;
        cout << "Case " << ca << ":\n#include<string.h>\n#include<stdio.h>\nint main()\n{\n";
        for(int i = 0;i < n;i++){
            getline(cin,s);
            cout << "printf(\"";
            for(int j=0;j<s.size();++j){
            	if(s[j]=='\\')
            		cout << "\\\\";
				else if(s[j]=='"')
					cout << "\\\"";
				else
					cout << s[j];
			}
            cout << "\\n\");\n";
        }
        cout << "printf(\"\\n\");\nreturn 0;\n}\n";
    }
}
