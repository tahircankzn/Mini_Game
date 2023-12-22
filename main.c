#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // sleep için



int main()
{

  char ihtiyac[9][15] = {"tokluk","uyku","sevgi","sosyallesme","saglik","egitim","hijyen","tuvalet","eglence"};
  int duzey[9] = {10,10,10,10,10,10,10,10,10};
  
  char yemekler[5][30] = {"konserve bezelye","geyik eti","kahve","yaban mersini","mantar"};
  int yemekler_point[5] = {1,3,1,1,2};
  
  
  char sevgi_type[3][30] = {"gitar cal","kart oyna"};
  int sevgi_type_point[3] = {4,2};
  
  
  char saglik_type[4][30] = {"bandaj","medkit","sicak cikolata","agri kesici"};
  int saglik_type_point[4] = {1,2,3,1};
  
  
  char egitim_type[3][30] = {"gitar ogret","avlanmayi ogret","tuzak kurmayi ogret"};
  int egitim_type_point[3] = {3,2,1};
  
  char hijyen_type[3][30] = {"banyoya gonder","tirnak kestir","sac tarama"};
  int hijyen_type_point[3] = {3,2,1};
  
  char sosyallesme_type[2][30] = {"avlanmya cikin","zombilerle oynayin"};
  int sosyallesme_type_point[2] = {4,2};
  
  char eglence_type[2][30] = {"dans etme"};
  int eglence_type_point[1] = {3};
  
  
  
  
  char eylem;
  int choice;
  
  printf(" Joel and Elly From The Last Of Us \n-------------");
  
  void ihtiyaclar(){
  	int i = 0;
  	for(i;i<9;i++){
  		printf("\n%d - %s : %d",i+1,ihtiyac[i],duzey[i]);
	  };
  };
  
  

  
  
  ihtiyaclar();
  
  while (1){
	printf("\n-------------\nEylem secin : ");
	scanf("%c",&eylem);
	
  
	switch(eylem)
		{
  			case '1': // tokluk
  				{
  					int i;
  					for(i=0;i<5;i++){
  						printf("\n%d - %s",i+1,yemekler[i]);
					  };
					  
					duzey[1] = duzey[1]-4;
					
  					printf("\nseciminiz : ");
  					scanf("%d",&choice);
  					
  					duzey[0] = duzey[0] + yemekler_point[choice-1];
  					
  					ihtiyaclar();
  					
  					
			
		  		break;
				  };
				  
				  
			case '2': // uyku
  				{
  					printf("Elly uyuyor\n");
  					sleep(1);
  					printf("zzz..\n");
  					sleep(1);
  					printf("Elly uyandi ve acikmis\n");
  					duzey[0] = duzey[0]-5;
  					duzey[6] = duzey[6]-4;
  					duzey[7] = duzey[7]-2;
			
		  		break;
				  };
				  
				  
			case '3': // sevgi
  				{
  					int i;
  					for(i=0;i<2;i++){
  						printf("\n%d - %s",i+1,sevgi_type[i]);
					  };
					  
					duzey[4] = duzey[4]+3;
  					printf("\nseciminiz : ");
  					scanf("%d",&choice);
  					
  					duzey[2] = duzey[2] + sevgi_type_point[choice-1];
  					
  					ihtiyaclar();
			
		  		break;
				  };
				  
			case '4': // sosyallesme
  				{
  					int i;
  					for(i=0;i<2;i++){
  						printf("\n%d - %s",i+1,sosyallesme_type[i]);
					  };
					duzey[0] = duzey[0]-3;
					duzey[4] = duzey[4]+3;
					
  					printf("\nseciminiz : ");
  					scanf("%d",&choice);
  					
  					duzey[3] = duzey[3] + sosyallesme_type_point[choice-1];
  					
  					ihtiyaclar();
			
		  		break;
				  };
				  
				  
			case '5': // saglik
  				{
  					int i;
  					for(i=0;i<2;i++){
  						printf("\n%d - %s",i+1,saglik_type[i]);
					  };
					  
					duzey[4] = duzey[4]+3;
  					printf("\nseciminiz : ");
  					scanf("%d",&choice);
  					
  					duzey[4] = duzey[4] + saglik_type_point[choice-1];
  					
  					ihtiyaclar();
			
		  		break;
				  };
				  
				  
			case '6': // egitim
  				{
  					int i;
  					for(i=0;i<2;i++){
  						printf("\n%d - %s",i+1,egitim_type[i]);
					  };
					duzey[5] = duzey[5]+3;
					duzey[0] = duzey[0]-3;
					
  					printf("\nseciminiz : ");
  					scanf("%d",&choice);
  					
  					duzey[5] = duzey[5] + egitim_type_point[choice-1];
  					
  					ihtiyaclar();
			
		  		break;
				  };
				  
			case '7': // hijyen
  				{
  					int i;
  					for(i=0;i<2;i++){
  						printf("\n%d - %s",i+1,hijyen_type[i]);
					  };
					  
					
  					printf("\nseciminiz : ");
  					scanf("%d",&choice);
  					
  					duzey[6] = duzey[6] + hijyen_type_point[choice-1];
  					
  					ihtiyaclar();
			
		  		break;
				  };
				  
				  
			case '8': // tuvalet
  				{
  					printf("Elly tuvalete gidiyor\n");
  					sleep(1);
  					printf("...\n");
  					sleep(1);
  					printf("Elly geri geldi\n");
			
		  		break;
				  };
				  
				  
			case '9': // eglence
  				{
  					//eglence_type_point[0];
			
		  		break;
				  };
  		    	
		};
  };
  
  
}
