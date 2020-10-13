#include <iostream>
using namespace std;

int32_t main()
{
    cout << "****************************Vowel Count*****************************\n";
    cout << "-------------------------Name : ANAS RIYAZ-------------------------\n";
    cout << "-------------------------Roll No : 18BCS059-------------------------\n";

    char c[50];
    cout << "Input the string to count the vowels : ";
    cin >> c;

    int vowelCount = 0;
    char *ptr = c; //pointer points to the starting point of the character array

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            vowelCount++;
        ptr++;
    }

    cout << "Number of Vowels in the above Character Array : " << vowelCount << endl;
    return 0;
}