#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    MessageBox(NULL,(LPCTSTR)TEXT("Although we reside in far corners of the world, having a good friend is akin to having a good neighbor.I hope this computing tool can help you"), (LPCTSTR)TEXT("The author's words"), MB_OK);
    printf("Calculation-tools  version:1.0");
	cout<<endl; 
    printf("Please select your calculation category:");
	cout<<endl;
    printf("1.Ordinary addition, subtraction, multiplication and division");
    cout<<endl;
    printf("2.Weight unit conversion");
    cout<<endl;
    printf("3.Area Conversion");
    int a;
    cin>>a;
    if(a=1)
    {
    	printf("Please enter the operation you want to calculate"); 
		cout<<endl;
		printf("1:+ 2:- 3:* 4:/");
		cout<<endl; 
		int b;
		cin>>b;
		if(b=1)
		{
			printf("Please type 2 addends");
			cout<<endl;
			int c,d,e;
			cin>>c>>d;
			e=c+d;
			printf("The answer is:");
			cout<<e<<endl;
			return 0;
			
		}
	}
    
}
