//LAMPTEY JOSEPH ODARKWEI//
//10953249//

#include<iostream>
using namespace std;

int main(){

int num,a,upto,sum = 0;

cout<<"Finding the sum of prime numbers upto:";
cin>>upto;

for(num = 2; num<=upto;num++)
{
	for(a=2;a<=(num/2);a++){
		
		if(num % a == 0){
			a = num;
			break;
		}
	}
	if(a != num){
		sum += num;
	
	}
	
	}
	
	cout<<endl<<"Sum of the prime numbers upto"<<upto<<":"<<sum;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}