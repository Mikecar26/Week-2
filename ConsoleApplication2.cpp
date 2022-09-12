#include <iostream>
using namespace std;
bool isVowel(char a)
{
    // So that we don't have to check Capital letters
    a = tolower(a);
    // Checks vowels
    if (a == 'a')
        return true;
    else if (a == 'e')
        return true;
    else if (a == 'i')
        return true;
    else if (a == 'o')
        return true;
    else if (a == 'u')
        return true;
    else
        return false;
}

void function1(int x, int y)
{
    for (int i = 0; i < 1000; i++)
    {
        if (i % x == 0 || i % y == 0)
        {
            cout << i << "  ";
        }
    }
    cout << endl;
}
void function2(string str)
{
    int size = str.length();
    string temp;

    for (int i = size; i >= 0; i--)
    {
        temp += str[i];
    }
    cout << temp << endl;
}

void function3(string str)
{
    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if (isVowel(str[i]))
            temp += ' ';
        else
            temp += str[i];
    }
    cout << temp << endl;
}
int main()
{
    function1(17, 49);
    function2("hello world");
    function3("the cake is a lie");
}

