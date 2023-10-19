#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 4; i++)
    {
        int j = i;
        while ( j >0 )
        {
            cout << "i= " << i << " j = " << j << endl;
            j--;
            system("pause");
        }
    }
}