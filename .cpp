uva * 11614 - Etruscan Warriors Never Play Chess
Simple math problem:
                n*(n+1)/2 = s
                n^2+n=2*s
                n^2+n+(-2*s)=0

Using quadratic equation (ax^2+bx+c=0).

del = sqrt(b*b-4*a*c) = sqrt(1-4*1*(-2s)) = sqrt(1+8s);
we know,   x = (-b(+-) del)/2a

Here, i use only (+)positive value because *del is always positive.
so,  n = (-1+sqrt(1+8s))/2;

<<------------------------------------------------------------------------------------------------------------>>

প্রশ্নমতেঃ একটি ধারা পাওয়া যায়। ধারাটি হল : ১+২+৩+4+৫+...............
প্রশ্নে ধারাটির n তম পদের সমষ্টি দেওয়া আছে n এর মান বের করতে হবে |
আমরা জানি , n তম পদের সমষ্টি = n/2(2*a+(n-1)*d);

here a = first value of ধারা | b = Differance between ধারাটির 1st & 2nd values !!
এখানে , a=1 , d=1 ;   // (so, d is 4-3 = 1 / 3-2 = 1 / 2-1 = 1)

এখন , যদি সমষ্টি  x  দেওয়া থাকে তবে , n/2(2*1+(n-1)*1)=x
or,n*(2+n-1)=2*x;
or,n*n+n=2*x;
or;n*n+n-2*x=0
or,n=(-1+sqrt(1-4*1*2*x))/2

#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t,i,n,s;
    cin>>t;
    while (t--) {
        cin>>n;
        s=(sqrt(1+4*2*n)-1)/2;
        cout<< s <<endl;
    }
    return 0;
}

<<------------------------------------------------------------------------------------------------------------->>

#include<bits/stdc++.h>

#define ll               long long
#define TEST_CASE(t)     for(int z=1;z<=t;z++)

using namespace std;

ll ask(ll n) {
    return n*(n+1)/2;
}
 
int main() {
//freopen("in.txt","r",stdin);
///freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    TEST_CASE(t)  {
        ll x;
        cin>>x;
        ll lo=0,hi=10000000000,ans=0;
 
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
 
            ll temp=ask(mid);
 
            if(temp<=x)
                {
                    ans=mid;
                    lo=mid+1;
                }
            else
                hi=mid-1;
        }
 
        cout<<ans<<endl;
    }
    return 0;
}

<<--------------------------------------------------------------->>

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;long long n;
    cin>>t;
    while(t--) {
        scanf("%lld",&n);
        long long int sum,c=0,div;
        div = sqrt(2*n);
        sum = div*(div+1)/2;
        if(sum>n) cout<<div-1<<endl;
        else cout<<div<<endl;
    }
    return 0;
}
