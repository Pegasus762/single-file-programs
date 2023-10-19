#include <iostream>
using namespace std;
int main()
{
	int i;
	for(int i = 1; i > 0; i++)
	{
		if (i >= 35 )
		break;
		cout << i << "\n";
		i *= 2;
        system("pause");
	}
}