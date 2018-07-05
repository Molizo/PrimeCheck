#include <iostream>

using namespace std;

int main()
{int d,n,prim;
    cout<<"Introduceti numarul:";
    cin>>n;
    d=2;
    prim=1;
    while(d<=n/2)
    {
        if(n%d==0)
        {
            prim=0;
        }
        if(n==1)
        {
            prim=0;
            break;
        }
        if(n==0)
        {
            prim=0;
            break;
        }
        d++;
    }
    cout<<endl<<endl<<endl;
    if(prim==1)
    {
        cout<<"Numarul "<<n<<" este prim."<<endl<<endl<<endl;
    }
    else
    {
        cout<<"Numarul "<<n<<" nu este prim."<<endl<<endl<<endl;
    }
    return 0;
}
