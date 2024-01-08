#include <iostream.h>
using namespace std;
int main()
{
	int arr[5],i;
	for (i=0;i<5;i++)
	{
		cout<<"enter the integer"<<endl;
		cin<<arr[i];
	}
	cout<<"the values in array are"<<endl;
	for(i=0,i<5,i++)
	cout<<arr[i]<<endl;
	return 0;
}