1 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > 2) cout << "\nA>2";
    else cout << "\nA<2";
    if (b <= 3) cout << "\nB<=3";
    else cout << "\nB>3";
}
2 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) cout << "YES";
    else cout << "NO";
}
3 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x > 9 && x < 100 && x % 2 == 0)
        cout << "YES";
    else cout << "NO";
}
4 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int a, b, c;
    a = x / 100;
    b = x / 10;
    b = b % 10;
    c = x % 10;
    if (a < b && b < c || a > b && b > c)
        cout << "YES";
    else cout << "NO";
}
5 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int a, b, c, d;
    a = x / 1000;
    b = x / 100;
    b = b % 10;
    c = x / 10;
    c = c % 10;
    d = x % 10;
//cout << a << " " << b << " " << c << " " << d;
    if (a == d && b == c) cout << "YES";
    else cout << "NO";
}
6 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b, c;
    int max;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        max = a;
        if (b * b + c * c == a * a) cout << "YES";
        else cout << "NO";

    }
    else if (b >= a && b >= c) {
        max = b;
        if (a * a + c * c == b * b) cout << "YES";
        else cout << "NO";

    }
    else {
        max = c;
        if (a * a + b * b == c * c) cout << "YES";
        else cout << "NO";

    }
}
7 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) cout << "YES";
    else cout << "NO";
}
