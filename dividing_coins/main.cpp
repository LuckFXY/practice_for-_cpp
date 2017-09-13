#include <iostream>
#include <vector>
using namespace std;
int solve_by_brute_force(vector<int> v,int cur,int limit,int sofar,int sum){
    /*
    v:      coin values list
    cur:    the number coin of current node
    limit:  the total number of coins
    sofar:  the sum value of current node
    sum:    the sum value of total coins
    */
    if(cur==limit){
        //the final result after finished all the decisions
        int other=sum-sofar;
        return sofar >= other ? sofar-other : other-sofar;
    }
    //choose pick the current value coin
    int ans1=solve_by_brute_force(v,cur+1,limit,sofar+v[cur],sum);
    int ans2=solve_by_brute_force(v,cur+1,limit,sofar,sum);
    return (ans1 < ans2 ? ans1 : ans2);
}
template<typename T>
void printer(const T val){
    cout<<val<<' ';
}
template<typename T>
void showVec(const vector<T>& valList){
    for_each(valList.begin(),valList.cend(),printer<T>);
}
const int MAX_SUM=11;
bool arr[MAX_SUM];
const int  =0;
int solve_by_dp(vector<int> v, int sum){
    fill(arr,arr+MAX_SUM,false);
    arr[0]=true;
    for(int i=0;i<v.size();i++){
        for(int j=v[i];j<(v[i]<<1);j++){
            if(true==arr[j-v[i]])
                arr[j]=true;

        }
    }
    arr[sum]=true;
#if TESTFLAG & 1==true
    for(int i=0;i<MAX_SUM;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
#endif
    int mid=sum/2;
    for(int i=mid;i!=-1;i--){
#if TESTFLAG & 2 ==true
        cout<<i<<' '<<arr[i]<<endl;
#endif
        if(arr[i]){
            int other=sum-i;
            return i-other;
        }
    }

}
int main1() {
    vector<int> v(3);
    int total = 0;
    int coins[3]={2,3,5};
    for (int i = 0; i < 3; i++) {
        v[i] = coins[i];
        total += v[i];
    }
    cout<<solve_by_dp(v,total)<<endl;
    //cout << solve_by_brute_force(v, 0, 3, 0, total) << endl;
    return 0;
}