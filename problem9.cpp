#include <iostream>
using namespace std;
string normalize(string s) {
    if (s.empty()) {
        return s;
    }
    char *p=&s[0];
    *p=toupper(*p);
    p++;
    while (*p!='\0') {
        *p=tolower(*p);
        p++;
    }
    return s;
}
int main() {
    string s;
    getline(cin, s);
    cout << normalize(s) << endl;
    return 0;
}