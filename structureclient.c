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
		int  num;
		char mp[40];
		datenaise date;	
	}client;

	}
	
int main() {
client c[10];
int i,n;
printf("donner le nb des clients");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("donner le nom %d\n",i);
scanf("%s",c[i].nom);
printf("donner le prenom  %d\n",i);
scanf("%s",c[i].prenom);
printf("donner le num %d\n",i);
scanf("%d",&(c[i].num));
printf("donner le mot de passe %d \n",i);
scanf("%s",c[i].mp);
printf("donner le jour %d\n",i);
scanf("%d",&c[i].date.jour);
printf("donner le mois %d \n",i);
scanf("%d",&c[i].date.mois);
printf("donner lanne %d \n",i);
 scanf("%d",&c[i].date.anne);}
for(i=1;i<=n;i++){
printf("le nom du client est: %s\n",c[i].nom);
printf("le prenom du client est: %s \n",c[i].prenom);
printf("le mot de passe du client %s est  :%s  \n",c[i].nom,c[i].mp);
printf("le num de telephone est :0%d\n",c[i].num);
printf("la date de naissance du client  est: %d / %d / %d\n",c[i].date.jour,c[i].date.mois,c[i].date.anne);

}
	return 0;
}
