
#include <iostream>
#include <string>
using namespace std;

int find_str_pos(string &s,string &l);

int main(int argc,char ** argv)
{
    string S,L;

    cout<<"请依次输入S,L两个字符串:"<<endl;
    getline(cin,S);
    getline(cin,L);

    cout<<"S = "<<S<<endl
        <<"L = "<<L<<endl;
    
    cout<<"S last pos in L is "<<find_str_pos(S,L)<<endl;

    return 0;
}

int find_str_pos(string &S,string &L)
{
    int indexS = 0;
    int indexL = 0;

    while(indexS < S.length() && indexL < L.length())
    {
        if(S[indexS] == L[indexL])
        {
            indexS++;
        }

        indexL++;
    }

    //S已经全部遍历完成.
    if(indexS == S.length())
    {
        return indexL - 1;
    }

    return -1;
}
