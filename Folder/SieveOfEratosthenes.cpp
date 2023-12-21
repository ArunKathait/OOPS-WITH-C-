#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<bool>is_prime(N,true);
    is_prime[0] = is_prime[1] = false;
    for(int i=2;i<=N;i++)
    {
        if(is_prime[i] == true)
        {
            for(int j = 2*i;j<=N;j += i)
            {
                is_prime[j] = false;
            }
        }
    } 

    for(int i = 0;i<=N;i++)
    {
        if(is_prime[i] == true)
        {
            cout<< i<<" ";
        }
    }
}