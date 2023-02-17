#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n>0)
        printf("%d is positive\n", n);
    else if (n<0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);
	return (0);
}
