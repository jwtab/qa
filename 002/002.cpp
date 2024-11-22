
#include <iostream>
#include <vector>

using namespace std;

int find_peaks(vector<int> &hills);

int main(int argc,char **argv)
{
    vector<int> hills;

    int hill = 0;

    while(cin>>hill)
    {
        hills.push_back(hill);

        if(cin.get() == '\n')
        {
            break;
        }
    }

    cout<<"All hills hegiht is :"<<endl;
    for(auto &i : hills)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Peaks count is "<<find_peaks(hills)<<endl;

    return 0;
}

int find_peaks(vector<int> &hills)
{
    int count = 0;

    for(int index = 0; index < hills.size(); index++)
    {
        //第一个大于第二个.
        if(0 == index && 
            hills[index] > hills[index+1])
        {
            count++;
        }

        //最后一个大于倒数第二个.
        if(index == hills.size() - 1 && 
            hills[index] > hills[index-1])
        {
            count++;
        }

        //一个位置大于左右两个位置.
        if( index > 0 && index < hills.size() -1 &&
            hills[index] > hills[index-1] && hills[index] > hills[index+1])
        {
            count++;
        }
    }

    return count;
}
