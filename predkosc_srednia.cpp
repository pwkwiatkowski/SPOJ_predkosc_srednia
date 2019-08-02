#include <iostream>

using namespace std;

int main()
{
    int l_zes_danych;
    float v1,v2,vsr;

    cin>>l_zes_danych;

    for(int i=1; i<=l_zes_danych; i++)
    {
    cin>>v1>>v2;
    vsr = (2*v1) / (1+(v1/v2));
    cout<<vsr<<endl;
    }

    return 0;
}
