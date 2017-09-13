//
// Created by Administrator on 2017/9/13.
//

#include <iostream>
using namespace std;
int main(){

    int a = 2;
    int b = 10;
    a = a*b*b+(++a);
    cout<<a<<endl;
    return 0;
}