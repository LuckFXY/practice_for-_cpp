#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
bool isMatch(string s, string p) {
	int si=0, pi=0, pj=0,count=0,back_count=-1;
	char cur_c, pro_c,back_c;
	bool match = true;
	bool need_go = true;
	bool isforward = false;
	if (s == p) return true;

	while( pi != p.length() && pi != p.length()+1) {
		need_go = true;
		isforward = false;
		back_count = 0;
		cur_c = p[pi];
		if (p.length() != pi + 1)
			pro_c = p[pi + 1];
		else pro_c = 0;

		if ('*' == cur_c) {
			cur_c = p[pi - 1];	
			
			count = 1;
			while (si != s.length() &&(cur_c=='.' || cur_c == s[si])) {
				si++;
				isforward = true;
				count++;
				back_c = cur_c;
			}
			back_count = count;
			
		}
		else if (si != s.length() && (cur_c == '.' || cur_c == s[si])) {

			si++;
			isforward = true;
			back_c = cur_c;
			if (si == s.length()) {			
				if (pro_c != '*') {
					pi++;
					if (back_count <= 0) {
						if (p.length() > pi + 1)
							pro_c = p[pi + 1];
						if (pro_c != '*') 
							break;
					}
				}
				
			}
		}
		if (pro_c != '*') {
			if (p.length() > pi + 2)
				pro_c = p[pi + 2];
			if (pro_c != '*') {
				match = false;
				if (isforward==false) {
					if(back_c== cur_c || back_c=='.')
						if (back_count > 0) {
							back_count -= 1;
							si--;
							back_c = s[si];
							need_go = false;
							match = true;
						}
				}	
			}
		}
		

		if (match == false)
			break;
		if (need_go == true)
			pi++;

	}
	if (si != s.length() || (pi != p.length() && pi != p.length()+1) )
		match = false;
	return match;
}
#include <vector>
bool isMatch2(string s, string p) {
	int m = s.length(), n = p.length();
	vector<vector<bool> > dp(m + 1, vector<bool>(n + 1, false));
	dp[0][0] = true;
	for (int i = 0; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (p[j - 1] == '*')
				dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
			else dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
			return dp[m][n];
}
int main() {
	string s[] = { "a","ab","a","ab","bbbba","aaa", "a",  "aa","aaa",  "aaab","ab","aaaa","aaa",    "",    "ab", "ba","aab" };
	string p[] = { ".*.",".*..",".*",".*c",".*a*a","aaaa","ab*","a*b*c*d*aa","ab*a*c*a", "a*ab",".*c*bd*","a*aa",".*", "a*","ab","c*.a","c*a*b" };
	for (int i = 0; i<13; i++)
		cout << isMatch(s[i], p[i]) << endl;
	system("pause");
	return 0;
}
