#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
bool isMatch(string s, string p) {
        int si=s.length()-1,pi=p.length()-1;
        bool isStar=false;
        char cur=0;
        for(;pi!=-1;pi--){
            if(s.length()==-1)
                return false;
            cur=p[pi];

            if (cur=='*'){
                isStar=true;
                cur=p[pi-1];
            }

            if(cur=='.' || cur==s[si]){
                if(-1 !=si)
                    si-=1;
                else
                    break;
            }
            cout<<cur<<endl;
            if(isStar){
                while(cur=='.' || cur==s[si]){
                    cout<<"while "<<cur<<endl;
                    if(-1 !=si)
                        si-=1;
                    else{
                        break;
                    }
                }
                isStar=false;
            }

        }
        cout<<si<<' '<<pi<<endl;
        if(-1 ==si && -1 == pi)
            return true;
        return false;
    }
int main(){
    string s[]={"aaa","ab","aa","aaa","aa","ab","ba","aab"};
    string p[]={"a*a",".*c","a",".*","a*","ab","c*.a","c*a*b"};
    for(int i=3;i<8;i++)
        cout<<isMatch(s[i],p[i])<<endl;
    system("pause");
    return 0;
}
