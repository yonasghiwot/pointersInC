#include <stdio.h>
#include <stdlib.h>

int main(){
	int latitude = 32;
	int longitude = -64;
	go_south_east(latitude,longitude);
 return 0;
}

void go_south_east(int lat,int lon){
	lat = lat - 1;
	lon = lon + 1;
}
