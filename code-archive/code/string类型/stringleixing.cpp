#include <iostream>
using namespace std;

// //统计标题中的字符数，不包括空格和换行
// //思路：1、可能有空格的字符串输入：getline 2、遍历字符串统计字符数：范围for；循环；迭代器。
// #include <string>
// #include <cctype>
// int main()
// {
//     int cnt1 = 0, cnt2 = 0;
//     string s;
//     getline(cin, s);
//     //范围for
//     for(auto x : s)
//     {
//         if(isdigit(x) || isupper(x) || islower(x))
//             cnt1 ++;
//     }
//     //迭代器
//     string::iterator it1 = s.begin();
//     string::iterator it2 = s.end();
//     for(it1 = s.begin(); it1 < it2; it1 ++)
//     {
//         if(isdigit(*it1) || isupper(*it1) || islower(*it1))
//             cnt2 ++;
//     }
//     cout << cnt1 << " " << cnt2 << endl;
//     return 0;
// }
// //方法2：利用while（cin）句式进行按单词读取
// int main ()
// {
//     string s;  //string类有自动内存管理的功能，每次>>操作符都会自动清理string类对象的内存并重新分配
//     int cnt = 0;
//     while(cin >> s)
//     {
//         cnt += s.size();
//     }

//     return 0;
// }

// //石头剪刀布
// //思路：1.输入n，并循环n次比赛 2.每次比赛输入字符串s1， s2 3.分类讨论s1赢、s2赢、平局的条件

// #include <string>
// int main()
// {
//     int n =  0;
//     string s1;
//     string s2;
//     cin >> n;
//     for(int i = 0; i < n; i ++)
//     {
//         cin >> s1 >> s2;
//         if((s1 == "Rock" && s2 == "Scissors") + (s1 == "Paper" && s2 == "Rock") + (s1 == "Scissors" && s2 == "Paper0") == 1)
//             cout << "Player1" << endl;
//         else if(s1 == s2)
//             cout << "Tie" << endl;
//         else
//             cout << "Player2" << endl;
//     }
//     return 0;
// }

// //解密（做题时注意分清楚是加密还是解密）
// //思路： 1、输入string s, 注意此处有空格 2、遍历s 3、（1）b~z：-1 （2）a -> z （3）其余字符不变

// #include <string>
// int main()
// {
//     string s;
//     getline(cin, s);
//     for(auto e : s)
//     {
//         if(e >= 'b' && e <= 'z' || e >= 'B' && e <= 'Z')
//             cout << (char)(e - 1);
//         else if(e == 'a' || e == 'A')
//             cout << (char)(e + 26);
//         else
//             cout << e;
//     }
//     return 0;
// }

// //文字处理软件（考察string s各个成员函数）
// int main()
// {
//     int q = 0;
//     string s, str;
//     cin >> q >> s;
//     while(q --)
//     {
//         int x = 0;
//         cin >> x;
//         switch(x)
//         {
//             case 1: 
//             {
//                 cin >> str;
//                 s += str;
//                 cout << s << endl;
//                 break;
//             }
//             case 2:
//             {
//                 int a = 0;
//                 int b = 0;
//                 cin >> a >> b;
//                 cout << s.substr(a, b) << endl;
//                 break;
//             }
//             case 3:
//             {
//                 int c = 0;
//                 cin >> c >> str;
//                 cout << s.insert(c, str) << endl;
//                 break;
//             }
//             case 4: //查找时一定要处理没有查找到的情况！！！！
//             {
//                 cin >> str;
//                 size_t n = s.find(str);
//                 if(n == string::npos)
//                     cout << -1 << endl;  //重要
//                 else
//                     cout << n << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// //单词长度（考察while（cin）句式）
// //思路： 1、string s 2、利用while（cin）输入 3、每一个循环都打印其大小
// // #include <string>
// // int main()
// // {
// //     string s;
// //     cin >> s;
// //     cout << s.size();
// //     while(cin >> s)
// //     {
// //         cout << ',' << s.size();
// //     }
// //     return 0;
// // }
// //也可以用flag控制循环内第一个的特殊情况
// int main()
// {
//     string s;
//     bool flag = true;
//     while(cin >> s)
//     {
//         if(flag)
//         {
//             cout << s.size();
//             flag = false;
//         }
//         else
//             cout << ',' << s.size();
//     }
//     return 0;
// }


