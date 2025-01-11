#include<iostream>
using namespace std;
int main()
{
    int dial;
    cin>>dial;
    if(dial==61)
        cout<<"Brasilia"<<endl;
    else  if(dial==71)
        cout<<"Salvador"<<endl;
    else if(dial==11)
        cout<<"Sao Paulo"<<endl;
    else if(dial==21)
        cout<<"Rio de Janeiro"<<endl;
    else if(dial==32)
        cout<<"Juiz de Fora"<<endl;
    else if(dial==19)
        cout<<"Campinas"<<endl;
    else if(dial==27)
        cout<<"Vitoria"<<endl;
    else if(dial==31)
        cout<<"Belo Horizonte"<<endl;
    else
        cout<<"DDD nao cadastrado"<<endl;

    return 0;
}
