using namespace std;
#include<iostream>
#include<ctime>

int main()
{
    srand((unsigned int)time(NULL));
    int num=rand()%100+1;
    for(int i=0;i<6;i++)
    {
        printf("please input the number you guess:");
        int guess;
        cin>>guess;
        if(guess>num)
        {
            printf("过大\n");
        }
        else if(guess<num)
        {
            printf("过小\n");
        }
        else
        {
            printf("恭喜\n");
            return 0;//没有再继续
        }
    }
    printf("你输了\n");

    return 0;
}