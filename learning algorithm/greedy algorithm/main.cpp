#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 100000
using namespace std;
int main()
{
    double num[N],w;
    int n;
    scanf("%lf %d",&w,&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&num[i]);
    }
    sort(num,num+n);
    double weight;
    int count;
    weight=0.0;
    count=-1;
    for(i=0;i<n;i++)
    {
        if(weight<=w)
        {
            weight+=num[i];
            //printf("%.1f\n",weight);
            count++;
        }
        else
            break;
    }
    printf("%d",count);
    return 0;
}
