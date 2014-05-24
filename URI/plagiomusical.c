#include<stdio.h>


int getNumero(char* c){
	/*switch (c){
		case "A"  : return 1;
		case "A#" || "Bb" : return 2;
		case "B" || "Cb": return 3;
		case "C": return 4;
		case "Db" || "C#": return 5;
		case "D" : return 6;
		case "Eb" || "D#": return 7;
		case "E" || "Fb": return 8;
		case "E#" || "F" : return 9;
		case "F#" || "Gb" : return 10;
		case "G" : return 11;
		case "G#" or "Ab" : return 12; 

	}*/
	if (!strcmp(c,"A"))
		return 1;
	if (!strcmp(c,"A#") || !strcmp(c,"Bb"))
		return 2;
	 if (!strcmp(c,"B") || !strcmp(c,"Cb"))
		return 3;
	if (!strcmp(c,"C"))
		return 4;
	if (!strcmp(c,"C#") || !strcmp(c,"Db"))
		return 5;
	if (!strcmp(c,"D") )
		return 6;
	if (!strcmp(c,"D#") || !strcmp(c,"Eb"))
		return 7;
	if (!strcmp(c,"E") )
		return 8;
	if (!strcmp(c,"E#") || !strcmp(c,"F"))
		return 9;
	if (!strcmp(c,"F#") || !strcmp(c,"Gb"))
		return 10;
	if (!strcmp(c,"G") )
		return 11;
	if (!strcmp(c,"G#") || !strcmp(c,"Ab"))
		return 12;

}

int getDiference(char* a, char* b){
	return getNumero(b) - getNumero(a);
}



int main(){
	int m,t;
	scanf("%d %d",&m,&t);
	char* musica[m];
	char* padrao[t];
	int p[t-1];
	int mu[m-1];

	int i;
	for ( i=0;i<m;i++){
		char* t=malloc(2*sizeof(char));
		scanf("%s",t);
		musica[i]=t;
	}
	for (i=0;i<m-1;i++){
		mu[i]=getDiference(musica[i],musica[i+1]);
	}

	for (i=0;i<t;i++){
		char* t=malloc(2*sizeof(char));
		scanf("%s",t);
		scanf("%s",padrao[i]);
	}
	for (i=0;i<t-1;i++){
		p[i]=getDiference(padrao[i],padrao[i+1]);
	}

	printf("%s ",mu[0]);
}
