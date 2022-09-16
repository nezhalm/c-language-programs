#include <stdio.h>
#include <stdlib.h>

void trieparselection(int taille,int tab[]){
int i,j;
int var,min;
      for( i=0;i<taille-1;i++){
      	min=i;
		for( j=i+1;j<taille;j++){
			
		if(tab[min]>tab[j]){
			var=tab[i];
			tab[i]=tab[min];	
			tab[min]=var;
		}
		}
		}
			for(i=0;i<taille;i++){
			printf("%d \n",tab[i]);	
	}			
	}
	
	void trieparbulles (int tab[],int taille){
		int i,j,var;
		for(j=1;j<taille;j++){
			for(i=0;i<taille-j;i++){
				if(tab[i]>tab[i+1]){
				var=tab[i];
				tab[i]=tab[i+1];	
				tab[i+1]=var;	
				}		
			}	
		}
		}	
	void inverse (int taille,int tab[]){
		int i,j,tmp;
		for(i=0,j=taille-1;j>i;i++,j--){
			
				 tmp=tab[i];
				 tab[i]=tab[j];
				 tab[j]=tmp;
			}	
	printf("le tableau unverse est ");
		for(i=0;i<taille;i++){
			printf("%d \n",tab[i]);	
	}
		}						
	
	void suprime (int taille,int tab[],int n){
		printf("donner lelement a suprime");
		scanf("%d",&n);
		int i,j,k=0,nv;
		for(i=0; i<taille; i++ )
    {
         if( tab[i]==n)
         {
             for(j=i; j<taille; j++)
             {
               tab[j]=tab[j+1]; 
             }
             k++;
         }  
	   
    }
    	nv=taille-k;
     printf("le tableau  est :");
    for(i=0; i<nv; i++ ){
    printf("\t%d", tab[i]); 
	}		
			
			
	}
int main() {
	
	int tab[30],taille,i,nbr,x,n;
	printf("donner la taille du tableau\n ");
	scanf("%d",&taille);

	for(i=0;i<taille;i++){
		printf("tab[%d]= ",i);
    	scanf("%d",&tab[i]);}
	
	printf("entrer 1pou trie pqr selection ou 2 pour inverse ou 3 pour la suppresion entrer 4 pour trie par bulles\n ");
	scanf("%d",&nbr);
switch(nbr){
	case 1:
		trieparselection(taille,tab);
	break;
	case 2:
		inverse(taille,tab);
	break;
	case 3:
		suprime(taille,tab,n);
		break;
		case 4:
			trieparbulles(tab,taille);
			break;
	default :
		printf("erreur");

	}

	return 0;}
	
	
	
