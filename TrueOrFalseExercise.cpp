//137339 Peter Chemelil
#include <iostream>
using namespace std;

int checkeven(int);
int checkeven(int a){
	int result;
	if(a % 2 == 0){
		cout<< a <<" is TRUE"<<endl;
	
	}else
		cout<< a <<" is FALSE"<<endl;
		
	return result;
}

int main(){
	int x;
	cout<<"Please enter number to find out if it's TRUE or FALSE:"<<endl;
	cin>> x;
	cout<<"\n"<< checkeven(x)<<endl;
	
	return 0;
	
}

