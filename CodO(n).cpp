
#include <iostream>
#include <fstream>


using namespace std;

ofstream g("KolakoskiN.out");

int main()
{
    int A[10001],n,i=2,j=2;
    cin>>n;
    A[1]=1;
    A[2]=2;
    while(i<=n)
    {
        if(A[j]==1)
        {

            A[i]=A[i-1]==1?2:1;
            i++;
            j++;
        }
        else
        {
            A[i]=A[i-1]==1?2:1;
            A[i+1]=A[i];
            i+=2;
            j++;
        }
    }
    for(int i=1;i<=n;++i)
        g<<A[i];
    g.close();

    return 0;
}
