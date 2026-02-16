#include <iostream>
using namespace std;

// int main()
// {
//     int i = 1;
//     while(i <= 10)
//     {
//         cout << i ;
//         i++;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     // cout << n % 10 << (n /10) % 10 << ((n /10) / 10) % 10 <<  (((n /10) / 10) / 10)  << endl;
//     while(n > 0)
//     {
//         cout << n % 10 << " ";
//         n /= 10;
//     }
//     return 0;
// }

//数位之和
// int main()
// {
//     int n,sum = 0;
//     cin >> n;
//     while(n)
//     {
//         sum += n % 10;
//         n /= 10;
//     }
//     cout << sum << endl;
//     return 0;
// }

//涉及各个数位的题目用while模板

//求和
// int main ()
// {
//     int n, i=1;
//     long long sum = 0;
//     cin >> n;
//     while (i <= n)
//     {
//         sum += i;
//         i++;
//     }
//     cout << sum << endl;
// }
//务必不要忘记i++！！！！！！
//不开longlong见祖宗！！！！！

// int main ()
// {
//     int cnt = 0, k = 0;
//     long long m = 0;
//     cin >> m >> k;
//     while(m)
//     {
//         if(m % 10 == 3)
//         {
//             cnt++;
//         }
//         m /= 10;
//     }
//     if(cnt == k)
//     {
//         cout << "yes" << endl;
//     }
//     else
//     cout << "no" << endl;

//  return 0;
// }

//角谷猜想
// int main ()
// {
//     long long n;
//     cin >> n;
//     while (n != 1)
//     {
//         if(n % 2 == 0)
//         {
//             cout << n << "/2=" << n / 2 << endl;
//             n = n / 2;
//         }
//         else
//         {
//             cout << n << "*3+1=" << n * 3 + 1 << endl;
//             n = n * 3 + 1;
//         }
//     }
//     cout << "End" << endl;
//  return 0;
// }

//规律性如等差等比，分段无限运算考虑用while，所以while的关键词就是规律，找到规律就可以用while简化

#include <cmath>
#include <cstdio>
int main ()
{
    int n = 0, i = 1;
    float x = 0;
    cin >> x >> n;
    double sum = 1;
    while(i <= n)
    {
        sum += pow (x,i);
        i++;
    }
    printf  ("%.2f", sum);
 return 0;
}
//格式化输出占位符是 %d %lld %f %Lf %c %s
//格式化输出的占位符是 %d %lld %f %lf %Lf %c %s