#include <iostream>
using namespace std;

// int main()
// {
//     int i = 1;
//     do
//     {
//         cout << i << " ";
//         i++;
//     } while (i <= 10);
    
//     return 0;
// }

//统计正整数的位数
int main()
{
    //考虑使用除10来分析位数，1234/10，123/10，12/10，1/10
    //因为任何一个数字至少是1位数，所以do while 更合适
    int cnt = 0, x = 0;
    cin >> x;
    do
    {
        x /= 10;
        cnt++;
    } while (x > 0);
    cout << cnt;
    return 0;
}
//所以do while 是否适用应当考虑边缘的微观情况，如1位数