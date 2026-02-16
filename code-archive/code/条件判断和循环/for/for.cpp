#include <iostream>
using namespace std;

// int main ()
// {
//     for(int i = 0; i < 10; i++)
//     {
//         cout << i + 1 << " ";
//     }
//     return 0;
// }
//此时的i只能在for循环中使用
//循环可用于产生规律性数列

//有约束条件的求和：先产生，再约束判断，最后求和
// int main ()
// {
//     int sum = 0;
//     for(int i = 1; i <= 100; i++)
//     {
//         if(i % 3 == 0)
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }
//调试时可以调整这个“100”来检查
//也可以只产生3的倍数的数字
// int main()=
// {
//     int sum = 0;
//     for(int i = 3; i <= 100; i += 3)
//     {
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }

//平均年龄
//规律性输入有时不需要开空间储存，而是利用循环计算其产物
// #include <cstdio>

// int main()
// {
//     int n = 0, sum = 0;
//     double avg = 0;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         int x = 0;
//         cin >> x;
//         sum += x;
//     }
//     avg = (sum * 1.0) / n;
//     printf("%.2lf",avg);
//     return 0;
// }

// //奖牌数统计
// //循环用于解决n行相同算法的问题
// int main()
// {
//     int n = 0, a = 0, b = 0, c = 0;
//     int gold = 0, silver = 0, bronze = 0;
//     cin >> n;
//     //按规律储存变量并累加
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> a >> b >> c;
//         gold += a;
//         silver += b;
//         bronze += c;
//     }
//     int total = gold + silver + bronze;
//     cout << gold << " " << silver << " " << bronze << " " << total << endl;
//     //切忌忽略空格
//     return 0;
// }

//同上，鸡尾酒疗法与其他疗法的对比
// int main()
// {
//     int n = 0, a = 0, b = 0;
//     double x = 0, y = 0;
//     cin >> n;
//     cin >> a >> b;
//     x = (b * 1.0)/ a;
//     for(int i = 2; i <= n; i++)
//     {
//         cin >> a >> b;
//         y = (b * 1.0) / a;
//         if(x - y > 0.05)
//             cout << "worse" << endl;
//         else if(y - x > 0.05)
//             cout << "better" << endl;
//         else
//             cout << "same" << endl;
//     }
//     return 0;
// }
//这种方法一般是输入一组输出一组，虽然怪怪的，但是可行，因为检测时是输入输出分离的


//平面直角坐标系下的规律性问题
// #include <cmath>
// int main()
// {
//     int n = 0,r = 0;
//     // int T = 0;
//     double x = 0, y = 0, z = 0, t = 0;
//     cin >> n;
//     for(int i =1; i <= n; i++)
//     {
//         cin >> x >> y >> r;
//         z = sqrt(pow(x,2)+pow(y,2));
//         t += z * 2 / 50 + r * 1.5;
//     }
//     // T=(int)t + 1;
//     // cout << T << endl;
//     cout << (int)ceil(t) << endl;
//虽然ceil负责向上取整，但是需要强制类型转换

//     return 0;
// }
//注意审题，分辨求的是什么时间，总时间的话就累加


//规律性累加
// #include <cmath>
// #include <cstdio>
// int main()
// {
//     int n = 0;
//     cin >> n;
//     //int flag = 1;
//     double sum = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         sum += pow(-1.0,i * 1.0 -1) *(1.0 / i);
//         //sum += flag * (1.0 / i);
//         //flag = - flag;
//         //加减交替的方法
//     }
//     printf("%.4lf",sum);
//     return 0;
// }

//特殊数列，尤其是后项与前项有关的求和或求项
// #include <cstdio>
// int main()
// {
//     int n = 0;
//     double sum = 0, p = 1, q = 2, t = 0;//首项
//     cin >> n;
//     for(int i = 1; i <= n; i++)
//     {
//         sum += p / q;
//         t = q;
//         q = p;
//         p = p + t;
//     }
//     printf("%.4lf\n",sum);
//     return 0;
// }
/*设计循环时如果不是简单的规律可以只让i承担“重复”的工作，
剩下的“初始化变量”和“变量调整”可以另设变量来完成，更加灵活*/

