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
			cout << "十六夜贏了第" << ca << "局的比賽\n";
		}
		else if(t[1]==4){
			++ans[1];
			cout << "紅美鈴贏了第" << ca << "局的比賽\n";
		}
		else if(t[2]==4){
			++ans[2];
			cout << "帕秋莉·諾雷姬贏了第" << ca << "局的比賽\n";
		}
		else if(t[0]+t[1]+t[2]==6||(t[0]==t[1]&&t[1]==t[2]))
			cout << "第" << ca << "局不分勝負\n";
		else if((t[0]-t[1]==1&&t[1]==t[2])||(t[0]==1&&t[1]==3&&t[2]==3)){
			cout << "十六夜贏了第" << ca << "局的比賽\n";
			++ans[0];
		}
		else if((t[1]-t[0]==1&&t[0]==t[2])||(t[1]==1&&t[0]==3&&t[2]==3)){
			cout << "紅美鈴贏了第" << ca << "局的比賽\n";
			++ans[1];
		}
		else if((t[2]-t[1]==1&&t[1]==t[0])||(t[2]==1&&t[1]==3&&t[0]==3)){
			cout << "帕秋莉·諾雷姬贏了第" << ca << "局的比賽\n";
			++ans[2];
		}
		else if((t[1]-t[0]==1&&t[1]==t[2])||(t[0]==3&&t[1]==1&&t[2]==1)){
			cout << "十六夜輸了第" << ca << "局的比賽\n";
			++ans[1];++ans[2];
		}
		else if((t[2]-t[1]==1&&t[0]==t[2])||(t[1]==3&&t[0]==1&&t[2]==1)){
			cout << "紅美鈴輸了第" << ca << "局的比賽\n";
			++ans[0];++ans[2];
		}
		else{
			cout << "帕秋莉·諾雷姬輸了第" << ca << "局的比賽\n";
			++ans[0];++ans[1];
		}
	}cin >> a;
	cout << "十六夜總計贏了" << ans[0] << "局比賽\n" << "紅美鈴總計贏了" << ans[1] << "局比賽\n" << "帕秋莉·諾雷姬總計贏了" << ans[2] << "局比賽\n";
	(ans[0]==max(ans[0],max(ans[1],ans[2])))?cout << "趕上旅程":cout << "繼續做家事";
} 
