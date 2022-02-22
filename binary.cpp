 #include<bits-stdc++.h>
 
 using namespace std;



int binary(int arr[],int n, int key) 
{
 int s=0;
 int e=n;
 while (s<=e)
 {
     /* code */
     int mid=(s+e)/2;
     if (arr[mid]==key)
     {
         return mid;
     }
     else if (arr[mid]>key)
     {
         e=mid-1;
     }
     else
     {
         s=mid+1;

     }

 }
 return -1;
}

 int main() {
    int n;//size of array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
        }
  


    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int key;
    cin>>key;
    cout<<binary(arr,key,n);

    return 0;
}
