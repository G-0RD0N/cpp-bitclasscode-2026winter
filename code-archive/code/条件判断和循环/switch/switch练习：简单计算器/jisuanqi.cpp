#include <iostream>
using namespace std;
 int main ()
 {
    int x, y;
    char f;
    cin >> x >> y ;
    scanf(" %c", &f );
    switch ( f )
    {
        case '+': cout << x + y << endl;
        break;
        case '-': cout << x - y << endl;
        break;
        case '*': cout << x * y << endl;
        break;
        case '/': 
        switch ( y )
        {
            case 0: cout << "devided by zero!" << endl;
            break;
            default:cout << x / y << endl;
        }
        break;
        //swtich 语句中只可能有两个出口，一个是break，一个是花括号
        default: cout << "invalid operator!" << endl;
    }
 return 0;
 }