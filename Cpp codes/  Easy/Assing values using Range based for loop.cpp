
#include <iostream>

using namespace std;

int main() {
int arr[10]{0};
int i=0;
for(auto &n:arr) //we use reference instead of normal variable 
{
    n=i;
    i++;
}

for(auto &n:arr)
{
cout<<endl<<n;
}

return 0;
}
