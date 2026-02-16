#include <iostream>
using namespace std;

// //学生信息评等级
// //1、输入n 2、n次循环，每一次都输入学生信息， 并且计算综合分和总分，最后判断是否优秀

// struct stu
// {
//     int num;
//     int xueye;
//     int tuozhan;
//     int total()
//     {
//         return xueye  + tuozhan;
//     }
//     int score()
//     {
//         return xueye * 7 + tuozhan * 3;
//     }
// }s;

// void judge(stu & s)
// {
//     if( s.total() > 140 && s.score() >= 800 )
//         cout << "Excellent" << endl;
//     else
//         cout << "Not excellent" << endl;
// }

// int main()
// {
//     int n = 0;
//     cin >> n;
//     while(n --)
//     {
//         cin >> s.num >> s.xueye >> s.tuozhan;
//         judge(s);
//     }
//     return 0;
// }

// //找出最高分
// //思路one：擂台的方式，1、先存储第一个学生信息，2、再依次与之比较，留下成绩最大的
// #include <algorithm>
// #include <string>
// int main()
// {
//     int n = 0;
//     cin >> n;
//     int sc = 0;
//     string st;
//     cin >> sc >> st;
//     int sc1 = 0;
//     string st1 ;
//     int i = n - 1;
//     while(i --)
//     {
//         cin >> sc1 >> st1;
//         sc = max(sc, sc1);
//         if(sc >= sc1)
//             continue;
//         else
//             st = st1;
//     }
//     cout << st << endl;
//     return 0;
// }

// //思路two：利用结构体创建每个学生信息档案，然后通过sort算法解决
// #include <string>
// #include <algorithm>
// const int N = 110;
// struct stu
// {
//     int score;
//     string name;
// }s[N];
// bool cmp(stu s1, stu s2)
// {
//     return s1.score > s2.score;
// }
// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         cin >> s[i].score >> s[i].name;
//     }
//     int sz = sizeof(s) / sizeof(s[0]);
//     sort(s, s + sz, cmp);
//     cout << s[0].name << endl;

// }

// //甲流病人筛查
// struct pat
// {
//     string name;
//     float tem;
//     int cough;
// }pa[110];
// int main()
// {
//     int n = 0;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 0; i < n; i ++)
//     {
//         cin >> pa[i].name >> pa[i].tem >> pa[i].cough;
//         if(pa[i].tem >= 37.5 && pa[i].cough == 1)
//         {
//             cout << pa[i].name << endl;
//             cnt ++;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }

// //统计前五名
// #include <algorithm>
// bool cmp(int i, int j)
// {
//     return i > j;
// }
// const int N = 60;
// int arr[N];
// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n ; i ++)
//     {
//         cin >> arr[N];
//     }
//     sort(arr, arr + n, cmp);
//     for(int i = 0; i < 5; i ++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// //奖学金评选
// #include <algorithm>
// struct stu
// {
//     int chi;
//     int mat;
//     int eng;
//     int num;
//     int total;
// }s[310];
// bool cmp(stu a, stu b)
// {
//     if(a.total > b.total)
//         return true;
//     else if(a.total == b.total)
//     {
//         if(a.chi > b.chi)
//             return true;
//         else if(a.chi == b.chi)
//             return a.num < b.num; //注意此时是学号小的放前面
//         else
//             return false;
//     }
//     else
//         return false;
// }
// int main()
// {
//     int n = 0;
//     cin >> n;
//     for(int i = 0; i < n ; i ++)
//     {
//         cin >> s[i].chi >> s[i].mat >> s[i].eng;
//         s[i].num = i + 1;
//         s[i].total = s[i].chi + s[i].mat + s[i].eng;
//     }
//     sort(s, s + n, cmp);
//     for(int i = 0; i < 5; i ++)
//         cout << s[i].num << " " << s[i].total << endl;
//     cout << endl;
//     return 0;
// }

//生日排序
//注意年龄大的生日小
#include <string>
#include <algorithm>
const int N = 110;
struct stu
{
    string name;
    int y;
    int m;
    int d;
    int num;
}s[N];

bool cmp(stu s1, stu s2)
{
    if(s1.y < s2.y)
        return true;
    else if(s1.y == s2.y)
    {
        if(s1.m < s2.m)
            return true;
        else if(s1.m == s2.m)
        {
            if(s1.d < s2.d)
                return true;
            else if(s1.d == s2.d)
                return s1.num > s2.num; //这次是输入靠后的同学先输出
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;

}

int main()
{
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        cin >> s[i].name >> s[i].y >> s[i].m >> s[i].d;
        s[i].num = i + 1;
    }
    sort(s, s + n, cmp);
    for(int i = 0; i < n; i ++)
    {
        cout << s[i].name << endl;
    }
    return 0;
}