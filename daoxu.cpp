using namespace std;
#include <iostream>

int main()
{
    int arr[5]{1,2,3,4,5};
    int b=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<b;i++,b--)
    {
        int a;
        a=arr[i];
        arr[i]=arr[b-1];//数组最后一个数是长度-1
        arr[b-1]=a;
    }
    for(int n=0;n<sizeof(arr)/sizeof(arr[0]);n++)
    {
        printf("%i",arr[n]);
    }
    return 0;
}