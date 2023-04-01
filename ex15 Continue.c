#include <stdio.h>
int main(){
	
	int i;	

	for(i=1; i<=10; i++){

		if(i == 5){
			continue; /* passa pra proxima */
		}
		
		printf("%d ", i);
	}
}
