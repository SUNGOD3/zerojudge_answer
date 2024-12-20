#include <iostream>
using namespace std;
int  dm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},bd[13] = {0, 21, 20, 21, 21, 22, 22, 23, 22, 24, 24, 23, 23},n;
string name[13] = {
	"capricorn", "aquarius", "pisces", "aries", "taurus", "gemini", "cancer", "leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn"
};
int main(){
	string buf;
	cin >> n;
	for(int ca=1;ca<=n;++ca){ 
		cin >> buf;
		int month = (buf[0]-'0')*10+buf[1]-48,day = (buf[2]-'0')*10+buf[3]-48+280,year  = (buf[4]-'0')*1000+(buf[5]-'0')*100+(buf[6]-'0')*10+buf[7]-48;
		dm[2] = 28+(year%4 == 0 && year%100 || year%400 == 0);
		while (day > dm[month]) {
			day -= dm[month++];
			if (month > 12) {
				month = 1;
				++year ;
				dm[2] = 28 + (year%4 == 0 && year%100 || year%400 == 0);
			}
		}
		printf("%d %02d/%02d/%04d ",ca,month,day,year);
		(day < bd[month])? cout << name[month-1] << "\n":cout << name[month] << "\n";
	} 
}
