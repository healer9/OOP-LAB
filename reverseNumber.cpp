#include <iostream>
using namespace std;

// reverse using function with return type
int reverseNum1(int num)
{
    int rev = 0;
    while (num)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

// reverse using function without return type
void reverseNum2(int &num)
{
    int rev = 0;
    while (num)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    num = rev;
}

int main()
{
    cout << "*************************Reveres A Number*****************************\n";
    cout << "-------------------------Name : ANAS RIYAZ-------------------------\n";
    cout << "-------------------------Roll No : 18BCS059-------------------------\n";
    int num;
    cout << "Input the number to be reverse : ";
    cin >> num;
    cout << "Reverse of " << num << " is (using function with return type): " << reverseNum1(num) << endl;
    cout << "Reverse of " << num << " is (using function without return type): ";
    reverseNum2(num);
    cout << num << endl;
    return 0;
}