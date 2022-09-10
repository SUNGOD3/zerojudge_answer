#include <iostream>
using namespace std; 
long long st_ans1=0,st_ans2=0,st_com=0,st_cnt=0;template<typename stst>stst request(stst a){st_cnt++;if(st_com==1)std::cout << "request=qwertyuiopasdfghjklzxcvbnm;check=ok;waiting_for_the_answer;next_line=check;reading=false;check_point=false\n";if(a>=st_ans2-st_ans1) return 1ll;else return 0ll;}template<typename stst>void upload_answer(stst a){if(st_com==1){std::cout<<"request=mnbvcxzlkjhgfdsapoiuytrewq;check=ok;waiting_for_the_answer;next_line=answer;reading=true;check_point=true\n";std::cout <<1000000007+5*(4*a+3) << '\n';}if(a==st_ans2-st_ans1){std::cout << "AC\n";std::cout << "request: "<<st_cnt<<" times.";}else{std::cout << "WA\n";std::cout << "Your answer is: "<<a<<".\n";std::cout << "request: "<<st_cnt<<" times.";}}void cpp_start(){long long st_cc;std::cin>>st_cc;if(st_cc==-87) st_com=1;if(st_com==1){long long Do_not_change_it_plz,ststone,st_zerojudge,st_IDK,st_hard,st_mouse,st_check;std::cin>>Do_not_change_it_plz>>ststone>>st_zerojudge>>st_IDK>>st_hard>>st_mouse>>st_check;st_ans1=Do_not_change_it_plz+ststone-st_zerojudge-st_IDK+st_hard-st_mouse;st_ans2=st_ans1*st_check;}else st_ans2 = st_cc;}
int main(){
	cpp_start();
	long long l=0,r=1e7;
	while(l<=r){
		long long m=(l+r)/2;
		if(request(m)){
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	upload_answer(l);
}
