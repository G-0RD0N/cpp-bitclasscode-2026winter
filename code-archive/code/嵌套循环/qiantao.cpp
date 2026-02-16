#include <iostream>
using namespace std;

// //打印乘法表
// #include <cstdio>
// int main()
// {
//     for(int i = 1; i <= 9; i++)
//     {
//         //打印一行
//         for(int j = 1; j <= i; j++)
//         {
//             //打印一项
//             //printf("%d*%d=%d ",j,i,j * i);这个方法可能对不齐
//               printf("%d*%d=%2d",j,i,j * i);
//         }
//         cout << endl;//换行
//     }
//     return 0;
// }


// //包含9的数字
// int main()
// {
//     int cnt = 0;
//     for(int i = 1; i <= 2019; i++)
//     {
//         int j = i;
//         //切忌在内层改变外层循环变量的值
//         while(j)
//         {
//             if(j % 10 == 9)
//             {
//                 cnt++;
//                 break;
//             }
//             j /= 10;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }

//斐波那契数列      
// int main()
// {
//     int n = 0, m = 0;
//     cin >> n;
//     // for(int i = 1; i <= n; i++)
//     // {
//     //     cin >> m;
//     //     if(m == 1 || m == 2)
//     //     {
//     //         cout << 1 << endl;
//     //         continue;
//     //     }
//     //     int p = 1, q = 1, sum = 0;
//     //     for(int j = 3; j <= m; j++)
//     //     {
//     //         sum = p + q;
//     //         q = sum;
//     //         p = q - p;
//     //     }
//     //     cout << sum << endl;

//     // }
//     while(n--)//循环n次
//     {
//         cin >> m;
//         int x = 1, y = 1, z = 1;
//         while(m >= 3)//相当于从3数到m
//         {
//             z = x + y;
//             //变量调整，包括提供“重复”的变量m和“支持下次循环运算”的变量x和y
//             x = y;
//             y = z;
//             m--;
//         }
//         cout << z << endl;
//     }
//     return 0;
// }


//求e的值，本质上是累加问题，其中阶乘可以和累加共用一个循环
// #include <cstdio>
// int main()
// {
//     int n = 0;
//     cin >> n;
//     long long pro = 1;
//     double sum = 1;
//     for(int i = 1; i <= n ; i ++)
//     {
//         pro *= i;
//         sum += (1.0) / pro;
//     }
//     printf("%.10lf\n",sum);
//     return 0;
// }


//打印直角三角形
// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j <= i; j ++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

//打印矩形
//打印有一定形状的图形时（如空心矩形），应当先搞一个矩形，再加限制条件即可
// int main()
// {
//     int a = 0, b = 0, f = 0;
//     char c;
//     cin >> a >> b >> c >> f;
//     for(int i = 0; i < a; i ++)
//     {
//         for(int j = 0; j < b; j ++)
//         {
//             if((f == 0 && (i == 0 || i == a-1 || j == 0 || j == b-1))||(f == 1))
//             {
//                 cout << c;
//             }
//             else
//                 cout << " ";
//                 //一定要用空格占位，i，j只有所有情况都打印出来才能代表行列数
//         }
//         cout << endl;
//     }

//     return 0;
// }

//寻找第n小的质数
// #include <cmath>
// int main()
// {
//     int n = 0, cnt = 0, i = 2;
//     cin >> n;
//     while(1)//创建数列
//     {
//         int flag = 1;//假设i是素数
//         //2,3根本不需要验证
//         for(int j = 2; j <= sqrt(i); j ++)//验证素数
//         {
//             if(i % j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag)
//             cnt ++;
//         if(cnt == n)//终止条件
//             break;
//         i++;
//     }
//     cout << i << endl;
//     return 0;
// }
//对于素数的验证一般是先flag假设是素数，再用for2-sqrtn的方法排除不是的（2.3自动跳过），再根据flag确定
//生成自然数列至某个符合条件的数：while（1）{if（）break；}

#include <cmath>
int main()
{
    int a = 0, b = 0, c = 0;// sum = 0;sum放在这里是错误的
    for(int x = 100; x < 1000; x ++)
    {
        int sum = 0;//注意储存累加的变量是针对全部的（放生成循环外面）还是针对一个数的（放生成循环里面）
        int y = x;
        while(y)
        {
            sum += pow(y % 10, 3);
            y /= 10;
        }
        if(sum == x)
            cout << x << endl;
    }
    return 0;
}