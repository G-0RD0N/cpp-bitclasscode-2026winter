#include <iostream>
using namespace std;
//分解质因数
int main()
{
    int n = 0, m1 = 0;
    cin >> n;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            m1 = i;
            break;
        }
    }
    cout << n / m1 << endl;
    return 0;
}
//涉及质因数分解的题目一般要用到%和穷举法（ 本质：循环+break）