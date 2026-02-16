#include <iostream>
using namespace std;
#include <cstdio>
//利用了%4d的格式化输入
 int main ()
 {
    int y, m;
    scanf("%4d%d",&y,&m);
        switch( m )
    {
        case 3:
        case 4:
        case 5: cout << "spring" << endl;
        break;
        case 6:
        case 7:
        case 8: cout << "summer" << endl;
        break;
        case 9:
        case 10:
        case 11: cout << "autumn" << endl;
        break;
        case 12:
        case 1:
        case 2: cout << "winter" << endl;
        break;
    }
    return 0;
 }








// #include <iostream>
// using namespace std;
//  int main( )
//  {
//     char a, b, c, d;
//     int m;
//     cin >> a >> b >> c >> d >> m;
//     switch( m )
//     {
//         case 3:
//         case 4:
//         case 5: cout << "spring" << endl;
//         break;
//         case 6:
//         case 7:
//         case 8: cout << "summer" << endl;
//         break;
//         case 9:
//         case 10:
//         case 11: cout << "autumn" << endl;
//         break;
//         case 12:
//         case 1:
//         case 2: cout << "winter" << endl;
//         break;
//     }
//  return 0;
//  }