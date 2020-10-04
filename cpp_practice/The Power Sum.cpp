/*Find the number of ways that a given integer,X, can be expressed as the sum of Nth  powers of unique, natural numbers.
For example, if X=13 and N=2 , we have to find all combinations of unique squares adding up to 13 . The only solution is 2^2 + 3^2. */

#include <bits/stdc++.h>

using namespace std;
int sum(int x, int n){
    for(int i=1; ;i++){
        if(pow(i,n)>x){
            return i-1;
        }
        if(pow(i, n)==x){
            return i;
        }
    }
}
void help(int x, int n, int &count, int sum, int i, int k){
    if(sum+(pow(i,n))>x){
        return;
    }
    
    for(int j=i;j<=k;j++){
        if(sum+pow(j,n)==x){
            count++;

        }else{
            sum+=pow(j,n);
           help(x, n, count, sum, j+1, k);
           sum-=pow(j,n);
        }
       }
    return ;
}

int powerSum(int X, int N) {
    int count=0, s=0, i=1;
    int k=sum(X,N);
    help( X, N,count,s, i, k );
    return count;

}

int main()
{
    int X;
    cin >> X;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = powerSum(X, N);

    cout << result << "\n";


    return 0;
}

