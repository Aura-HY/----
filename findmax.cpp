using namespace std;
#include<iostream>

int main()
{
    int arr[]{1,8,3,4,9,2};
    int max=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
       if(arr[i]>max)
       {max=arr[i];}//不要用两个等号！！两个等号是判断，一个是赋值
    }
     printf("max=%i\n",max);
     return 0;
}