#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    int first=2*numRows-2;
    if(first==0) first=1;
    int i=0;
    string output="";
    for(i=0;i<s.length();i+=first) output +=s[i];

    for(i=1;i<numRows-1;i++){
        int j,mid;
        output += s[i];
        for(j=i+first;j<s.length();j+=first){
            mid=j-i*2;
            output += s[mid];
            output += s[j];
        }
        mid=j-i*2;
        if(mid<s.length()) output += s[mid];
    }
    if (numRows != 1)
        for(int i=numRows-1;i<s.length();i+=first) output +=s[i];

    return output;
}
int main(){
    cout<<convert("ABCD",3)<<endl;
    return 0;
}
