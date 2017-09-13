

/*
 * There are many coins, the values of coin is the power of 2 which its number is 2.
 * Now you are asked to collect some values which the sum of them is n, and how many collection different way to collect them here?
 */

#include <iostream>
#include <set>
using namespace std;
int collect_coins(int n){
    static set<int> myset;
    for(int i=0;i<n/2;i++){
        int b=n-i;
        myset.insert( i|b );
    }
    int res=myset.size();
    myset.clear();
    return res;
}
int main() {
    for(int i=1;i<10;i++)
        cout<<i<<" : "<<collect_coins(i)<<endl;
    return 0;
}