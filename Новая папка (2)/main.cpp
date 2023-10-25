#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
bool check_polindrom(string word)
{
    int len = word.length();
    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
// функция 1
//    string a;
 //   string b;
 //   cin >> a;
 //   cin >> b;
 //   cout << a << " " << b << endl;
 //функция 2
 //string a;
 //cin >> a;
 //cout << size(a) << endl;
 //функция 3
// string a;
// cin >> a;
//reverse(a.begin(), a.end());
// cout << a;
// функция 4
//string a;
//cin >> a;
//    for(unsigned int i = 0; i < a.size() - 1; ++i)
//        if(a[i] == a[i + 1])
//            a.replace(i + 1, 1, "W");
//    cout << a;
    string str;
    cout << "Enter the word:  ";
    cin >> str;
    if(check_polindrom(str))
    {
        cout << "Word is polindrom.";
    }
    else
    {
        cout << "Word is not polindrom";
    }
    return 0;
}
