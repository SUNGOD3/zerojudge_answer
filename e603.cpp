#include <iostream>
#define ll long long
using namespace std;
//�o�̥ΤFint���O�A�Ҥ������ƽd����p�A�B���{�ǶȤ���D�t��ơA�i��ʥF��ڥγ~�A�ȨѮi�ܡC
struct EX_GCD { //s,t�O�p�����������Y�ơAgcd�Oa,b���̤j���]��
	ll s,t,gcd;
};
struct EX_GCD extended_euclidean(ll a, ll b) {
	struct EX_GCD ex_gcd;
	if (b == 0) { //b=0�ɪ��������D��
		ex_gcd.s = 1;
		ex_gcd.t = ex_gcd.gcd = 0;
		return ex_gcd;
	}
	ll old_r = a, r = b , old_s = 1, s = 0 , old_t = 0, t = 1;
	while (r != 0) { //���X�i�ڰ򨽼w��k�i��`��
		ll q = old_r / r;
		ll temp = old_r;
		old_r = r;
		r = temp - q * r;
		temp = old_s;
		old_s = s;
		s = temp - q * s;
		temp = old_t;
		old_t = t;
		t = temp - q * t;
	}
	ex_gcd.s = old_s;
	ex_gcd.t = old_t;
	ex_gcd.gcd = old_r;
	return ex_gcd;
}
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	ll a, b;
	while(cin >> a >> b){
		struct EX_GCD sol = extended_euclidean(a, b);
		cout << sol.s << " " << sol.t << " " << sol.gcd << "\n";
	}
	return 0;
}
