#include <iostream>
#include <string>
using namespace std;
bool substrock(string str1, string str2)
{
    if(str1.find(str2) != string::npos)
    {
        return true;
    }
    return false;
}
int main()
{
string str1, str2;
cout << "Enter first stroku: " << endl;
getline(cin,str1);
cout << "Enter second stroku: " << endl;
getline(cin, str2);

bool sub = substrock(str1, str2);
cout << sub << endl;
}
