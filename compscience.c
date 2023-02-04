#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

    /*1. Se dă vectorul x = [7, 1, 2, 5, 8, 10].Să se implementeze un program care să realizeze afișarea
    elemntelor vectorului, calculul și afișarea sumei și produsului elementelor vectorului.*/

    /*
int main()
{
	int x[10], n, sum = 0, p = 1;
	printf("n="); scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
		printf("%d ", x[i]);
	}
	for (int i = 0; i < n; i++)
	{
		sum += x[i];
		p = p * x[i];
	}
	printf("\n");
	printf("suma=%d\n", sum);
		
	printf("produsul=%d", p);
}*/



    /*2. Să se citească două numere naturale de la tastatură.Să se implementeze un program prin
    care sa se calculeze suma, produsul si cel mai mare mare număr citit.*/

	/*
int main()
{
	int a, b, suma = 0, produs = 1, max;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	suma = a + b;
	produs = a * b;
	if (a > b)
	{
		max = a;
	}
	else
		max = b;
	printf("suma este %d", suma);
	printf("\nprodusul este %d", produs);
	printf("\ncel mai mare numar este %d", max);

	return 0;
}*/



    /*3. Se dă vectorul v = [4,5,4,6,5,6,4,7,8,5,7,4].Să se citească un număr natural de la tastatură
    din intervalul[1, 10].Să se calculeze și să se afișeze de câte ori apare acel număr în vectorul v.*/

    /*
int main()
{
	int v[] = { 4,5,4,6,5,6,4,7,8,5,7,4 };
	int x, contor = 0;
	scanf("%d", &x);
	for (int i = 0; i < 13; i++)
	{
		if (v[i] == x)
		{
			contor++;
		}
	}
	printf("%d", contor);
}*/



    /*4. Se dă un vector care conține maxim 100 de numere reale.Să se completeze vectorul cu
    numere de la tastatură și sa se afișeze cel mai mare și cel mai mic număr din vector.*/

    /* 
int main()
{
int v[100] = { 1,3,-5,7,10 };
int max = v[0], min = v[0];
for (int i = 5; i < 10; i++)
{
	scanf("%d", &v[i]);
}
for (int i = 0; i < 10; i++)
{
	if (max < v[i])
	{
		max = v[i];
	}
	if (min > v[i])
	{
		min = v[i];
	}
}
printf("maximul este %d", max);
printf("\nminimul este %d", min);
}*/



    /*5. Se citește un număr natural de la tastatură.Să se implementeze un program care să afișeze
    cifrele numărului, produsul cifrelor numărului, oglinditul numărului precum și numărul
    obținut prin suma modulo 2 a fiecărei cifre cu diferenta sa până la 9.*/

    /*
int main()
{
int n, prod = 1, oglindit = 0;
int cif[10], i = 0;
scanf("%d", &n);
while (n)
{
	oglindit = oglindit * 10 + n % 10;
	cif[i] = n % 10;
	prod = prod * (n % 10);
	n = n / 10;
	i++;
}
printf("oglinditul este %d", oglindit);
printf("\nprodusul cifrelor este %d \n", prod);
for (int j = i - 1; j >= 0; j--)
{
	printf("%d ", cif[j]);
}
}*/



    /*6. Considerând vectorul de la problema 3, să se implementeze un program care realizează
     sortarea în ordine crescătoare a vectorului precum și afișarea variantei sortate.*/

    /*
int main()
{
int v[] = { 4,5,4,6,5,6,4,7,8,5,7,4 };
int sem = 1, i, aux;
while (sem)
{
	sem = 0;
	for (i = 0; i < 11; i++)
	{
		if (v[i] > v[i + 1])
		{
			aux = v[i];
			v[i] = v[i + 1];
			v[i + 1] = aux;
			sem = 1;
		}
	}
}
for (i = 0; i < 12; i++)
{
	printf("%d ", v[i]);
}
}*/



    /*7. Se dă vectorul v = [7, 6, 4, 9, 7, 3, 6] și vectorul w = [1 / 7, 0.5 / 7, 0.5 / 7, 2 / 7, 0.25 / 7, 1.25 / 7, 1.5 / 7].
    Să se calculeze media ponderată a vectorului v folosind ponderile din vectorul w.*/

    /*
int main()
{
	int v[] = { 7,6,4,9,7,3,6 };
	float w[] = { 1 / 7, 0.5 / 7, 0.5 / 7, 2 / 7, 0.25 / 7, 1.25 / 7, 1.5 / 7 };
	int i;
	float med, sum1 = 0, sum2 = 0, prod;
	for (i = 0; i < 7; i++)
	{
		prod = v[i] * w[i];
		sum1 = sum1 + prod;
		sum2 = sum2 + w[i];
	}
	med = sum1 / sum2;
	printf("%f", med);
}*/



    /*8. Fie o matrice A cu 3 linii și 3 coloane cu numere întregi citite de la tastatură.Să se afișeze
     matricea rezultată în urma sortării în ordine crescătoare a liniilor după mediile aritmetice
    ale liniilor precum și cea obținută prin sortarea coloanelor matricii în ordinea
    descrescătoare a mediilor pe coloane.*/

    /*
int main()
{
	int A[3][3], m, n, s1 = 0;
	float v[3];
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 20;

		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}



	for (int i = 0; i < m; i++)
	{
		s1 = 0;
		for (int j = 0; j < n; j++)
		{
			s1 = s1 + A[i][j];
		}
		v[i] = (float)s1 / n;
	}
	for (int i = 0; i < m; i++)
	{
		printf("%.2f ", v[i]);
	}
	for (int i = 0; i < m - 1; i++)

	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[i] > v[j])
			{
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;


				for (int k = 0; k < n; k++)
				{
					int c = A[i][k]; A[i][k] = A[j][k]; A[j][k] = c;
				}
			}
		}

	}
	printf("\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}*/



    /* 9. Se dă șirul de caractere s = ”ardei, roșii, ceapa, castraveți, mere, usturoi”.Să se implementeze
     o funție care calculează lungimea șirului s.*/

    /*
int main()
{
	char s; int nr = 0;
	s = getc(stdin);
	while (s != EOF)
	{
		nr++;
		s = getc(stdin);
	}
	printf("%d", nr);
}*/


     
	/*10. Pentru șirul de caractere de la problema 9 să se implementeze o funcție care calculează 
    numărul de vocale din șir.*/
     
	// METODA 1
    /*
int main()
{
char s[] = "ardei, roșii, ceapa, castraveți, mere, usturoi";
char c;
int i, n = 0;
for (i = 0; i < strlen(s); i++)
{
	c = s[i];
	switch (c)
	{
	case 'e':
		n++;
		break;
	case 'E':
		n++;
		break;
	case 'a':
		n++;
		break;
	case 'A':
		n++;
		break;
	case 'i':
		n++;
		break;
	case 'I':
		n++;
		break;
	case 'o':
		n++;
		break;
	case 'O':
		n++;
		break;
	case 'u':
		n++;
		break;
	case 'U':
		n++;
		break;

	default:
		break;
	}
}
printf("%d", n);
}*/

    // METODA 2   --  HACKER RANK
    /*
int main()
{
	char s;
	int nr = 0;
	s = getc(stdin);
	while (s != EOF)
	{
		s = tolower(s);
		if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
		{
			nr += 1;
		}
		s = getc(stdin);
	}
	printf("%d", nr);
}*/

    // METODA 3- VISUAL
    /*
int main()
{
	char s[100]; int nr = 0;
	gets_s(s, 100);
	for (int i = 0; i < strlen(s); i++)
	{
		s[i] = tolower(s[i]);
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			nr += 1;
		}
	}
	printf("%d", nr);
}*/



    /*11. Pentru șirul de caractere de la problema 9 să se calculeze numărul de cuvinte din șir știind
    faptul că acestea sunt sepatate prin virgulă.*/

    /*
int main()
{
char s[] = "ardei, roșii, ceapa, castraveți, mere, usturoi";
char* p;
int i, nr = 0;
p = strtok(s, ",");
while (p != 0) {
	nr++;
	p = strtok(NULL, ",");
}
printf("%d", nr);
}*/



    /*12. Să se implementeze o funcție care primește ca argumente două șiruri de caractere și un
    număr natural și returnează șirul rezultat prin intercalarea celui de - al doilea șir în primul
    începând cu poziția caracterului dată de cel de - al treilea argument.*/

    /*
char* intercalare(char s1[100], char s2[100], int poz);
int main()
{
	char s1[100], s2[100];
	int poz;
	char* s3;
	printf("primul sir "); gets_s(s1);
	printf("al doilea sir "); gets_s(s2);
	scanf("%d", &poz);
	s3 = intercalare(s1, s2, poz);
	puts(s3);
	return 0;
}
char* intercalare(char s1[100], char s2[100], int poz)
{
	int m, n, i;
	char* p;
	char aux[100];
	m = strlen(s1);
	n = strlen(s2);

	strcpy(aux, s1 + poz );
	strcpy(s1 + poz, s2);
	strcpy(s1 + poz + n, aux);

	p = s1;
	return p;
}
*/

    /*
char* intcal(char sir1[100], char sir2[100], int poz)
	{
		char aux[15]="";
		strcpy(aux, sir1 + poz);
		char aux1[15]="";
		for (int i = 0; i < poz; i++)
		{
			aux1[i] = sir1[i];
		}
		
		strcat(aux1, sir2);
		strcat(aux1, aux);

		char* sfarsit;
		sfarsit= aux1;
		return sfarsit;
	}

int main()
{
	char s1[100], s2[100],s[100];
	int poz;
	printf("primul sir "); gets_s(s1);
	printf("al doilea sir "); gets_s(s2);
	scanf("%d", &poz);
	
	char sir_inter[100]=" ";
	strcpy(sir_inter, intcal(s1, s2,poz));
	// char *sir_inter;
	// strcpy(s, sir_inter);
	// printf("%s", s);
	puts(sir_inter);
	return 0;
}*/



    /*13. Să se implementeze o funcție care realizează interschimbarea valorilor a două numere
    reale.*/

    /*
void interschimbare(float* a, float* b)
{
	float aux = *a;
	*a = *b;
	*b = aux;

}
int main()
{
	float a, b;
	printf("a="); scanf("%f", &a);
	printf("b="); scanf("%f", &b);
	interschimbare(&a, &b);
	printf("a=%.1f", a); printf("\nb=%.1f", b);
}
*/



    /*14. Fie șirurile s1 = “Ana”, s2 = “are” și s3 = “mere.”.Să se implementeze o funcție care
    returnează șirul rezultat prin concatenarea celor 3 șiruri.Funcția va primi șirurile ca
    argumente.*/

    // METODA 1
    /*
char* concatenare(char* s1, char* s2, char* s3);
int main()
{
	char s1[] = "Ana", s2[] = "are", s3[] = "mere";
	char* p;
	p = concatenare(s1, s2, s3);
	puts(p);
	return 0;
}
char* concatenare(char* s1, char* s2, char* s3)
{
	strcat(s1, s2);
	strcat(s1, s3);
	return s1;

}*/
 
    // METODA 2
    /*
char* concatenare(char* s1, char* s2, char* s3)
{
	strcat(s1, s2);
	char* aux = s1;
	strcat(aux, s3);
	return aux;
}
int main()
{
	char s1[100], s2[100], s3[100];
	printf("s1="); scanf("%s", &s1);
	printf("s2="); scanf("%s", &s2);
	printf("s2="); scanf("%s", &s3);
	char* rezultat = concatenare(s1, s2, s3);
	printf("rezultat=%s", rezultat);
}*/



   /*15. Să se implemeteze o funcție care realizează compararea alfabetică a două șiruri de 
    caractere.*/

    /*
int mystrcmp(char str1[], char str2[])
{
	int i = 0;
	while (1)
	{
		if (str1[i] != str2[i])
			return str1[i] - str2[i];
		if (str1[i] == '\0' || str2[i] == '\0')
			return 0;
		i++;
	}
}
int main()
{
	char s1[100] = "ca", s2[100] = "carmen";
	int rez = 0;
	rez = mystrcmp(s1, s2);
	if (rez == 0)
	{
		printf("cuv identice");

	}
	if (rez < 0)
		printf("sir 1 mai mic");
	if (rez > 0)
		printf("sir 1 mai mare");
}*/



   /*16. Să se implementeze o funcție care primește ca argumente două șiruri de caractere și
    returnează numărul de apariții a șirului al doilea în primul șir.*/

   /*
int nraparitii(char* s1, char* s2);
int main()
{
	int nr;
	char s1[100], s2[100];
	gets_s(s1);
	gets_s(s2);
	nr = nraparitii(s1, s2);
	printf("%d", nr);


}
int nraparitii(char* s1, char* s2)
{
	int  rez = 0;
	char* s3;
	s3 = strstr(s1, s2);
	while (s3 != NULL)
	{
		rez++;
		s3 = strstr(s3 + strlen(s2), s2);
	}
	return rez;
}*/



   /*17. Să se implementeze o funcție care primește ca argument un șir de caractere și un caracter. 
   Dacă al doilea argument este majusculă funcția va trebui să afișeze șirul fără vocale, în caz
   contrar funcția va returna șirul în oglindă.*/

   /*
char* sir(char* s1, char c)
{
	char v[] = "aeiouAEIOU";
	if (c >= 'A' && c <= 'Z')
	{
		for (int i = 0; i < strlen(s1); i++)
		{
			if (strchr(v, s1[i]) != 0)
			{
				strcpy(s1 + i, s1 + i + 1);
				i--;
			}
		}
	}
	else
		_strrev(s1);
	return s1;
}
int main()
{
	char s1[] = "Mare tarE peri";
	char* s;
	char c;
	scanf("%c", &c);
	s = sir(s1, c);
	puts(s);
}*/



   /*18. Să se implementeze o funcție care realizează concatenarea unui număr oarecare de șiruri
   de caractere.Funcția va primi două argumente : numărul de șiruri și pointerul către lista de
   șiruri de caractere.*/

   /*
char* nconcatenare(int nr, char cuvinte[5][100]);
int main(void)
{
	int nr;
	char* sir;
	char cuvinte[5][100];
	for (int i = 0; i < 5; i++)
	{
		gets_s(cuvinte[i]);
	}
	printf("nr="); scanf("%d", &nr);
	sir = nconcatenare(3, cuvinte);
	puts(sir);

	return 0;
}
char* nconcatenare(int nr, char cuvinte[5][100])
{
	char* rez = NULL;
	int i, n;
	for (i = 1; i < nr; i++)
	{
		strcat(cuvinte[i - 1], cuvinte[i]);
		rez = strcpy(cuvinte[i], cuvinte[i - 1]);
	}
	return rez;
}*/



   /*19. Să se citească de la tastatură 10 nume proprii.Să se implementeze o funcție care realizează
    sortarea alfabetică a acestora, returnarea rezultatului și afișarea acestuia.*/




    /*20. Să se implementeze o funcție care primește un vector de 4 elemente numere reale și
    returnează matricea cu 4 linii și 4 coloane care conține vectorul și permutările acestuia.*/

    /*
void permutari(int v[3])
{
	int aux;
	for (int i = 0; i < 4; i++)
	{
		aux = v[3];
		for (int k = 2; k >= 0; k--)
			v[k + 1] = v[k];
		v[0] = aux;
		for (int k = 0; k < 4; k++)
		{
			printf("%d ", v[k]);

		}
		printf("\n");
	}

}
int main()
{
	int v[100];
	for (int i = 0; i < 4; i++)
		scanf("%d", &v[i]);
	printf("Vectorul este:");
	for (int i = 0; i < 4; i++)
		printf("%d ", v[i]);
	printf("\n");

	permutari(v);
}*/


    /*21. Să se implementeze o funcție care returnează rezultatul înmulțirii matriceale dintre două
    matrici nepătratice.*/

     // Inmultire a doua matrici A cu m linii si n coloane si B cu n linii si p coloane.
    // MET 1
   /*
int main()
{
int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p;
printf("nr linii A:"); scanf("%d", &m);
printf("nr coloane A si nr linii B:"); scanf("%d", &n);
printf("nr coloane B:"); scanf("%d", &p);
for (i = 0; i < m; i++)
{
	for (j = 0; j < n; j++)
	{
		a[i][j] = rand() % 10;
		printf("%d ", a[i][j]);
	}
	printf("\n");
}
printf("\n");
for (j = 0; j < n; j++)
{
	for (k = 0; k < p; k++)
	{
		b[j][k] = rand() % 10;
		printf("%d ", b[j][k]);
	}
	printf("\n");
}
for (i = 0; i < m; i++)
{
	for (j = 0; j < p; j++)
	{
		c[i][j] = 0;
		for (k = 0; k < n; k++)
		{
			c[i][j] += a[i][k] * b[k][j]; // a+=2 echiv a=a+2
		}
		printf("%d ", c[i][j]);
	}
	printf("\n");
}*/

    // MET 2 -FUNCTII
    /*
void inmultire(int mat1[20][30], int mat2[30][20], int m, int n, int p)
{
	int c[20][20] = { 0 };
	int k;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			for (int k = 0; k < n; k++)
			{
				c[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	printf("\n\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}


}
int main()
{
	int mat1[20][30], mat2[30][20];
	int m, n, p;
	printf("nr de linii este:"); scanf("%d", &m);
	printf("nr de col este:"); scanf("%d", &n);
	printf("nr de col mat 2:"); scanf("%d", &p);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			mat1[i][j] = rand() % 4;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < p; j++)
			mat2[i][j] = rand() % 6;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	inmultire(mat1, mat2, m, n, p);

}*/


 
    /*22. Să se implementeze o funcție care primește ca argument un tablou tridimensional 3x3x3
    cu elemete naturale și returnează cel mai mare element din tablou, media aritmetică a
    elementelor din tablou precum și un vector care conține diagonala tabloului(cubului).*/

    /*
void cub(unsigned int c[3][3][3])
{
	int max = 0, ma = 0, i, j, k;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 3; k++)
			{
				if (c[i][j][k] > max)
					max = c[i][j][k];
				ma += c[i][j][k];
			}
	ma = ma / 27;
	printf("%d\n%d\n", max, ma);
	for (i = 0; i < 3; i++)
		printf("%d ", c[i][i][i]);

}

int main()
{
	unsigned int mat[3][3][3] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9 };
	cub(mat);
}*/



    /*23. Să se implementeze o funcție care realizează interschimabarea valorilor conținute de două
    structuri având următoarele câmpuri : nume(șir de caractere), prenume(șir de caractere),
    vârstă(număr natural) și factor de risc pentru îmbolnăvirea cu diabet(număr real în
	intervalul(0, 1))*/

    // METODA 1
        /*
typedef struct persoana {

	char nume[20];
	char prenume[20];
	int varsta;
	float factor_risc;
};
void interschimba_sir(char* sir1, char* sir2) {

	char aux[20];
	strcpy(aux, sir1);
	strcpy(sir1, sir2);
	strcpy(sir2, aux);
}
void interschimba_struct(persoana& x, persoana& y) {

	//aici puteai al fel de bien sa nu faci functie separata
	// si efecitv sa scrii toata faza aia cu strcpy aici
	//dar e mai elegant asa :))
	interschimba_sir(x.nume, y.nume);
	interschimba_sir(x.prenume, y.prenume);


	//interschimbi varsta
	int aux = x.varsta;
	x.varsta = y.varsta;
	y.varsta = aux;


	//interschimbi factoru de risc
	float aux2 = x.factor_risc;
	x.factor_risc = y.factor_risc;
	y.factor_risc = aux2;


}
void citeste_struct(persoana& pers) {


	scanf("%s", pers.nume);
	scanf("%s", pers.prenume);
	scanf("%d", &pers.varsta);
	scanf("%f", &pers.factor_risc);
}
void afisare_struct(persoana pers) {

	printf("%s %s %d %f\n", pers.nume, pers.prenume, pers.varsta, pers.factor_risc);
}
void interschimb(persoana& pers1, persoana& pers2) {

	persoana aux = pers1;
	pers1 = pers2;
	pers2 = aux;
}
int main(int argc, char* argv[])
{
	persoana pers1, pers2;

	// fucntia asta efectiv citeste de la tastatura datele ce le vrei in structura
	// puteai la fel de bine sa scrii topt ce e in functie aici in main
	// dar era nasol ca trebuia sa scrii de 2 ori pentru ca au 2 persoane
	// si ar fi tot mai nasol cu cat mai multe persoana ai
	citeste_struct(pers1);
	citeste_struct(pers2);

	printf("\n Aici afisam in ordinea initiala:\n");
	// aceeasi explicatie ca mai sus, sa nu scriem de mai multe ori
	afisare_struct(pers1);
	afisare_struct(pers2);

	//partea amuzanta e ca defapt structurile nu au nevoie de o functie separat pentru interschimbare
	// ai putea scrie direct interschimbarea folosind numele lor
	// uitate_te mai sus la functie numita exemplu ca sa vezi la ce ma refer
	//interschimba_struct(pers1, pers2);
	interschimb(pers1, pers2);

	printf("\n Aici afisam dupa inversare:\n");
	afisare_struct(pers1);
	afisare_struct(pers2);
}
*/

    // METODA 2
	    /*
struct Persoana {
	char nume[20];
	char prenume[20];
	int varsta;
	float factorDeRisc;
}p1,p2;
void interschimbare(Persoana*, Persoana*);
void afis(Persoana);

int main()
{
	Persoana p1 = Persoana();
	strcpy(p1.nume, "nume1" );
	strcpy(p1.prenume, "prenume1");
	p1.varsta = 10;
	p1.factorDeRisc = 0.1;

	Persoana p2 = Persoana();
	strcpy(p2.nume, "nume2");
	strcpy(p2.prenume, "prenume2");
	p2.varsta = 20;
	p2.factorDeRisc = 0.9;

	printf("p1:\n");
	afis(p1);
	printf("p2:\n");
	afis(p2);
	printf("After\n");
	interschimbare(&p1, &p2);
	printf("p1:\n");
	afis(p1);
	printf("p2:\n");
	afis(p2);
	//return 0;
}
void afis(Persoana p) {
	printf("Nume: %s \nPrenume: %s\nVarsta: %d\nFactorDeRisc: %f\n", p.nume, p.prenume, p.varsta, p.factorDeRisc);
}
void interschimbare(Persoana* p1, Persoana* p2) {
	Persoana aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}
*/

   // METODA 3
        /*
struct Persoana
{
	char nume[20];
	char prenume[20];
	int varsta;
	float factor;
};

void interschimbare(Persoana* unu, Persoana* doi)
{
	char nume[20];
	char prenume[20];
	int varsta;
	float factor;
	strcpy(nume, unu->nume);
	strcpy(unu->nume, doi->nume);
	strcpy(doi->nume, nume);
	strcpy(prenume, unu->prenume);
	strcpy(unu->prenume, doi->prenume);
	strcpy(doi->prenume, prenume);
	varsta = unu->varsta;
	unu->varsta = doi->varsta;
	doi->varsta = varsta;
	factor = unu->factor;
	unu->factor = doi->factor;
	doi->factor = factor;

}
int main()
{
	struct Persoana unu, doi;
	strcpy(unu.nume, "Ana");
	strcpy(unu.prenume, "Dan");
	unu.varsta = 12;
	unu.factor = 0.2;
	strcpy(doi.nume, "Bna");
	strcpy(doi.prenume, "Can");
	doi.varsta = 10;
	doi.factor = 0.1;
	interschimbare(&unu, &doi);
	printf("%s", unu.nume);
}*/



   /* 24. Să se inițializeze de la tastatură un vector de structuri (minim 5 elemente) ca cea descrisă
   la problema 20 și să se implementeze o funcție care primește acest vector, și un șir de
   caractere care desemnează un nume propriu și returnează acele intrări din lista de structuri
   care conțin acel nume propriu atât ca nume cât și ca prenume.*/

   // METODA 1
   /*
typedef struct persoana {

	char nume[20];
	char prenume[20];
	int varsta;
	float factor_risc;
};
void citeste_struct(persoana& pers) {

	scanf("%s", pers.nume);
	scanf("%s", pers.prenume);
	scanf("%d", &pers.varsta);
	scanf("%f", &pers.factor_risc);
}
void afisare_struct(persoana pers) {

	printf("%s %s %d %.2f\n", pers.nume, pers.prenume, pers.varsta, pers.factor_risc);
}
void search_for_names(persoana pers[], int n, const char* sir) {

	for (int i = 0; i < n; i++) {

		if (strcmp(pers[i].nume, sir) == 0)
			afisare_struct(pers[i]);
		else if (strcmp(pers[i].prenume, sir) == 0)
			afisare_struct(pers[i]);
	}
}
int main(int argc, char* argv[])
{
	persoana array[10];  // vector de 10 elem de tip PERSOANA
	int number_of_persons = 5;
	for (int i = 0; i < number_of_persons; i++) {
		citeste_struct(array[i]);
	}

	printf("\n");
	search_for_names(array, number_of_persons, "gruescu");
}
*/

   // METODA 2
   /*
struct Persoana
{
	char nume[20];
	char prenume[20];
	int varsta;
	float factor;
}v[5];
void functie(Persoana qwerty[5], const char nume[20])
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(qwerty[i].nume, nume) == 0 || strcmp(qwerty[i].prenume, nume) == 0)
		{
			printf("%s %s %d %.2f\n", qwerty[i].nume, qwerty[i].prenume, qwerty[i].varsta, qwerty[i].factor);
		}

	}
}

int main()
{

	v[0] = { "Alex","Mihai",23,0.1 };
	v[1] = { "Ana", "Dan", 12,0.2 };
	v[2] = { "Ion", "Alex", 13,0.3 };
	v[3] = { "Alex", "Ina", 14,0.4 };
	v[4] = { "Qwe", "Dan", 15,0.5 };

	functie(v, "Alex");
}*/


    /*25. Se consideră un fișier text care conține un fragment dintr - un roman.Să se implementeze o
    funcție care primește ca argument numele fișierului text și afișează textul din fișier precum
    și numărul de propoziții / fraze din fragment știind că fiecare propoziție / frază se termină cu
    caracterul “.”(punct).*/

    /*
void functie(const char nume[20])
{
	FILE* fin = fopen(nume, "r");
	char sir[1000];
	int contor = 0, nr_prop = 0;

	while (!feof(fin))
	{
		fscanf(fin, "%c", &sir[contor++]);
		printf("%c", sir[contor - 1]);
		if (sir[contor - 1] == '.')
			nr_prop++;
	}
	printf("\n%d", nr_prop);

}*/
	


	/*26. Să se implementeze o funcție care primește ca argumet pointer - ul la un fișier text și
    retunrează numărul de cuvinte din fișier și cel mai lung cuvânt din text.*/

   /*
void functie(FILE* fin)
{
	char sir[100];
	int contor = 0, max = 0;
	char cuvant[100];
	while (!feof(fin))
	{

		fscanf(fin, "%s", &sir);
		contor++;
		if (strlen(sir) > max)
		{
			max = strlen(sir);
			strcpy(cuvant, sir);
		}

	}
	printf("%d", contor);
	printf("\n%s", cuvant);
}*/

	

	/*27. Să se implementeze o funcție care primește pointerii a două fișiere text și realizează
    copierea primului fișier în cel de - al doilea de la final către început.

   /*
void functie(FILE* fin, FILE* fout)
{
	char sir[1000];
	int contor = 0;
	while (!feof(fin))
	{
		fscanf(fin, "%c", &sir[contor++]);
	}
	for (int i = contor; i > 0; i--)
	{
		fprintf(fout, "%c", sir[i]);
	}
}*/



   /*28. Să se implementeze o funcție care primește numele unui fișier text și un număr natural.
    Funcția va returna cuvântul din text cu cel mai mare număr de vocale dacă cel de - al doilea
    argument al funcției este un număr prim iar în caz contrar va returna cuvântul cu cel mai
    mic număr de vocale.*/

   /*
void functie(char nume[20], int n)
{
	FILE* fin = fopen(nume, "r");
	int gasit = 0, contor = 0;
	char sir[1000], cuvant[20];
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			gasit = 1;
	}
	if (gasit == 0)
	{
		int max = 0;
		int vocale;
		while (!feof(fin))
		{
			vocale = 0;
			fscanf(fin, "%s", &sir);
			for (int i = 0; i < strlen(sir); i++)
				if (sir[i] == 'a' || sir[i] == 'e')
					vocale++;
			if (vocale > max)
			{
				max = vocale;
				strcpy(cuvant, sir);
			}

		}
		printf("%s", cuvant);
	}
	else
	{
		int min = 50;
		int vocale;
		while (!feof(fin))
		{
			vocale = 0;
			fscanf(fin, "%s", &sir);
			for (int i = 0; i < strlen(sir); i++)
				if (sir[i] == 'a' || sir[i] == 'e')
					vocale++;
			if (vocale < min)
			{
				min = vocale;
				strcpy(cuvant, sir);
			}

		}
		printf("%s", cuvant);
	}
}*/


    /*29. Se consideră un fișier text care conține pe fiecare linie următoarele date despre studenți :
    nume, prenume și media anuală.Să se implementeze o funcție care returnează lista
    studenților(nume și prenume) care au obținut medii mai mari de 7,50.*/

    /*
void functie(FILE* fin)
{
	char nume[20];
	char prenume[20];
	float medie;
	while (!feof(fin))
	{
		fscanf(fin, "%s %s %f", &nume, &prenume, &medie);
		if (medie >= 7.50)
		{
		printf("%s %s %f\n", nume, prenume, medie);
		}
	}
}*/



    /*30. Fie un text care conține numere reale.Să se implenteze o funcție returnează și afișează doar
    numerele din text*/

   /*
void functie(FILE* fin)
{
	char cuvant[30];
	while (!feof(fin))
	{
		fscanf(fin, "%s", &cuvant);
		if (atoi(cuvant))
			printf("%s ", cuvant);
	}
}*/



    /*31. Se dă un fișier binar care conține numere de tip int ale unei matrici pătratice.Să se afișeze
    sub formă matriceală matricea din fisier și să se implementeze o funcție care primește trei
    argumente : matricea din fișier, numărul de linii al matricii și numele unui al doilea fișier
    text.Funcția va realiza scrierea în fișierul al cărui nume este dat în al treilea argument doar
    valorile matricii care sunt pătrate perfecte.*/

     /*
void functie(int matrice[20][20], int n, const char nume[20])
{
	FILE* fout = fopen(nume, "w+");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (sqrt(matrice[i][j]) * sqrt(matrice[i][j]) == matrice[i][j])
			{
				fprintf(fout, "%d ", matrice[i][j]);
			}
		}
}

int main()
{
	FILE* fin = fopen("intrare", "rb");
	int aux, n, variab = 0;
	int matr[20][20], contor = 0, v[400];
	while (!feof(fin))
	{
		fread(&aux, sizeof(int), 1, fin);
		v[contor++] = aux;
		if (feof(fin))break;
	}
	n = sqrt(contor);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			matr[i][j] = v[variab++];
	functie(matr, n, "iesire.txt");

}*/