using namespace std;
#include <iostream>
#include<ctime>

int main()
{
    srand((unsigned int)time(NULL));
    int num=rand()%100+1;//对随机数取模100，有效限制在100以内，原本是0-99，加一后就是1-100
    cout<<"请输入您猜测的数字："<<endl;
    int guess;
    cin>>guess;
    while (guess>num)
    {
       cout<<"您输入的数字过大，请重新输入："<<endl;
       cin>>guess;
    }
    while (guess<num)
    {
        cout<<"您输入的数字过小，请重新输入："<<endl;
        cin>>guess;
    }
    while (guess==num)
    {
        cout<<"恭喜"<<endl;
        break;
    }
    
	system("pause");
	return 0;
}