#include <stdio.h>
#include <stdlib.h>
void inserer (int t[],int pos,int val){
	int tab[8],i;
	for(i=0;i<=pos;i++){
		tab[i]=t[i];
		if(i==pos){
			tab[i]=val;
		 	}   	
	} 
	for(i=pos;i<8;i++){
	tab[i+1]=t[i];	
	}
	for(i=0;i<7;i++){
		printf("%d",tab[i]);
	}
}
int main() {
	int t[100]={1,1,1,1,1,1};

	int a,b;
	printf("donner la position ");
	scanf("%d",&a);
	printf("donner la valeur ");
	scanf("%d",&b);
    inserer(t,a,b);

	
	return 0;
}
