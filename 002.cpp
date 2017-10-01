#include <iostream>
using namespace std;
int main()
{
    int i, j;
 string a , b , c;
	getline(cin , a);
	j = a.length();
    for (i = j - 1; i >= 0; --i)
    {if ((a[i]) > 64)
        {if ((a[i]) < 91)
            {b += a[i];
            }}
		if ((a[i]) > 96)
        {if ((a[i]) < 123)
            {b += a[i] - 32;
            }}
		if ((a[i])> 47 )
        {if ((a[i])< 58 )
            {b += a[i];}}}
   j = b.length();
    for (i = j - 1; i >= 0; i--)
    {c += b[i];}
    if (c == b)
    {cout << '1';}
	else
    {cout << '0';}
	cin.get();

	return 0;
}
