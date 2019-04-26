#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int T;
	cin>>T;
    while(T>0)
    {
      int n;
      cin>>n;
      bitset<32> binary(n);
     cout<<binary.count();
     T--;
    }
    return 0;
}
