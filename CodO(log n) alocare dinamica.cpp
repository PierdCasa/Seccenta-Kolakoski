#include <fstream>
#include <iostream>


using namespace std;

ofstream g("KolakoskiLogN.out");

unsigned long long int n;

unsigned long long int* p;

unsigned short int increment(unsigned long long int k)
{
    if(p[k]==0)
        p[k]=22;
    if(p[k]==11)
        {p[k]=1;
        return 1;}
    else if(p[k]==22)
    {
        p[k]=2;
        return 2;
    }
    else if(p[k]==1)
    {
        p[k]=increment(k+1)==1?2:22;
        return 2;
    }
    else if(p[k]==2)
    {
        p[k]=increment(k+1)==1?1:11;
        return 1;
    }
    return 0;
}
int main()
{
    cin>>n;
    p=new unsigned long long int[n];
    if(n>=1)
    g<<1;
    if(n>=2)
    g<<2;
    if(n>=3)
    {for(int i=0;i<n-2;++i)
        {g<<increment(0);}
    }
    //OBSERVATIE INPUTUL ESTE -3;
    delete[] p;
    g.close();
    /*
    122112122122112112212112122112112122122112122

    1221121221221121122121121221121121221221121221
    */
    return 0;
}
