#include <iostream>
using namespace std;


//杨辉三角的打印
// #include <cstdio>
// const int N = 25;
// int arr[N][N];
// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j <= i; j ++)
//         {
//             if(j == 0 || j == i)
//                 arr[i][j] = 1;
//             else
//                 arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//         }
//     }
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j <= i; j ++)
//         {
//             cout << arr[i][j] << " ";
//             // printf("%o ",arr[i][j]);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main()   只用一次循环
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j <= i; j ++)
//         {
//             if(j == 0 || j == i)
//                 arr[i][j] = 1;
//             else
//                 arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



//交换矩阵的两行
//涉及行索引列索引需要考虑实际意义和编程意义的不同
// int arr[5][5];

// int main()
// {
//     for(int i = 0; i < 5; i ++)
//     {
//         for(int j = 0; j < 5; j ++)
//         {
//             cin >> arr[i][j];
//         }
//     }    
//     int m = 0;
//     int n = 0;
//     int tmp = 0;
//     cin >> m >> n;
//     for(int k = 0; k < 5; k ++)
//     {
//         tmp = arr[m - 1][k];
//         arr[m - 1][k] = arr[n -1][k];
//         arr[n - 1][k] = tmp;
//     }
//     for(int i = 0; i < 5; i ++)
//     {
//         for(int j = 0; j < 5; j ++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }    

//     return 0;
// }



//比较两个图像的像素点相似度
// #include <cstdio>
// const int M = 110;
// const int N = 110;
// int arr1[M][N];
// int arr2[M][N];

// int main()
// {
//     int m = 0;
//     int n = 0;
//     cin >> m >> n;
//     for(int i = 0; i < m; i ++)
//     {
//         for(int j = 0; j < n; j ++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for(int i = 0; i < m; i ++)
//     {
//         for(int j = 0; j < n; j ++)
//         {
//             cin >> arr2[i][j];
//         }
//     }
//     int cnt = 0;
//     for(int i = 0; i < m; i ++)
//     {
//         for(int j = 0; j < n; j ++)
//         {
//             if(arr1[i][j] == arr2[i][j])
//                 cnt ++;
//         }
//     }
//     printf("%.2lf\n", cnt * 100.0 / (m * n));
//     return 0;
// }
// //我们可以通过一个数组必须存，第二个直接用的思想来简化代码
// int main()
// {
//     int m = 0;
//     int n = 0;
//     cin >> m >> n;
//     for(int i = 0; i < m; i ++)
//     {
//         for(int j = 0; j < n; j ++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     int cnt = 0;
//     int x = 0;
//     for(int i = 0; i < m; i ++)
//     {
//         for(int j = 0; j < n; j ++)
//         {
//             cin >> x;
//             if(arr1[i][j] == x)
//                 cnt ++;
//         }
//     }
//     printf("%.2lf\n", cnt * 100.0 / (m * n));
//     return 0;
// }




//矩阵加法
// const int N =110;
// const int M =110;
// int arr1[N][M];
// int main()
// {
//     int n = 0;
//     int m = 0;
//     cin >> n >> m;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j < m; j ++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     int x = 0;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j < m; j ++)
//         {
//             cin >> x;
//             cout << x + arr1[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//矩阵转置
// const int N = 110;
// const int M = 110;
// int a[N][M];

// int main()
// {
//     int n = 0;
//     int m = 0;
//     cin >> n >> m;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j < m; j ++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for(int j = 0; j < m; j ++)
//     {
//         for(int i = 0; i < n; i ++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//矩阵边缘求和
// const int M = 110;
// const int N = 110;
// int arr[M][N];
// int main()
// {
//     int sum = 0;
//     int m = 0;
//     int n = 0;
//     cin >> m >> n;
//     for(int i = 0; i < m; i ++)
//     {
//         for(int j = 0; j < n; j ++)
//         {
//             cin >> arr[i][j];
//             if(i == 0 || j == 0 || i == n-1 || j == n-1)
//                 sum += arr[i][j];
//         }
//     }
//     cout << sum;
//     return 0;
// }

//图像的模糊化处理
// #include<cmath>
// const int N = 110;
// const int M = 110;
// int arr1[N][M];
// int arr2[N][M];

// int main()
// {
//     int n = 0;
//     int m = 0;
//     cin >> n >> m;
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j < m; j ++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for(int i = 0; i < n; i ++)
//     {
//         for(int j = 0; j < m; j ++)
//         {
//             if(i == 0 || i == n - 1 || j == 0 || j == m - 1)
//             {
//                 arr2[i][j] = arr1[i][j];
//             }
//             else
//             {
//                 double x = 0;
//                 x = (arr1[i][j] + arr1[i - 1][j] + arr1[i + 1][j] + arr1[i][j - 1] + arr1[i][j + 1]) / 5.0;
//                 if(x - floor(x) > 0.5)
//                     arr2[i][j] = (int)ceil(x);
//                 else
//                     arr2[i][j] = (int)floor(x);
//             }
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// //统计彩票中奖情况
// const int N = 1010;
// int ans[7];  //正确的号码
// int arr[N][7];  //小明买的彩票
// int c[10];  //奖各个等级的中奖人数

// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < 7; i ++)
//         cin >> ans[i];
//     for(int i = 0; i < n; i ++)
//     {
//         int cnt = 0;
//         for(int j = 0; j < 7; j ++)
//         {
//             cin >> arr[i][j];
//             for(auto x : ans)
//             {
//                 if(x == arr[i][j])
//                     cnt ++;
//             }
//         }
//         c[7 - cnt] ++;
//     }
//     for(int i = 0; i < 7; i ++)
//     {
//         cout << c[i] << " ";
//     }
//     return 0;
// }
// //嵌套循环使用时如果没有涉及整个矩阵其他位置的元素参与运算，则可以输入一个计算一个存储一个（注意考虑是否需要另开空间存）