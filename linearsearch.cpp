#include<iostream>
using namespace std;

int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
return -1;
}
int main()
{
    int n,x;
    int a[20];

    cout<<"enter the size of the array:";
    cin>>n;

    cout<<"enter"<<n<<"sorted integers:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the target element to search for:";
    cin>>x;

    int location=linear_search(a,n,x);
    if(location!=-1){
        cout<<"element"<<x<<"found at index :"<<location<<endl;
    }
    else{
        cout<<"element"<<x<<"not found in the array"<<endl;
    }

      return 0;
    
}
/*PS D:\Tejas Patil 229> cd "d:\Tejas Patil 229\" ; if ($?) { g++ linearsearch.cpp -o linearsearch } ; if ($?) { .\linearsearch }
enter the size of the array:10
enter10sorted integers:
1 3 4 7 8 9 10 21 22 25
enter the target element to search for:22
element22found at index :8*/