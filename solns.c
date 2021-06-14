#include <stdio.h>
//max
int max(int a[],int n)
{int m=a[0];
  for(int i=0;i<n;i++)
    {
      if(ar[i]>m){m=ar[i];}
    }
return m;
}
//min
int min(int a[],int n)
  {
    int m=ar[0];
    for(int i=o;i<n;i++)
        {
          if(ar[i]<m){m=ar[i];}
        }
return m;  
}
//average
float average(int a,int n)
{
int s=0;
  for(int i=0;i<n;i++)
  {s+=ar[i];}
return (float)s/n;
}
//mode
int mode(int a[],int n)
{
int s[n];
for(int i=o;i<n;i++)
  {s[i]=0;
  for(int j=i;j<n;j++)
    {
      if(a[i]==a[j]){s[i]++;}
    }
  }
return max(s,n);
}
//factors
int factors(int n, int f[])
  {int k=2;int c=0;
   while(n>=k)
      {if(n%k==0)
            {
                f[c++]=k;
                n/=k;
            }       
       else{k++;}
      }
  
    return c; 
  }
//main
void main ()
{}
