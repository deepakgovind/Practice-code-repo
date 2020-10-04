/*Given two integers, l and r, find the maximal value of a xor b, where a and b satisfy the following condition: l<= a <= b <=r.*/ 

#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
     int max=INT_MIN;
     for(int i=l;i<=r;i++){
         for(int j=i;j<=r;j++){
             int a=i^j;
             if(a>max){
                 max=a;
             }
         }
     }
   return max;
}

int main()
{
    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    cout << result << "\n";

    return 0;
}

