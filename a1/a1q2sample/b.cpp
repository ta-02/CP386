#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main(){
	int i;
	for(i=1; i<5; i++){
		sleep(rand()%2+1);
		cout << "b" << i << endl; 
	}
return 0;
}
