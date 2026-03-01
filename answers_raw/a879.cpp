#include <iostream>
using namespace std;
int main(int argc, char** argv){
cin.tie(0);
ios::sync_with_stdio(false);
int a,b,c,h;
cin>>a;
while(a--){
h=0;
cin>>b>>c;
int d[b][2],f[2];
for(int e=0;e<b;e++)
cin>>d[e][0]>>d[e][1];
cin>>f[0]>>f[1];
for(int g=0;g<b;g++){
if(c*c<(d[g][0]-f[0])*(d[g][0]-f[0])+(d[g][1]-f[1])*(d[g][1]-f[1])) 
h++;
}
cout<<b-h<<"\n";
}
}
