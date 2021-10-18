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
	
	//grade2
    if(grade==3||grade==4){
    	int a2,b2,c2,t2,js_2 = 0,js1_2 = 0;
    	
    	while(js_2<num)
    	{
	         a2=(rand()%10000)+1;  //随机生成两个相加减乘除的两个数a，b
	         b2=(rand()%100)+1;
	         c2=(rand()%4)+1;   //随机生成运算符号
	         switch(c2)
	         {
	             case 1:cout<<a2<<'+'<<b2<<'=';cin>>sum1;
	                    if(a2+b2 != sum1){cout<<"You are wrong！\n";js_2++;}else{cout<<"You are right！\n";js_2++;js1_2++;}
	                    break;
	             case 2:if(a2<b2){t2=a2;a2=b2;b2=t2;}cout<<a2<<'-'<<b2<<'=';cin>>sum1;
	                    if(a2-b2 != sum1){cout<<"You are wrong！\n";js_2++;}else{cout<<"You are right！\n";js_2++;js1_2++;}
	                    break;
	             case 3:cout<<a2<<'*'<<b2<<'=';cin>>sum1;
                    	if(a2*b2 != sum1){cout<<"You are wrong！\n";js_2++;}else{cout<<"You are right！\n";js_2++;js1_2++;}
                    	break;
             	 case 4:if(a2<b2){t2=a2;a2=b2;b2=t2;}cout<<"如果无法整除，结果保留六位有效数字"<<endl;cout<<a2<<'/'<<b2<<'='; cin>>sum2;
             	 		cout<<(float)a2/(float)b2<<endl;
						if((float)a2/(float)b2- sum2>0.0001||sum2-(float)a2/(float)b2>0.0001){cout<<"You are wrong！\n";js_2++;}else{cout<<"You are right！\n";js_2++;js1_2++;}
						break;
			}
		}
		//算分 
		if(js1_2==num){
			cout<<"End! All right, that's great! Your score is 100."<<endl;
		}else{
			cout<<"End! Wrong question, your score is "<<score_mini*js1_2<<endl;
		}
	}
	
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


