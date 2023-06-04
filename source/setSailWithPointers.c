#include <stdio.h>
#include <stdlib.h>

/*void go_south_east(int *lat,int *lon){

        *lat = *lat - 1;
	*lon = *lon + 1;
}*/

void go_south_east(int lat,int lon){
 //printf("Curent location of the players is [%i,%i]\n", latitude,longitude);
printf("Curent location of the players is [%i,%i]\n", lat,lon);
printf("lat lives at %p\n", &lat);
printf("lon lives at %p\n", &lon);

	lat = lat - 1;
	lon = lon + 1;
 //printf("Curent location of the players is [%i,%i]\n", latitude,longitude);
printf("Curent location of the players is [%i,%i]\n", lat,lon);
printf("lat lives at %p\n", &lat);
printf("lon lives at %p\n", &lon);
}


int main(){
	int latitude= 32;
printf("latitude lives at %p\n", &latitude);
	int longitude= -64;
printf("latitude lives at %p\n", &longitude);
	//go_south_east(&latitude,&longitude);
go_south_east(latitude,longitude);
printf("latitude lives after call at %p\n", &latitude);
printf("latitude lives after call  at %p\n", &longitude);
        printf("Curent location of the players is [%i,%i]\n", latitude,longitude);
        //go_south_east(32,-64);
        //printf("Curent location of the players is [%i,%i]\n", latitude,longitude);
 return 0;
}

