#include <iostream>
using namespace std;

// //简单计算器
// int calc(int x, char z, int y);

// int main()
// {
//     int a = 0, b = 0;
//     char c;
//     cin >> a >> c >> b;
//     cout << calc(a, c, b) << endl;
//     return 0;
// }

// int calc(int x, char z, int y)
// {
//     switch(z)
//     {
//         case '+': return x + y;
//         case '-': return x - y;
//         case '*': return x * y;
//         case '/': return x / y;
//         case '%': return x % y;
//     }
// }

// //最大值分式
// #include <algorithm>
// int max(int a, int b, int c);

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     double ans = 0;
//     cin >> a >> b >> c;
//     ans = max(a, b, c) * 1.0 /(max(a + b, b, c) * max(a, b, b + c));
//     printf("%.3lf\n",ans);
//     return 0;
// }

// // int max(int a, int b, int c)
// // {
// //     if(a > b)
// //         return a > c ? a : c;
// //     else
// //         return b > c ? b : c;
// // }

// int max(int a, int b, int c)
// {
//     if(a > b)
//         return max(b, c);
//     else
//         return max(a, c);
// }

// //最大值与最小值的差
// int main()
// {
//     int n = 0;
//     int _min = 0;
//     int _max = 0;
//     int num = 0;
//     cin >> n >> _min;
//     _max = _min;
//     n -= 1;
//     while(cin >> num, n--)
//     {
//         if(num > _max)
//             _max = num;
//         if(num < _min)
//             _min = num;
//     }
//     cout << _max - _min << endl;
//     return 0;
// }

// //歌唱比赛
// //思路：1、输入n，m 2、循环n次计算每人的均分，并和当前最高分比较取大 3、输出最高分
// //每次均分的计算：循环m次每次输入一个值与当前最大最小值比较并分别取大取小，然后累加，最后减去最大最小值 / m - 2
// #include <algorithm>
// int n;
// int m;

// double avg();

// int main()
// {
//     double score = 0;
//     double _max = 0;
//     cin >> n >> m;
//     while(n --)
//     {
//         score = avg();
//         _max = max(score, _max);
//     }
//     printf("%.2lf\n",_max);
//     return 0;
// }

// double avg()
// {
//     int r = 0;
//     int _max = 0;
//     int  _min = 10;
//     int sum = 0;
//     while( m --)
//     {
//         cin >> r;
//         sum += r;
//         _max = max(r, _max);
//         _min = min(r, _min);
//     }
//     return (sum - _max - _min) * 1.0 / (m - 2);
// }
// //err

// //second attempt
// #include <algorithm>
// int main()
// {
//     int n = 0;
//     int m = 0;
//     cin >> n >> m;
//     double top = 0;
//     for(int i = 0; i < n; i ++)
//     {
//         //每一个人
//         int s = 0;
//         int sum = 0;
//         int _max = 0;
//         int _min = 10;
//         double r = 0;
//         for(int j = 0; j < m; j ++)
//         {
//             cin >> s;
//             sum += s;
//             _max = max(s, _max);
//             _min = min(s, _min);
//         }
//         r = (sum - _max - _min) * 1.0 / (m - 2);
//         top = max(r, top);
//     }
//     printf("%.2lf\n", top);
//     return 0;
// }

// //求2到n之间的完全数
// //思路：1、输入n 2、for（int i = 2； i <= n; i ++）【if（sum = i）cout】3、for（int j = 1； j < i; j ++）【if（整除）sum += j】
// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 2; i <= n; i ++)
//     {
//         int sum = 0;
//         for(int j = 1; j < i; j ++)
//         {
//             if(i % j == 0)
//                 sum += j;
//         }
//         if(sum == i)
//             cout << i << endl;
//     }
//     return 0;
// }

// //初筛甲流病人
// #include <string>
// bool jialiu(float t, int flag)
// {
//     return t >= 37.5 && flag == 1;
// }

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int cnt = 0;
//     while(n --)
//     {
//         //对于每个病人，姓名name，体温float t, 咳嗽int flag
//         string name;
//         float t = 0;
//         int flag = 0;
//         cin >> name >> t >> flag;
//         if(jialiu(t, flag))
//         {
//             cnt ++;
//             cout << name << endl;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }

// //2~n中的素数个数
// #include <cmath>
// bool is_prime(int i)
// {
//     int flag = 1;
//     for(int j = 2; j <= sqrt(i); j ++)
//     {
//         if(i % j == 0)
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag == 1;
// }

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 2; i <= n; i ++)
//     {
//         //判断i是否素数并计数
//         if(is_prime(i))
//             cnt ++;
//     }
//     cout << cnt << endl;
//     return 0;
// }

// //素数对
// #include <cmath>
// const int N = 10000;
// int arr[N];
// bool is_prime(int i)
// {
//     int flag = 1;
//     for(int j = 2; j <= sqrt(i); j ++)
//     {
//         if(i % j == 0)
//             flag = 0;
//     }
//     return flag == 1;
// }
// int main()
// {
//     int n = 0;
//     cin >> n;
//     int m = 0;
//     for(int i = 2; i <= n; i ++)
//     {
//         if(is_prime(i))
//         {
//             arr[m] = i;
//             m ++;
//         }
//     }
//     int find = 0;
//     for(int i = 0; i < m; i ++)
//     {
//         if(arr[i + 1] - arr[i] == 2)
//         {
//             cout << arr[i] << " " << arr[i + 1] << endl;
//             find = 1;
//         }
//     }
//     if(find == 0)
//         cout << "empty" << endl;
// }

