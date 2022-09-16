#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct {
    	int jour;
    	int mois;
    	int anne;
	}datenaise; 
	 
	typedef struct {
		char nom[20];
		char prenom[20];
		
		datenaise date;	
	}client;
	
	
int main() {
client c[4];
 int min1,min2,min3,i;
for(i=1;i<4;i++){
printf("donner le nom du client %d\n",i);
scanf("%s",c[i].nom);
printf("donner le prenom du client %d\n",i);
scanf("%s",c[i].prenom);
printf("donner le jour %d \n",i);
scanf("%d",&c[i].date.jour);
printf("donner le mois %d\n",i);
scanf("%d",&c[i].date.mois);
printf("donner lanne %d\n",i);
scanf("%d",&c[i].date.anne);
}
for(i=1;i<=4;i++){
printf("le nom du client est: %s\n",c[i].nom);
printf("le prenom du client est: %s\n",c[i].prenom);
printf("la date de naissance du client  est: %d / %d / %d\n",c[i].date.jour,c[i].date.mois,c[i].date.anne);
}
min1=c[1].date.anne;
min2=c[1].date.mois;
min3=c[1].date.jour;
for(i=2;i<=3;i++){
	if(c[i].date.anne<min1 ){
		min1=c[i].date.anne ; 
    	printf("le plus petit client est %s",c[i].prenom);}
}
    if(c[i].date.anne ==min1 )
{
	
	
}

		printf("le plus petit client est %s",c[i].prenom);
	return 0;
}
