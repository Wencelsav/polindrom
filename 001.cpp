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
