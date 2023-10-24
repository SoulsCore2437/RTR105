#include "foo.h"
#include <stdio.h>

int main(void)
{
    int id_main = 42;
    printf("id_main atrašanas vieta atmiņa (izdruka no main): %p\n",&id_main);
    printf("id_main vērtība pirms foo funkcijas ispildes: %d\n",id_main);

    char *name_main = "mans teksts";
    printf("name_main atrašanas vieta atmiņa (izdruka no main): %p\n",name_main);
    printf("name_main vērtība pirms foo funkcijas ispildes: %s\n\n",name_main);

    foo(id_main, name_main);

    printf("\nid_main vērtība pēc foo funkcijas ispildes: %d\n",id_main);
    printf("name_main vērtība pēc foo funkcijas ispildes: %s\n",name_main);

    return 0;
}
