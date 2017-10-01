#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <conio.h>
 
int main(int argc, char *argv[])
{ 
char oldstr[128];
char newstr[128];
gets(oldstr);
int cout=0;
while(oldstr[cout++]!='\0')
printf("%c", *strlwr(&oldstr[cout]));
return 0;
}
#include <iostream>
using namespace std;
int main() {
    string com;
    int res=1;
    cin>>com;
    for(int i=0; i <com.length()/2;i++){
        if (com[i]!=com[com.length()-i-1]){
            res=0;
            break;
        }};
    cout<<res;
    return 0;
}
