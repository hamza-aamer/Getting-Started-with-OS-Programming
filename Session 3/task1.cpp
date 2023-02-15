#include <iostream>
#include <unistd.h>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<"Enter Two Numbers : ";
	int n1,n2,max;
	cin>>n1>>n2;
    pid_t id  =fork();
				if (id) {
	while(n1!=n2){
        if (n1>n2)n1-=n2;
        else n2-=n1;
        }
        cout<<"HCF  =  " << n1<<endl;
	}
				else{
	max = (n1 > n2) ? n1 : n2;
    	do{
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    	} while (1);
	}
        return 0;
}
