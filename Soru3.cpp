#include<stdio.h>
#define MAX_SIZE 100

main(){
	int sayilar[MAX_SIZE], y[MAX_SIZE], x[MAX_SIZE];
	int swap,size1, size2;
	
	printf("Dizi Boyutu Girin");
    scanf("%d", &size1);
    printf("Dizi Elemanlarý Giriniz\n");
    for(int i =0; i < size1; i++){
    	scanf("%d", &x[i]);
	}
	
	for(int i = 1; i <size1; i++){
		for(int j = 0; j <size1-i; j++){
			if( x[j]> x[j+1]){
		      swap =  x[j];
			  x[j] =  x[j + 1];
			  x[j + 1] = swap;
		}
	  }
	}
	printf("Býrýncý Dýzý Sýralama:\n");
	for(int i = 0; i <size1; i++){
		printf("%d\n",  x[i]);
	}
	
	printf("Dizi Boyutu Girin");
    scanf("%d", &size2);
    printf("Dizi Elemanlarý Giriniz\n");
    for(int i =0; i < size2; i++){
    	scanf("%d", &y[i]);
	}
	for(int i = 1; i <size2; i++){
		for(int j = 0; j <size2-i; j++){
			if( y[j]> y[j+1]){
		       swap =  y[j];
			   y[j] =  y[j + 1];
			   y[j + 1] = swap;
		}
	  }
	}

	printf("Ikýncý Dýzý Sýralama:\n");
	for(int i = 0; i <size2; i++){
		printf("%d\n",  y[i]);
	}
	
	int yeniSize = size1 + size2;
	
	for(int i =0; i<=size1; i++){
		sayilar[i]=x[i];
	}
	for (int i = 0, j = size1; i < size2; i++, j++) {
        sayilar[j] = y[i];
    }
    for(int i = 1; i <yeniSize; i++){
		for(int j = 0; j <yeniSize-i; j++){
			if(sayilar[j]>sayilar[j+1]){
			 swap = sayilar[j];
			 sayilar[j] = sayilar[j + 1];
		 	 sayilar[j + 1] = swap;
		}
	  }
	}
	printf(" iki Dizinin Birleþimi Sýralama:\n");
	for(int i = 1; i < yeniSize; i++){
		printf("%d\n",  sayilar[i]);
	}
}
