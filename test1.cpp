    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    int n;cin>>n;
    int arr[n];
    int max,min,max1,max2;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    max=arr[0];
    min=arr[n-1];
    for(int i=0;i<n;i++)
    {
    	if(arr[i]>arr[i+1])
    	max=arr[i];
    	max1=i;
    }
    for(int i=n-1;i>-1;i--)
    {
    	if(arr[i]>arr[i-1])
    	min=arr[i-1];
    	max2=i-1;
    }
    cout<<max<<" "<<min<<" "<<max1<<" "<<max2; // mene aise hi likh diya hai check k liye
    }// question ka 2nd wala test case lena example me