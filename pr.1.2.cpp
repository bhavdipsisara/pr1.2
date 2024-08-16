#include<iostream>

using namespace std;

class time{
	public:
		int hour;
	int second;
	int minute;
};

int main()
{
	time t;
	
	cout<<"enter the second =";
	cin>>t.second;
	
    t.hour=t.second/3600;
	t.minute=(t.second%3600)/60;
	t.second=(t.second%3600)%60;

	cout<<"The Final Time is=";
	cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
	
    cout<<"enter the hour =";
    cin>>t.hour;
     
    cout<<"enter minute =";
    cin>>t.minute;
     
    cout<<"enter second =";
    cin>>t.second;
    
    t.hour=(t.hour*60*60);
    t.minute=(t.minute*60);
    t.second=t.second;
	 
	cout<<"The Final Time is=";
	cout<<t.hour + t.minute + t.second;
    
     
}
     
     
     
     
     