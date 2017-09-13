#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    if(prices.empty()) return 0;
    int max_i=-1,min_i=0;
    int maxprofit=0;
    for(int i=1;i!=prices.size();i++){
        if(prices[i] < prices[min_i])min_i=i;

        if(max_i==-1 || prices[i]>prices[max_i]){
            if(i>min_i){
                max_i=i;
                if(maxprofit < prices[max_i]-prices[min_i])
                    maxprofit=prices[max_i]-prices[min_i];
            }
        }
    }
    if(max_i==-1) return 0;
    return maxprofit;
}
int main(){
    int nums[]={2,4,1};
    vector<int> prices;
    prices.assign(nums,&nums[3]);
    for (vector<int>::const_iterator iter = prices.begin(); iter != prices.end(); iter++)
    {
        cout << (*iter) << endl;
    }
    cout<<maxProfit(prices)<<endl;
    system("pause");
    return 0;
}
