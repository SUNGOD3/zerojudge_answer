#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//分塊結構
//假設要求區間總和
struct blk{
    vector<long long> local;    //每塊的全部元素
    long long global;           //儲存每塊的總和
    blk(){                //初始化
        local.clear();    //清空區間元素
        global = 0; //將區間總和先設為0
    }
};
long long n,m,x,z,len,num;
vector<blk> b(500005);
void build(){
	len=sqrt(n);
	//cout << "len = " << len << "\n";
	num=(n+len-1)/len;
    long long input;
    for(int i=0;i<n;i++){    //第i個元素分在第 i/len 塊
        cin>>input;
        //存入區間中
        b[i/len].local.push_back(input);
        //更新區間總和
        b[i/len].global += input;
    }
}
void update(long long q,long long v){
	long long blk=q/len,i=q%len;
	b[blk].global+=v-b[blk].local[i];
	b[blk].local[i]=v;
	return;
}
long long query(long long q){
	long long rt=0,sum=0;
	for(int i=0;i<num;++i){
		sum+=b[i].global;
		rt+=len;
		if(sum>=q){
			sum-=b[i].global;
			rt-=len;
			for(int j=0;j<len;++j){
				sum+=b[i].local[j];
				rt++;
				if(sum>=q)return rt;
			}
		}
	}
	return -1;
}
char is;
int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n >> m;
	build();
	for(int i=0;i<m;++i){
		cin >> is;
		if(is=='2'){
			cin >> x ;
			long long ans=query(x);
			if(ans==-1){
				cout << "meh\n";
			}
			else{
				cout << ans << '\n';
			}
		}
		else{
			cin >> x >> z;
			update(x-1,z);
		}
	}
} 

