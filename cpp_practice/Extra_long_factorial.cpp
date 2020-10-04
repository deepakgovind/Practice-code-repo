/*Factorial of a number can be calculated by simply multiplying values N * N-1 * N-2 * ... * 2 * 1. But for N > 20, this value becomes quite large and doesn't fit even in a 64 bit long long variable. Languages like Java, Python, Ruby etc. provide support for Big Integers. We can solve this problem easily in these languages by using the Big integer libraries provided.
But in C / C++, we need to write additional code to handle big integer values.*/

#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
#define MAX 500

int product(int x, int *sum, int size){
    int carry=0;
    for(int i=0;i<size;i++){
        int p=sum[i]*x+carry;
        carry=p/10;
        sum[i]=p%10;
    }
    while(carry){
        sum[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}
void extraLongFactorials(int n) {
     int *sum=new int[MAX];
    int size=1;
    sum[0]=1;
    for(int i=2;i<=n;i++){
       size=product(i, sum, size);
    }
    for(int i=size-1;i>=0;i--){
        cout<<sum[i];
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

