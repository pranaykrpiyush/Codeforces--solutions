    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	long long int i,n,k,j=1;
    	cin>>n>>k;
    	long long int arr[n];
    	for(i=1;i<=n;i++)
    	{
    		arr[i]=i;
    	}
    	if(n%2==0)
    	{
    	for(i=1;i<=(n/2);i++)
    	{
    		arr[i]=j;
    		j=j+2;
    	}
    	j=2;
    	for(i=(n/2+1);i<=n;i++)
    	{
    		arr[i]=j;
    		j=j+2;
    	}
    }
    	else
    		{
    	for(i=1;i<=(n/2+1);i++)
    	{
    		arr[i]=j;
    		j=j+2;
    	}
    	j=2;
    	for(i=(n/2+2);i<=n;i++)
    	{
    		arr[i]=j;
    		j=j+2;
    	}
    	
    }
    cout<<arr[k];
    }
     