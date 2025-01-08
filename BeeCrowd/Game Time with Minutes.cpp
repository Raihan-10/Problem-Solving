#include<iostream>
using namespace std;

int main(){
int starthour,startminute,finalhour,finalminute;

int duration;

cin>>starthour>>startminute>>finalhour>>finalminute;
int startime = starthour*60+startminute;
int endtime = finalhour*60+finalminute;

if(startime == endtime)
    duration = 1440;
else if(endtime>=startime){
    duration = endtime-startime;
}
else {
        duration=(endtime + 1440)-startime;
}
cout<<"O JOGO DUROU "<<(duration/60)<<" HORA(S) E "<<(duration%60)<<" MINUTO(S)"<<endl;

return 0;
}
