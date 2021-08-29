#include<stdio.h>
#include<cstdlib>

using namespace std;

int main(){
	
	int num, mayor;
	
	for (int i=0; i<5; i++){
		
		printf("introduce un numero: ");
		scanf("%d", &num);
		
		if (i==0) {
			mayor = num;
		}
		else {
			if(num > mayor) mayor = num;
		}
	}
	printf("el numero mayor es : %d", mayor );
	
	return 0;
}
