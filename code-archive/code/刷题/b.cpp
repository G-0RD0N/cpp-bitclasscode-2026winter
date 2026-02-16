#include <iostream>
using namespace std;
string x;
    
int main ()
{
    bool flag = true;
    cin >> x;    
    int n = x.size();
    for (int i = 0; i < n / 2; i++)
    {
        if(x[i] != x[n-1-i])
        {
            flag = false;
            break;
        }     
    }  
    cout << boolalpha << flag << endl;    
    return 0;
}