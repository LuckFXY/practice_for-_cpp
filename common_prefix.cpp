#include<iostream>
#include<string>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";
    string header=strs[0];
    int maxlen=header.length();
    vector<string>::iterator it=strs.begin()+1;
    for(;it!=strs.end();it++){
        string& newone=(*it);
        int size2=newone.size();
        maxlen=(maxlen<size2)?maxlen:size2;
        for(int j=0;j<maxlen;j++){

            if(header[j]!=newone[j]){
                maxlen=j;
                //test
                //cout<<header.substr(0,j)<<endl;
            }

        }
    }
    return header.substr(0,maxlen);
}
int main(){
    string ss[]={"abcderrgfwegwsegt","abcd","abce"};
    vector<string> strs(&ss[0],&ss[3]);

    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}
