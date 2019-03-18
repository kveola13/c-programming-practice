#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	int array[100];
	int count = 0;
	while(1){
		printf("please enter a number: \n");
		scanf("%d", &i);
		if(i == 0){
			for (int k = 0; k < count -1; k++) {
					if(array[k] <= array[k + 1]){
					int temp = array[k];
					array[k] = array[k+1];
					array[k+1] = temp;
				}
			}
			for (int j = 0; j < count; ++j)
			{
				printf("%d ", array[j]);
			}
			printf("\n");
			break;
		} else {
				array[count] = i;
				count++;
		}
	}		
}