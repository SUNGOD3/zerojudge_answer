#include <iostream>
int main() {
 int n,a,b,c,d,e,f;
 std::cin>>n;
 for(;n>0;n--){
	std::cin>>a>>b>>c>>d>>e>>f;
	std::cout<<(c*e-b*f)/(a*e-b*d)<<" "<<(c*d-a*f)/(b*d-a*e)<<"\n";
 }
}