// // //单词翻转
// // //思路：1、string s 2、while（cin）3、交换的经典操作，利用left<right的经典限制，l++，r--
// // #include <string>
// // int main()
// // {
// //     string s;
// //     while(cin >> s)
// //     {
// //         int left = 0;
// //         int right = s.size() - 1;
// //         char tmp;
// //         while(left < right)
// //         {
// //             tmp = s[left];
// //             s[left] = s[right];
// //             s[right] = tmp;
// //             left ++;
// //             right --;
// //         }
// //         cout << s << endl;
// //     }
// //     return 0;
// // }
// //也可以使用<algorithm>库中的reverse算法进行解答
// #include <string>
// #include <algorithm>

// int main()
// {
//     string s;
//     while(cin >> s)
//     {
//         reverse(s.begin(), s.end());
//         cout << s << endl;
//     }
//     return 0;
// }

// //判断回文字符串
// //利用reverse可以瞬秒
// #include <string>
// #include <algorithm>

// int main()
// {
//     string s,str;
//     cin >> s;
//     str = s.substr();
//     reverse(s.begin(), s.end());
//     if(str == s)
//         cout << "yes" << endl;
//     else
//         cout << "no" << endl;
// }

// //手机
// //1、输入字符串getline 2、遍历字符串，计算每个字母的按键次数，累加在一起
// //把26个字母的按键次数存储在一个数组中
// //可以优化的点在于可以只用nums[26]然后下标由'i'-'a'确定
// #include <string>
// int nums[128];
// int sum = 0;
// int main()
// {
//     string s;
//     getline(cin, s);
//     for(int i = 'a'; i <= 'z'; i ++)
//     {
//         if(i == 'a' || i == 'd' || i == 'g' || i == 'j' || i == 'm' || i == 't')
//         {
//             nums[i] = 1;
//             nums[i + 1] = 2;
//             nums[i + 2] = 3;
//         }
//         if(i == 'p' || i == 'w')
//         {
//             nums[i] = 1;
//             nums[i + 1] = 2;
//             nums[i + 2] = 3;
//             nums[i + 3] = 4;
//         }
//     }
//     nums[' '] = 1;//不要忘记空格也算一次按键
//     for(auto e : s)
//     {
//         sum += nums[e];
//     }
//     cout << sum << endl;
//     return 0;
// }

//简单口算题
//思路：1、输入i 2、i次循环 while（i--） 3、每次循环中，把第一个当作字符来读判定算法，后用stoi还原即可
#include <string>

int main()
{
    int i = 0;
    cin >> i;
    char flag;
    while(i --)
    {
        string x;
        cin >> x;
        int a = 0;
        int b = 0;
        if(x == "a")
        {
            cin >> a >> b;
            cout << a << "+" << b << "=" << a + b << endl;
            cout << (to_string(a) + to_string(b) + to_string(a + b)).size() + 2 << endl;
            flag = 'a';
        }
        else if(x == "b")
        {
            cin >> a >> b;
            cout << a << "-" << b << "=" << a - b << endl;
            cout << (to_string(a) + to_string(b) + to_string(a - b)).size() + 2 << endl;
            flag = 'b';
        }
        else if(x == "c")
        {
            cin >> a >> b;
            cout << a << "*" << b << "=" << a * b << endl;
            cout << (to_string(a) + to_string(b) + to_string(a * b)).size() + 2 << endl;
            flag = 'c';
        }
        else
        {
            if(flag == 'a')
            {
                a = stoi(x);
                cin >> b;
                cout << a << "+" << b << "=" << a + b << endl;
                cout << (to_string(a) + to_string(b) + to_string(a + b)).size() + 2 << endl;


            }
            else if(flag == 'b')
            {
                a = stoi(x);
                cin >> b;
                cout << a << "-" << b << "=" << a - b << endl;
                cout << (to_string(a) + to_string(b) + to_string(a - b)).size() + 2 << endl;
            }
            else if(flag == 'c')
            {
                a = stoi(x);
                cin >> b;
                cout << a << "*" << b << "=" << a * b << endl;
                cout << (to_string(a) + to_string(b) + to_string(a * b)).size() + 2 << endl;
            }
        }

    }
    return 0;
}