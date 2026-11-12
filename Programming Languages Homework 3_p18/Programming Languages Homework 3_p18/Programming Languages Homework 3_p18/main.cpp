#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char string1[60] = "Welcome";
    char string2[60];

    size_t len;

    strcpy_s(string2, sizeof(string2), string1);

    cout << "string2 = " << string2 << endl;

    len = strlen(string2);

    cout << "String length = " << len << endl;

    system("pause");
    return 0;
}