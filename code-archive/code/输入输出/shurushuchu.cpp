#include <iostream>
using namespace std;

//单组测试用例：每次测试只测试一组数据
// //计算（a+b）/ c 的值
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << (a + b) / c << endl;
//     return 0;
// }

// //与7无关的数的平方和
// //思路：1、输入n 2、产生1-n的数字 3、判断是否与7相关 4、无关则累加 5、输出
// int main()
// {
//     int n = 0;
//     long long sum = 0;
//     cin >> n;
//     int i = 1;
//     while(i <= n)
//     {
//         int flag = 0;
//         int a = i;
//         while(a)
//         {
//             if(a % 10 == 7)
//             {
//                 flag = 1;
//                 break;
//             }
//             a /= 10;
//         }
//         //注意观察数据范围，若n <= 100，则可以不用上述循环，直接添加条件 i / 7 != 0即可
//         if(i % 7 != 0 && flag == 0) //注意题目描述的是反命题：能被7整除 或 十进制某一位有7；
//         //需要转换成：不能被7整除 且 每一位都无7
//         {
//             sum += i * i;
//         }
//         i ++;
//     }
//     cout << sum << endl;
//     return 0;
// }

// //多组测试用例,已知测试组数，一般使用while（n--）的循环方法，或者使用数组储存每次数据再循环输出
// //多组求和
// int main()
// {
//     int n = 0;
//     cin >> n;
//     while(n--)
//     {
//         int a = 0;
//         int b = 0;
//         cin >> a >> b;
//         cout << a + b << endl;
//     }
//     return 0;
// }

// // //斐波那契数列
// // int main()
// // {
// //     int n = 0;
// //     int a = 0;
// //     cin >> n;
// //     while(n--)
// //     {
// //         //寻找第a个斐波那契数
// //         cin >> a;
// //         if(a == 1)
// //         {
// //             cout << 1 << endl;
// //             continue;
// //         }
// //         if(a == 2)
// //         {
// //             cout << 1 << endl;
// //             continue;
// //         }
// //         int x = 1;
// //         int y = 1;
// //         int z = 0;
// //         int i = a - 2;
// //         while(i --)
// //         {
// //             z = x + y;
// //             x = y;
// //             y = z;
// //         }
// //         cout << z << endl;
// //     }
// //     return 0;
// // }
// // //循环方法如上
// //数组方法如下
// const int N = 40;
// int arr[N] = {0, 1, 1};
// int n;
// int a;
// int main()
// {
//     for(int i = 3; i <= 30; i ++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     cin >> n;
//     while(n--)
//     {
//         cin >> a;
//         cout << arr[a] << endl;
//     }
//     return 0;
// }

// //字符串的子串比较
// #include <string>
// int q;
// int l1,l2;
// int t1,t2;
// int main()
// {
//     string s;
//     string t;
//     cin >> s >> t >> q;
//     while(q--)
//     {
//         cin >> l1 >> t1 >> l2 >> t2;
//         int len1 = t1 - l1 + 1;
//         int len2 = t2 - l2 + 1;
//         if(s.substr(l1 - 1, len1) < t.substr(l2 - 1, len2))
//             cout << "yifusuyi" << endl;
//         else if(s.substr(l1 - 1, len1) > t.substr(l2 - 1, len2))
//             cout << "erfusuer" << endl;
//         else
//             cout << "ovo" << endl;
//     }
//     return 0;
// }

// //多组测试样例，未知组数，一般用while（cin）结构解决
// //查找数字
// const int N = 25;
// int arr[N];
// int flag = 0;
// int main()
// {
//     int n = 0;
//     while(cin >> n)
//     {
//         for(int i = 0; i < n; i ++)
//         {
//             cin >> arr[i];
//         }
//         int m = 0;
//         cin >> m;
//         for(int i = 0; i < n; i ++)
//         {
//             if(arr[i] == m)
//             {
//                 cout << i << endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0)
//             cout << "No" << endl;
//         else
//             flag = 0;
//     }
    
//     return 0;
// }

// //多组测试样例，特殊值结束输入
// //字符统计
// #include <string>
// #include <cctype>
// string s;
// int letter;
// int digit;
// int others;
// int main()
// {
//     getline(cin, s, '?');
//     for(auto e : s)
//     {
//         if(islower(e) || isupper(e))
//             letter ++;
//         else if(isdigit(e))
//             digit ++;
//         else
//             others ++;
//     }
//     cout << "Letters=" << letter << endl;
//     cout << "Digits=" << digit << endl;
//     cout << "Others=" << others << endl;

//     return 0;
// }

// //a + b
// int main()
// {
//     int a = 0;
//     int b = 0;
//     while(cin >> a >> b)
//     {
//         if(a == 0 && b == 0)
//             break;
//         cout << a + b << endl;
//     }
//     return 0;
// }


// //数字的奇偶数按数位判断
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int len = s.size();
//     for(int i = 0; i < len; i ++)
//     {
//         if(s[i] % 2 == 0)
//             s[i] = '0';//细节
//         else
//             s[i] = '1';//重要细节
//     }
//     //巧用字符串解决数字按数位操作问题应当注意使用赋值的数字为数字字符，需要加‘’
//     //注意到数和数的ASII码值奇偶性相同
//     cout << stoi(s) << endl;

//     return 0;
// }