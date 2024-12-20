#include <iostream>

using namespace std;

int main()
{
long long int a,b,c;
while(cin>>a>>b>>c){
if(a>=b&&b>=c||b>=a&&a>=c){
if(a>b){
b+=c;
if(a>b)
cout<<"A"<<endl;
else
cout<<"B"<<endl;
}else{
a+=c;
if(b>a)
cout<<"B"<<endl;
else
cout<<"A"<<endl;
}
}else if(b>=c&&c>=a||c>=b&&b>=a){
if(b>c){
c+=a;
if(b>c)
cout<<"B"<<endl;
else
cout<<"C"<<endl;
}else{
b+=a;
if(c>b)
cout<<"C"<<endl;
else
cout<<"B"<<endl;
}
}else if(c>=a&&a>=b||a>=c&&c>=b){
if(c>a){
a+=b;
if(c>a)
cout<<"C"<<endl;
else
cout<<"A"<<endl;
}else{
c+=b;
if(a>c)
cout<<"A"<<endl;
else
cout<<"C"<<endl;
}
}
}

return 0;
}
