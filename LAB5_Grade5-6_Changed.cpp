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
	
	//grade3
    if(grade==5||grade==6){
    	double a3,b3,t3;
		int c3,js_3 = 0,js1_3 = 0;
    	
    	while(js_3<num)
	    {
	         a3=((rand()%1000)+1)/10.0;  //随机生成两个相加减乘除的两个数a，b
	         
	         b3=0;
			 while(b3==0){
	         	b3=((rand()%1000)+1)/10.0+1.0; //
			 }
			 
			 b3=((rand()%1000)+1)/10.0+1.0; 
	         c3=(rand()%4)+1;   //随机生成运算符号
	         switch(c3)
	         {
	             case 1:cout<<a3<<'+'<<b3<<'=';cin>>sum2;
	                   if((a3+b3)!=sum2){cout<<"You are wrong！\n";js_3++;}else{cout<<"You are right！\n";js_3++;js1_3++;}
	                    break;
	             case 2:if(a3<b3){t3=a3;a3=b3;b3=t3;}cout<<a3<<'-'<<b3<<'=';cin>>sum2;
	                    if((a3-b3 -sum2)>0.00001 ||(sum2-a3+b3)>0.00001){cout<<"You are wrong！\n";js_3++;}else{cout<<"You are right！\n";js_3++;js1_3++;}
	                    break;
	             case 3:cout<<a3<<'*'<<b3<<'=';cin>>sum2;
	                    if((a3*b3 -sum2)>0.00001 ||(sum2-a3*b3)>0.00001){cout<<"You are wrong！\n";js_3++;}else{cout<<"You are right！\n";js_3++;js1_3++;}
	                    break;
	             case 4:if(a3<b3){t3=a3;a3=b3;b3=t3;}cout<<"如果无法整除，则结果保留六位有效数字"<<endl;cout<<a3<<'/'<<b3<<'='; cin>>sum2;
						if(((a3/b3)-sum2)>0.00001 ||(sum2-(a3/b3))>0.00001){cout<<"You are wrong！\n";js_3++;}else{cout<<"You are right！\n";js_3++;js1_3++;}
	                    break;
	         }
		}
		//算分 
		if(js1_3==num){
			cout<<"End! All right, that's great! Your score is 100."<<endl;
		}else{
			cout<<"End! Wrong question, your score is "<<score_mini*js1_3<<endl;
		}
	}
}


