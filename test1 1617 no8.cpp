#include<iostream>
using namespace std;

int main()
{
    int n;
    for (n = 110; n < 200; n+=10)
    {
        if ( n == 120 || n == 150) 
        continue;
        cout << n << endl;

        if (n > 160) 
        break;
    }
    cout << "The last value of n is " << n << endl;
    system("pause");
}
