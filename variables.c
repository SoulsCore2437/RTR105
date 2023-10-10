#include<stdio.h>
int main(void)
{
char c1; // šī ir diskreta mainīgā deklarēšana - noteikta izmēra atmiņas 
	 // apgabals (char -> 1 byte) tiks sasaistīts ar noteiktu
	 // identifikatoru (c1)
	 // atmiņā nav vakuums => šajā rezervētājā atmiņas apgabalā būs
	 // kaut kada 0 un 1 kombinācija, kas palikusi pēc kādas iepriekšēj programmas
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n", c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n", c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n", c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n", c1);
printf("\n");
	 // mainīga "loma" ir - mainīties ...
c1 ='A'; // visbiežāk šo izmaiņu veiksim ar NB! piešķiršanas operāciju -=
	 // piešķiršanas operācijai ir gandrīz viszēmākā prioritāte
	 // (tā tiek izpildīta viena no pēdējām)
	 // labajā pusē izrēķinātais lielums (vērtība) tiek izmitināta
	 // atmiņas apgabalā, kas ir saistīts ar kreisajā pusē pieminēto
	 // identifikatoru
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (simbols): %c\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas  (dec): %d\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (hex): %#x\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (oct): %#o\n", c1);

printf("\n");
c1 = 0125;
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (simbols): %c\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas  (dec): %d\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (hex): %#x\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (oct): %#o\n", c1);

int birth_year = 2000;  // šī ir mainīgā definēsana (atmiņas apgabala sasaistīšana ar
		        // identifikatoru vērtības pešķiršana)
			// mainīgājiem identifikatoriem, jēb vārdiem vēlams izvēlēties
			// mnemoniskus nosaukumus - nosaukua vārds vai teksts atspoguļo
			// nolūku, kuram šis mainīgais ir paredžets
			// identifikators nevar sāksies ar ciparu, saturēt atstarpi
			// var saturēt - [A...Za...z] [0...9] [_]
printf("\n");
printf("birth_year mainīgā vērtība (simbols): %c\n", birth_year);
printf("birth_year mainīgā vērtība (dec): %d\n", birth_year);
printf("birth_year mainīgā vērtība (hex): %#x\n", birth_year);
printf("birth_year mainīgā vērtība (oct): %#o\n", birth_year);

int i1, i2 = 0, i3 = 0x13, i4 = 025;

int modified_birth_year = birth_year >> 4;
printf("\n");
printf("modified_birth_year mainīgā vērtība (simbols): %c\n", modified_birth_year);
printf("modified_birth_year mainīgā vērtība (dec): %d\n", modified_birth_year);
printf("modified_birth_year mainīgā vērtība (hex): %#x\n", modified_birth_year);
printf("modified_birth_year mainīgā vērtība (oct): %#o\n", modified_birth_year);

char c = 10;
int i = 4569;
float f = 3.e-16;
//*
3.140000 VS 107852331
3.200000 VS 1078774989
*/
double d = 4.789e39;
printf("\n");
printf("c=%d\t\t (piešķirtas atmiņas izmērs baitos - %ld,\n\t\t ",c,sizeof(c));
printf("atrašanas vieta atmiņā - %p)\n",&c);
printf("i=%d\t\t (piešķirtas atmiņas izmērs baitos - %ld,\n\t\t ",i,sizeof(i));
printf("atrašanas vieta atmiņā - %p)\n",&i);
printf("f=%.2e\t (piešķirtas atmiņas izmērs baitos - %ld,\n\t\t ",f,sizeof(f));
printf("atrašanas vieta atmiņā - %p)\n",&f);
printf("d=%.3e\t (piešķirtas atmiņas izmērs baitos - %ld,\n\t\t ",d,sizeof(d));
printf("atrašanas vieta atmiņā - %p)\n",&d);

printf("\n");
int *i_adrese = &i;
printf("i mainīgā adrese - %p\n",i_adrese);
int *i_adreses_kopija = i_adrese;
printf("i adreses kopija - %p\n",i_adreses_kopija);
printf("i mainīgā vērtība, izgūta pieliatojot tā adresi - %d\n",*i_adrese);
printf("i mainīgā vērtība, izgūta pieliatojot tā adreses kopiju - %d\n",*i_adreses_kopija);

int **i_adreses_adrese = &i_adrese;
printf("i adreses adrese - %p\n",i_adreses_adrese);
printf("i adreses adreses izmērs baitos - %ld\n",sizeof(i_adreses_adrese));


return 0;
}
