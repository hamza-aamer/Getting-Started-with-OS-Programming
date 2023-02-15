#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <cmath>
using namespace std;
int main(){
int n1,n2,n3;
cout<<"Enter 3 Numbers : ";
cin>>n1>>n2>>n3;
int system;
pid_t id1= fork();
if(id1){
	wait(&system);
	int max=  WEXITSTATUS(system);
	max=max*max;
	
	pid_t id2=fork();
	if (id2){
	wait(&system);
	bool even = WEXITSTATUS(system);
	if(even){
	cout<<"Since the square : "<<max<<" is even !\n Multiples less than 50 : \n";
	for(int x=1;x<50;x++){
	if (x==max) return 0;
	if (max%x==0)cout<<x<<" Is a Multiple ! \n"<<endl;
	}
	}
	else cout<<"Square "<<max<<" is odd! ";
	}
	else{
	if (max%2==0) exit(1);
	else exit(0);
	}

	
}
else{
	int maxi=max(max(n1,n2),n3);
	exit(maxi);
}

return 0;
}
