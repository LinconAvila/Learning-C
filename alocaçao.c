#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 5;
	int *p = &a;
	int ba[5];
	int *ptr=ba;
	* ba = 1;
	* (ba + 1)= 2;
	for(int i =0; i<(sizeof(ba)/sizeof(ba[0]));i++){
        if(i>1){
            *(ptr+i) = i + 1;
        }
        printf("%d",*(ptr+i));
	}


	return 0;
}
