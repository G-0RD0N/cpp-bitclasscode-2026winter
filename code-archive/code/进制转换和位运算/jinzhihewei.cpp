#include <iostream>
using namespace std;

// //10进制转x进制
// //思路：1、输入n，x 2、利用递归和对应字符打印出x进制字符
// string a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// void d_x(int n, int x)
// {
//     if(n >= x)
//          d_x(n / x, x);// 500 250 125 62 31 15 7 3 1
//     cout << a[n % x]; //这样写更简便
// }

// int main()
// {
//     int n = 0;
//     int x = 0;
//     cin >> n >> x;
//     d_x(n, x);
//     return 0;
// }

// //x进制转10进制
// #include <string>
// #include <cmath>
// int main()
// {
//     int x = 0;
//     int ret = 0;
//     string s;
//     cin >> x >> s;
//     int sz = s.size() - 1;
//     for(int i = sz; i >= 0; i --)
//     {
//         if(s[i] >= 'A' && s[i] <= 'Z')
//             ret += (s[i] - 'A' + 10) * pow(x, sz - i);
//         if(s[i] >= '0' && s[i] <= '9')
//             ret += (s[i] - '0') * pow(x, sz - i);
//     }
//     cout << ret << endl;
//     return 0;
// }

// //奇数偶数判断
// int main()
// {
//     int n = 0;
//     cin >> n;
//     // if(n % 2 == 0)
//     //     cout << "even" << endl;
//     // else 
//     //     cout << "odd" << endl;
//     if((n & 1) == 1)
//         cout << "odd" << endl;
//     else
//         cout << "even" << endl;
//     return 0;
// }

// //颠倒二进制数
// //考察用&1获取位，用|覆盖位
// #include <cstdint>
// uint32_t reversebits(uint32_t n)
// {
//     //获取从右到左的每一位的值，并且将其存放在b里正确的位置，最后把b覆盖n
//     int i = 0;
//     for(i = 0; i < 32; i ++)
//     {
//         uint32_t b = (n >> i) & 1;
//         n |= b << (31 - i);
//     }
//     return n;

// }
// int main()
// {
//     uint32_t n = 0;
//     cin >> n;
//     uint32_t ret = reversebits(n);
//     cout << ret << endl;
// }

// //寻找补数：二进制取反再化十进制
// //核心代码模式
// // //利用数学方法
// // #include <cmath>
// // class solution
// // {
// //     int findcomplement(int num)
// //     {
// //         for(int i = 0; i <= 32; i ++)
// //         {
// //             if(num <= pow(2, i))
// //             {
// //                 return pow(2, i) - num;
// //             }
// //         }
// //     }
// // };

// //利用位运算方法
// #include <cmath>
// class solution
// {
//     int findcomplement(int num)
//     {
//         int ret = 0;
//         int i = 0;
//         while(num)
//         {
//             if((num & 1) == 0)
//             {
//                 ret /= (1 << i);
//             }
//             num = num >> 1;
//             i ++;
//         }
//     }
// };


// //编写一个函数，可以计算二进制数中设置位的个数（位1的个数），也称汉明重量
// class solution
// {
//     int hammingnum(int num)
//     {
//         int cnt = 0;
//         while(num)
//         {
//             num = (num & (num - 1));
//             cnt ++;
//         }
//         return cnt;
//     }
// };

//2的幂
//发现所有2的幂，其二进制序列都只有一个1,而且2的幂一定>=1
//利用x = x & (x - 1)
// class solution
// {
//     bool ispowerof2(int n)
//     {
//         int cnt = 0;
//         while(n)
//         {
//             n = (n & (n - 1));
//             cnt ++;
//         }
//         return (n >= 0) && (cnt == 1);
//         //注意负数补码中-128等数字也只有一个1
//     }
// };

// //利用x & -x
// class solution
// {
//     bool ispowerof2(int n)
//     {
//         return (n > 0) && (n & -n == n);
//     }
// };

// //异或的应用
// //交换两个变量
// int main()
// {
//     int a = 3;
//     int b = 5;
//     a = a ^ b ^ a;
//     b = a ^ b ^ a;
//     a = a ^ b ^ a;
//     cout << a << " " << b << endl;
//     return 0;
// }