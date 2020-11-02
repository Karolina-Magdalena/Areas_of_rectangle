#include <iostream>
#include <algorithm>

using namespace std;

int tabX[5], tabY[5], pow1, pow2, pow3,a,b;

int main()
{
    cin>>tabX[1]>>tabY[1]>>tabX[2]>>tabY[2];
    cin>>tabX[3]>>tabY[3]>>tabX[4]>>tabY[4];
    pow1=(tabX[2]-tabX[1])*(tabY[2]-tabY[1]);
    pow2=(tabX[4]-tabX[3])*(tabY[4]-tabY[3]);
    if ((tabY[2]<tabY[3])||(tabY[4]<tabY[1])) {b=0;}
    else
    {
        sort (tabY+1,tabY+5);
        b=tabY[3]-tabY[2];
    }
    if ((tabX[2]<tabX[3])||(tabX[4]<tabX[1])) {a=0;}
    else
    {
        sort (tabX+1, tabX+5);
        a=tabX[3]-tabX[2];
    }
    pow3=a*b;
    cout<<pow1+pow2-pow3<<endl;
    return 0;
}
