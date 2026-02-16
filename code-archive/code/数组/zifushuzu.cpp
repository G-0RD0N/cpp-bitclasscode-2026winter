#include <iostream>
using namespace std;


////大小写转换
// const int N = 110;
// char arr[N];

// #include <cstring>
// int main()
// {
// //无空格直接用cin
// //注意输入进来会在末尾自动加\0
//     cin >> arr;
//     int len = strlen(arr);
//     for(int i = 0; i < len; i ++)
//     {
//     //也可以以\0为结束标志利用循环解决
//         //if(arr[i] >= 97 && arr[i] <= 123)
//         if(arr[i] >= 'a' && arr[i] <= 'z')

//             arr[i] -= 32;
//     }
//     cout << arr << endl;
//     return 0;
// }


//字符中有多少个数字
// const int N = 265;
// char arr[N];

// int main()
// {
//     fgets(arr, 265, stdin);
//     int i = 0;
//     int cnt = 0;
//     while(arr[i] != '\n')
//     {
//         if(arr[i] >= '0' && arr[i] <= '9')
//             cnt ++;
//         i ++;//不要漏了
//     }
//     cout << cnt << endl;
//     return 0;
// }

// //药名规范化
// #include <cstring>
// #include <cctype>
// const int N = 25;
// int n;
// int main()
// {
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         char arr[N] = {0};
//         //err :cin >> arr[N];重点关注！！！！！！！！！
//         cin >> arr;
//         int x = arr[0];
//         if(islower(x))
//             arr[0] = toupper(arr[0]);
//         int len = strlen(arr);
//         for(int j = 1; j < len; j ++)
//         {
//             int y = arr[j];
//             if(isupper(y))
//                 arr[j] = tolower(arr[j]);
//         }
//         cout << arr << endl;
//     }
//     return 0;
// }

// //基因序列相似度
// #include <cstring>
// const int N = 510;
// char arr1[N];
// char arr2[N];
// double ans;

// int main()
// {
//     cin >> ans >> arr1 >> arr2;
//     int len = strlen(arr1);
//     int i = 0;
//     int cnt = 0;
//     for(i = 0; i < len; i ++)
//     {
//         if(arr1[i] == arr2[i])
//             cnt ++;
//     }
//     if(cnt * 1.0 / len >= ans)
//         cout << "yes" << endl;
//     else
//         cout <<"no" << endl;
//     return 0;
// }

//亲朋字符串（单个字符串涉及多个元素之间的运算）
// const int N = 110;
// char arr[N];
// int main()
// {
//     cin >> arr;
//     int i = 0;
//     while(arr[i + 1] != '\0')
//     {
//         char x = arr[i] + arr[i + 1];
//         cout << x;
//         i ++;
//     }
//     char x = 0;
//     cout << (x = arr[0] + arr[i]);
//     //这里需要强制类型转换成char
//     return 0;
// }
////将线性的数据结构变成环状的方法：取余%
// #include <cstring>
// const int N = 110;
// char arr[N];
// int main()
// {
//     cin >> arr;
//     int i = 0;
//     int len = strlen(arr);
//     int n = len;
//     while(n --)//循环n次
//     {
//         char x = arr[i % len] + arr[(i + 1) % len];
//         cout << x;
//         i ++;
//     }
//     return 0;
// }

// //验证子串
// //需要学习strstr（str，substr），返回substr在str中的地址，否则返回null（0）

// const int N = 25;
// char arr1[N];
// char arr2[N];
// #include <cstring>
// int main()
// {
//     cin >> arr1 >> arr2;
//     if(strstr(arr1,arr2))
//         cout << arr2 << " is substring of " << arr1 << endl;
//     else if(strstr(arr2,arr1))
//         cout << arr1 << " is substring of " << arr2 << endl;
//     else
//         cout << "No substring" << endl;

//     return 0;
// }

//第一个仅出现一次的字符
const int N = 1110;
char arr[N];
#include <cstring>
// int main()
// {
//     cin >> arr;
//     //输入
//     int c[N] = {0};
//     //循环找到每个字母出现的个数,c[i]表示第i个元素出现的个数，如果有重复元素我们不必理会，因为信息都存在c[i]里了
//     //统计字符数组中元素出现的频数，就自己与自己比较，想像copy了一份，这样便于统计个数
//     int i = 0, j = 0;
//     int len = strlen(arr);
//     for(i = 0; i < len; i ++)
//     {
//         for(j = 0; j < len; j ++)
//         {
//             if(arr[i] == arr[j])
//                 c[i] ++;
//         }
//     }
//     //找到第i个字符
//     int k = 0;
//     for( k = 0; k < len; k ++)
//     {
//         if(c[k] == 1)
//         {
//             cout << arr[k] << endl;
//             break;
//         }
//     }
//     if(k == len)
//         cout << "no" << endl;
//     return 0;
// }
//复杂，没有把握好“第一个”这个概念，在双层循环+break的算法下可以直接找到


// //优化1：自己与自己比较统计个数
// int main()
// {
//     cin >> arr;  //末尾加上\0
//     int i = 0;
//     int j = 0;
//     int flag = 0;  //用于判断是否有仅出现一次的字符，默认无
//     while(arr[i])
//     {
//         //对于每一个arr中的元素
//         int c = 0;
//         while(arr[j])
//         {
//             //与每一个arr中的元素比较，统计个数
//             if(arr[j] == arr[i])
//                 c ++;
//             j ++;
//         }
//         if(c == 1)
//         {
//             cout << arr[i] << endl;
//             flag = 1;
//             break;  //只希望知道第一个，及时跳出循环
//         }
//         i ++;
//     }
//     if(flag == 0)
//         cout << "no" << endl;

//     return 0;
// }

// //优化2：牺牲空间多开辟一个数组来达到只遍历一遍的时间复杂度（哈希）总体思想是：遍历，记录，遍历
// int nums[128];  //开辟一个可以与字符通过ASCII码一一对应的表
// int main()
// {
//     cin >> arr;
//     int i = 0;
//     while(arr[i])
//     {
//         nums[arr[i]] ++;
//         i ++;
//     }
//     int j = 0;
//     int flag = 0;
//     while(arr[j])
//     {
//         if(nums[arr[j]] == 1)
//         {
//             cout << arr[j] << endl;
//             flag = 1;
//             break;
//         }
//         j ++;
//     }
//     if(flag == 0)
//     {
//         cout << "no" << endl;
//     }

//     return 0;
// }