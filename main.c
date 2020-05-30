#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int a = 0;
	int b = 0;
    char arr[] = {'1', '2'};
    int value = 0;

    for(size_t i = 0; i < sizeof(arr) / sizeof(*arr); ++i){

        value *= 10;
        value += arr[i] - '0';
		
    }
    printf("%d", value);
	
	if(a > b){
		printf("%d", a);
	}
	else{
		
		printf("%d", b);
	}
		
    return 0;
	
	
}
