#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int get_priority(char c){
    const char prior_flag[]={'M','D','C','L','X','V','I'};
    static int length=sizeof(prior_flag)/sizeof(char);
    for(int i=0;i<length;i++){
        if(c==prior_flag[i]) return i;
    }
    return -1;
}
#include <assert.h>
int process_unit(string s){
    if(s=="IX") return 9;
    int ones=0;
    bool exist_V=false;
    for(int i=0;i<s.length();i++){
        if (s[i]=='I') {
            ones+=1;
            assert(ones!=4);
        }
        else if(s[i]=='V'){
            assert(exist_V==false);
            exist_V=true;
            if (ones!=0)// I in V's left
                ones=-ones;
        }
    }
    if(exist_V) ones+=5;
    return ones;
}
int process_decade(string s){

    bool exist_L=false;
    int decades=0;
    int unit=0;
    int i=0;
    if(s.substr(0,2)=="XC"){
        decades=90;
        i=2;
    }
    else{
        for(i=0;i<s.length();i++){
            if(s[i]=='X') {
                decades+=10;
                assert(decades!=40);
            }
            else if(s[i]=='L'){
                assert(exist_L==false);
                exist_L=true;
                if (decades!=0)// left
                    decades=-decades;
            }
            else break;
        }
    }
    if (i!=s.length()){
        string u=s.substr(i,s.length());
        cout<<"u: "<<u<<endl;
        unit=process_unit(u);
    }
    if(exist_L) decades+=50;
    return decades+unit;
}
int process_hundred(string s){
    bool exist_D=false;
    int hundreds=0;
    int decade=0;
    int i=0;
    if(s.substr(0,2)=="CM"){
        hundreds=900;
        i=2;
    }
    else{
        for(i=0;i<s.length();i++){
            if(s[i]=='C') {
                hundreds+=100;
                assert(hundreds!=400);
            }
            else if(s[i]=='D'){
                assert(exist_D==false);
                exist_D=true;
                if (hundreds!=0)// left
                    hundreds=-hundreds;
            }
            else break;
        }
    }
    if (i!=s.length()){
        string d=s.substr(i,s.length());
        cout<<"d: "<<d<<endl;
        decade=process_decade(d);
    }
    if(exist_D) hundreds+=500;
    return hundreds+decade;
}
int process_thousand(string s){
    int thousands=0;
    int hundred=0;
    int i=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='M') {
            thousands+=1000;
            assert(thousands!=400);
        }
        else break;
    }

    if (i!=s.length()){
        string h=s.substr(i,s.length());
        cout<<"h: "<<h<<endl;
        hundred=process_hundred(h);
    }

    return thousands+hundred;
}
int main(){
    string prior_flag[]={"MCDXCIX","MMDCCXVI","MMMCDCII","MCXCIX","MDCCXIX","MMDCXVII","MMMDCCC"};
    for(int i=0;i<7;i++)
        cout<<process_thousand(prior_flag[i])<<endl;
    system("pause");
    return 0;
}
