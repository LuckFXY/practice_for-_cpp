#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int get_priority(char c) {
	const char prior_flag[] = { 'M','D','C','L','X','V','I' };
	static int length = sizeof(prior_flag) / sizeof(char);
	for (int i = 0; i<length; i++) {
		if (c == prior_flag[i]) return i;
	}
	return -1;
}
#include <assert.h>
string process(int num) {

	string ret = "";
	string symbol[4][6] = { {"I","II","III","V","IV","IX"},{"X","XX","XXX","L","XL","XC"},{"C","CC","CCC","D","CD","CM"},{"M","M", "M"} };
	int digit = 0;
	int unit = 0;
	int startpos = 0;
	int str_num[4] = {0,0,0,0};
	while (num) {
		unit = num % 10;
		num = num / 10;
		str_num[3 - digit] = unit;
		digit++;
	}
	digit--;
	startpos = 3 - digit;
	
	for (int i = startpos; i != 4; i++,digit--) {
		unit = str_num[i];
		if (0 == unit) continue;
		if (4 == unit) ret = ret + symbol[digit][4];
		else if(9 == unit) ret = ret + symbol[digit][5];
		else {
			if (5 <= unit  ) {
				unit -= 5;
				ret = ret + symbol[digit][3]; 
			}
			if(unit!=0)
				ret = ret + symbol[digit][unit-1];
		}
	}
	return ret;
}

int main() {
	string roman[] = { "MCDXCIX","MMDCCXVI","MMMCDCII","MCXCIX","MDCCXIX","MMDCXVII","MMMDCCC" };
	int num[] = {5,3416,1499,2716,3502,1199,1719,2617,3800};
	for (int i = 0; i<7; i++)
		cout << process(num[i]) << endl;
	system("pause");
	return 0;
}
