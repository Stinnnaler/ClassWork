#include <iostream>
#include <string>
#include <vector>
#include <memory.h>
using namespace std;
bool relative(const string& s1, const string& s2)
{
    bool v1[256] = {false}, v2[256] = {false};
    for(auto c: s1) v1[c] = true;
    for(auto c: s2) v2[c] = true;
    return memcmp(v1,v2,sizeof(v1)) == 0;

}

int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << relative(a,b) << endl;
    return 0;
}
