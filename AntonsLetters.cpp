#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> ss;
    string s;
    getline (cin, s);
    for (int i=0; s[i]!='\0';i++){
        if (s[i]!='{' && s[i]!=',' && s[i]!=' ' && s[i]!='}'){
            int x = int (s[i]);
            ss.insert(x);
        }
    }
    int size=int(ss.size());
    cout <<size;
}