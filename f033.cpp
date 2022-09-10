#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//�������c
//���]�n�D�϶��`�M
struct blk{
    vector<long long> local;    //�C������������
    long long global;           //�x�s�C�����`�M
    blk(){                //��l��
        local.clear();    //�M�Ű϶�����
        global = 0; //�N�϶��`�M���]��0
    }
};
long long n,m,x,z,len,num;
vector<blk> b(500005);
void build(){
	len=sqrt(n);
	//cout << "len = " << len << "\n";
	num=(n+len-1)/len;
    long long input;
    for(int i=0;i<n;i++){    //��i�Ӥ������b�� i/len ��
        cin>>input;
        //�s�J�϶���
        b[i/len].local.push_back(input);
        //��s�϶��`�M
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

