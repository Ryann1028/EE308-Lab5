#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int grade , num ;
    cout<<"Please enter your grade : ";
    cin>>grade;
    cout<<"please enter the number of questions : ";
    cin>>num;
    int score_mini=100/num;
    int sum1;
    double sum2;
    
    //grade1
    if(grade==1||grade==2){
    	int a1,b1,c1,t1,js_1 = 0,js1_1 = 0;
    	
    	while(js_1<num)
    	{
	         a1=(rand()%100)+1;  //随机生成两个相加减的两个数a，b
	         b1=(rand()%100)+1;
	         c1=(rand()%2)+1;   //随机生成运算符号
	         switch(c1)
	         {
	             case 1:cout<<a1<<'+'<<b1<<'=';cin>>sum1;
	                    if(a1+b1 != sum1){cout<<"You are wrong！\n";js_1++;}else{cout<<"You are right！\n";js_1++;js1_1++;}
	                    break;
	             case 2:if(a1<b1){t1=a1;a1=b1;b1=t1;}cout<<a1<<'-'<<b1<<'=';cin>>sum1;
	                    if(a1-b1 != sum1){cout<<"You are wrong！\n";js_1++;}else{cout<<"You are right！\n";js_1++;js1_1++;}
	                    break;
			}
		}
		//算分 
		if(js1_1==num){
			cout<<"End! All right, that's great! Your score is 100."<<endl;
		}else{
			cout<<"End! Wrong question, your score is "<<score_mini*js1_1<<endl;
		}
	}
}