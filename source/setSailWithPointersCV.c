#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat,int *lon){

        *lat = *lat - 1;
	*lon = *lon + 1;
}

int main(){
	int latitude= 32;
        printf("latitude lives at %p\n", &latitude);
	int longitude= -64;
        printf("latitude lives at %p\n", &longitude);
	go_south_east(&latitude,&longitude);
        printf("Curent location of the players is [%i,%i]\n", latitude,longitude);
       
 return 0;
}

