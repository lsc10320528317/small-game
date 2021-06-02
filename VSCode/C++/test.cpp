#include <string.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    string t="123E456e789";
    vector<string> ans;
    const char *sep = "Ee"; //多个字符
    char *ps=const_cast<char *>(t.c_str());
    char *p;
    p = strtok(ps, sep);

    while(p){
        string temp(p);
        ans.push_back(temp);
        p = strtok(NULL, sep);
    }
    printf("\n");
    system("pause");
    return 0;
}
