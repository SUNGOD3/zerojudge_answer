#include <iostream>
using namespace std;
int ans[3];
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int ca=0;
	string a;
	while(getline(cin,a)){
		if(a=="Game Over")break;
		++ca;
		string tmp;int t[3]={0},it=0;a+=',';
		for(int i=0;i<3;++i,++it,tmp.clear()){
			while(a[it]!=',')tmp+=a[it++];
			if(tmp=="Scissors")t[i]=1;
			else if(tmp=="Stone")t[i]=2;
			else if(tmp=="Paper")t[i]=3;
			else t[i]=4;
		}
		if(t[0]==4){
			++ans[0];
			cout << "�Q���]Ĺ�F��" << ca << "��������\n";
		}
		else if(t[1]==4){
			++ans[1];
			cout << "�����aĹ�F��" << ca << "��������\n";
		}
		else if(t[2]==4){
			++ans[2];
			cout << "������P�չp�VĹ�F��" << ca << "��������\n";
		}
		else if(t[0]+t[1]+t[2]==6||(t[0]==t[1]&&t[1]==t[2]))
			cout << "��" << ca << "�������ӭt\n";
		else if((t[0]-t[1]==1&&t[1]==t[2])||(t[0]==1&&t[1]==3&&t[2]==3)){
			cout << "�Q���]Ĺ�F��" << ca << "��������\n";
			++ans[0];
		}
		else if((t[1]-t[0]==1&&t[0]==t[2])||(t[1]==1&&t[0]==3&&t[2]==3)){
			cout << "�����aĹ�F��" << ca << "��������\n";
			++ans[1];
		}
		else if((t[2]-t[1]==1&&t[1]==t[0])||(t[2]==1&&t[1]==3&&t[0]==3)){
			cout << "������P�չp�VĹ�F��" << ca << "��������\n";
			++ans[2];
		}
		else if((t[1]-t[0]==1&&t[1]==t[2])||(t[0]==3&&t[1]==1&&t[2]==1)){
			cout << "�Q���]��F��" << ca << "��������\n";
			++ans[1];++ans[2];
		}
		else if((t[2]-t[1]==1&&t[0]==t[2])||(t[1]==3&&t[0]==1&&t[2]==1)){
			cout << "�����a��F��" << ca << "��������\n";
			++ans[0];++ans[2];
		}
		else{
			cout << "������P�չp�V��F��" << ca << "��������\n";
			++ans[0];++ans[1];
		}
	}cin >> a;
	cout << "�Q���]�`�pĹ�F" << ans[0] << "������\n" << "�����a�`�pĹ�F" << ans[1] << "������\n" << "������P�չp�V�`�pĹ�F" << ans[2] << "������\n";
	(ans[0]==max(ans[0],max(ans[1],ans[2])))?cout << "���W�ȵ{":cout << "�~�򰵮a��";
} 
