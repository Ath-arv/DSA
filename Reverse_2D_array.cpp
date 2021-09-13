#include<iostream>
using namespace std;
int main(){
char *arr[10]={"a","b","c","d","e","f","g","h","i","j"};
for(int i=9;i>=0;i--)
cout<<arr[i]<<"\n";
return 0;
}
