#include <iostream>
using namespace std;
int main()
{
    int i, j;
 string a , k , m;
	getline(cin , a);
	j = a.length();
    for (i = j - 1; i >= 0; --i)
    {if ((a[i]) > 64)
        {if ((a[i]) < 91)
            {k += a[i];
            }}
		if ((a[i]) > 96)
        {if ((a[i]) < 123)
            {k += a[i] - 32;
            }}
		if ((a[i])> 47 )
        {if ((a[i])< 58 )
            {k += a[i];}}}
    p = k.length();
    for (i = j - 1; i >= 0; i--)
    {m += k[i];}
    if (m == k)
    {cout << '1';}
	else
    {cout << '0';}
	cin.get();

	return 0;
}
