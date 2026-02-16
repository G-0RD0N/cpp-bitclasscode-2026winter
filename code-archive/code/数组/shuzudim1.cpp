#include <iostream>
using namespace std;


//查找第一个数的下标，考察int数组的访问，和初始化必须是常量（开辟过大的数组解决问题）
//更好的写法是在这里（全局创建数组），然后N是10010，防止越界报错
// int main()
// {
//     const int N = 10000;
//     int n = 0;
//     //输入一个n
//     cin >> n;
//     //输入一个数列
//     int arr[N] = {0};
//     for(int i = 0; i < n; i ++)
//     {
//         cin >> arr[i];
//     }
//     //需要查找的数
//     int x = 0;
//     cin >> x;
//     //查找第一次出现的下标
//     int flag = 1;
//     // int i = 0;
//     for(int i = 0; i < n; i ++)
//     {
//         if(arr[i] == x)
//         {
//             flag = 0;
//             cout << i << endl;
//             break;
//         }
//     }
//     //没查找到输出-1
//     if(flag == 1)
//         cout << -1 << endl;
//     return 0;
//     //也可以不用flag,但是此时需要在for外面定义i！！！！！
//     // if (i == n)
//     //     cout << -1 << endl;

//     }

//数组逆序填充
//考察双索引限制条件对于奇数偶数的适配性
//关键在于l<r的限制条件，可以同时排除=>
// const int N = 101;
// int arr[N] ={ 0 };

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int i = 0;
//     for(i = 0; i < n; i ++)
//     {
//         cin >> arr[i];
//     }
//     int l = 0, r = n-1, tmp = 0 ;
//     for(int l = 0; l < r; l ++)
//     {
//         tmp = arr[l];
//         arr[l] = arr[r];
//         arr[r] = tmp;
//         r --;
//     }
//     int j = 0;
//     for(j = 0; j < n; j ++)
//     {
//         cout << arr[j] << " " ;
//     }
//     cout << endl;
//     return 0;
// }


//计算点积
// const int N = 1010;
// int a[N];
// int b[N];

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int i = 0, j = 0;
//     for(i = 0; i < n; i ++)
//     {
//         cin >> a[i];
//     }
//     for(j = 0; j < n; j ++)
//     {
//         cin >> b[j];
//     }
//     int s = 0;
//     long long sum = 0;
//     for(s = 0; s < n; s ++)
//     {
//         sum += a[s] * b[s];
//     }
//     cout << sum << endl;
// }
//可优化，a数组必须要读完并存放，但是b数组可以读一个计算一个，不需要储存
// for(int j = 0; j < n; j ++)
// {
//     int x = 0;
//     cin >> x;
//     sum += x * arr[j];
// }

//统计年龄
// #include <cstdio>

// const int N = 110;
// int arr[N];

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int i = 0;
//     // for(i = 0; i < n; i ++)
//     // {
//     //     cin >> arr[i];
//     // }没有必要储存到数组中，只定义一个变量，输入一个计算一个即可
//     int j = 0;
//     int x[4] = {0}, age = 0;
//     for(j = 0; j < n ; j ++)
//     {
//         // age = arr[j];
//         cin >> age;
//         if(age <= 18)
//             x[0] ++;
//         else if(age <= 35)
//             x[1] ++;
//         else if(age <=60)
//             x[2] ++;
//         else
//             x[3] ++;
//     }
//     int k = 0;
//     for(k = 0; k < 4; k ++)
//     {
//         printf("%.2lf%%\n",(x[k] * 100.0) / n);
//     }
//     return 0;
// }


//开关灯

// const int N = 5050;
// int arr[N] = { 0 };

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int i = 1, j = 1;
//     for(i = 2; i <= n; i ++)//每个人编号
//     {
//         for(j = i; j <= n; j ++)//每盏灯编号
//         //j = i是一处涉及整除的优化，可以注意一下
//         {
//             if(j % i == 0)
//             {
//                 // if(arr[j] == 0)
//                 //     arr[j] = 1;
//                 // else
//                 //     arr[j] = 0;
//                 arr[j] = !arr[j];
//             }

//         }
//     }
//     for(j = 1; j <= n; j ++)
//     {
//         if(arr[j] == 0)
//             cout << j << " ";
//     }

//     return 0;
// }


//小鱼的可爱比赛
// const int N = 110;
// int arr[N];

// int main()
// {
//     int n = 0;
//     cin >> n;
//     int i = 0;
//     for(i = 0; i < n; i ++)
//     {
//         cin >> arr[i];
//     }
//     int j = 0;
//     int k = 0;
//     for(j = 0; j < n; j ++)
//     {
//         int cnt = 0;
//         for(k = 0; k < j; k ++)
//         {
//             if(arr[k] < arr[j])
//                 cnt ++;
//         }
//         cout << cnt << " ";
//     }
//     return 0;
// }

//冒泡排序

// const int N = 25;
// int arr[N];

// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         cin >> arr[i];
//     }

//     //冒泡排序是先确定需要遍历的趟数（n个数需要n-1次），再遍历每个元素（对该元素和下一个做条件判断）
//     for(int j = 1; j < n; j ++)  //提供重复n-1次的操作
//     {
//         for(int k = 0; k < n; k ++)  //遍历所有元素
//         {
//             if(arr[k] >= arr[k + 1])   
//             /*由于额外设置了数组使未使用区域为0，所以很方便
//             不用担心越界造成的报错 */
//                 continue;
//             else
//             {
//                 int tmp = 0;
//                 tmp = arr[k];
//                 arr[k] = arr[k + 1];
//                 arr[k + 1] = tmp;
//             }
//         }
//     }
//     for(int m = 0; m < n; m ++)
//         cout << arr[m] << endl;
//     return 0;
// }