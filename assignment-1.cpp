//experiment with operators
#include <iostream>
using namespace std;

int main() {
    int a,b,result_a,result_b,c,d;
    bool result;
    cout << "Enter the numbers:"<<endl;
    cin >>a;
    cout << "a = " << a << endl;
    cin >>b;
    cout << "b = " << b << endl;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;

    // decrementing b by 1 and storing the result in result_b
    result_b = --b;
    cout << "result_b = " << result_b << endl;



    // 2 is assigned to a
    c = 2;

    // 7 is assigned to b
    d = 7;

    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;



    result = (c == d);   // false
    cout << "3 == 5 is " << result << endl;

    result = (c != d);  // true
    cout << "3 != 5 is " << result << endl;

    result = c > d;   // false
    cout << "3 > 5 is " << result << endl;

    result = c < d;   // true
    cout << "3 < 5 is " << result << endl;

    result = c >= d;  // false
    cout << "3 >= 5 is " << result << endl;

    result = c <= d;  // true
    cout << "3 <= 5 is " << result << endl;


    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;


    return 0;
}