// //判断素数回文数
// #include <cmath>
// #include <string>
// #include <algorithm>

// bool is_prime(int i)
// {
//     int flag = 1;
//     for(int j = 2; j <= sqrt(i); j ++)
//     {
//         if(i % j == 0)
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag == 1;
// }

// bool is_pa(int i)
// {
//     string s = to_string(i);
//     string str = s.substr();
//     reverse(s.begin(), s.end());
//     return s == str;
// }

// int main()
// {
//     int n = 0;
//     int cnt = 0;
//     cin >> n;
//     for(int i = 11; i <= n; i ++)
//     {
//         if(is_prime(i) && is_pa(i))
//             cnt ++;
//     }
//     cout << cnt << endl;
//     return 0;
// }

// //m、n之间的反序素数
// #include <string>
// #include <algorithm>
// #include <cmath>

// bool is_prime(int i)
// {
//     int flag = 1;
//     for(int j = 2; j <= sqrt(i); j ++)
//     {
//         if(i % j == 0)
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag == 1;
// }

// int rev(int i)
// {
//     string s = to_string(i);
//     reverse(s.begin(), s.end());
//     return stoi(s);
// }

// int main()
// {
//     int m = 0;
//     int n = 0;
//     cin >> m >> n;
//     int flag = 1;
//     for(int i = m; i <=n; i ++)
//     {
//         //判断是否是反序素数
//         if(is_prime(i) && is_prime(rev(i)))
//         {
//             if(flag)
//             {
//                 cout << i;
//                 flag = 0;
//             }
//             else
//                 cout << "," << i;
//         }

//     }
//     if(flag)
//         cout << "No" << endl;
//     return 0;
// }

// //以下是递推的练习题
// //计算阶乘
// long long fact(int n)
// {
//     if(n == 0)
//         return 1;
//     else
//         return n * fact(n - 1);
// }
// int main()
// {
//     int n = 0;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }

// //递归计算自然数求和
// long long sum(int n)
// {
//     if(n == 1)
//         return 1;
//     else
//         return n + sum(n - 1);
// }
// int main()
// {
//     int n = 0;
//     cin >> n;
//     cout << sum(n) << endl;
//     return 0;
// }

// //阿克曼函数
// int a(int m, int n)
// {
//     if(m == 0)
//         return n + 1;
//     else if(n == 0)
//         return a(m - 1, 1);
//     else 
//         return a(m - 1,a(m, n - 1));
// }
// int main()
// {
//     int m = 0;
//     int n = 0;
//     cin >> m >> n;
//     cout << a(m, n) << endl;
//     return 0;
// }

//digit函数
#include <string>
// char digit(int m, int k)
// {
//     string s = to_string(m);
//     // 下标：0 1 2 3 4 5
//     // size：6  k：3
//     // 6 - 3  = 3 (sz - k)
//     return s[s.size() - k];
// }
//最方便写法如上
// int digit(int m, int k)
// {
//     if(k == 1)
//         return m % 10;
//     else
//         return digit(m / 10, k - 1);
// }
// // 这是练习递归的方法
// int main()
// {
//     int m = 0;
//     int k = 0;
//     cin >> m >> k;
//     cout << digit(m, k) << endl;
//     return 0;
// }


// //求f(x,n)
// #include <cmath>
// double f(double x,int n)
// {
//     if(n == 1)
//         return x;
//     else
//         return sqrt(n + f(x, n - 1));
// }
// int main()
// {
//     double x = 0;
//     int n = 0;
//     cin >> x >> n;
//     printf("%.2lf\n",f(x, n));
//     return 0;
// }

// //再求f（x，n）
// double f(double x, int n)
// {
//     if(n == 1)
//         return x / (1 + x);
//     else
//         return x / (n + f(x, n - 1));
// }
// int main()
// {
//     double x = 0;
//     int n = 0;
//     cin >> x >> n;
//     printf("%.2lf\n",f(x, n));
//     return 0;
// }

// //进制转换
// #include <string>
// string s = "0123456789ABCDEFG";
// string x_to_m(int x, int m)
// {
//     if(x < m)
//         return to_string(x);
//     else
//     {
//         string str;
//         str.push_back(s[x % m]);
//         return x_to_m(x / m, m) + str;
//     }
// }
// int main()
// {
//     int x = 0;
//     int m = 0;
//     cin >> x >> m;
//     cout << x_to_m(x, m) << endl;
//     return 0;
// }

// //另外一种更加简洁的方式
// #include <string>
// string s ="0123456789ABCDEF";
// void x_to_m(int x, int m)
// {
//     if(x < m)
//         cout << s[x];
//     else 
//     {
//         x_to_m(x / m, m);
//         cout << s[x % m];
//     }
// }
// int main()
// {
//     int x = 0;
//     int m = 0;
//     cin >> x >> m;
//     x_to_m(x, m);
//     return 0;
// }