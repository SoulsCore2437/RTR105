#include "foo.h"    /* Always include the header file that declares something
                     * in the C file that defines it. This makes sure that the
                     * declaration and definition are always in-sync.  Put this
                     * header first in foo.c to ensure the header is self-contained.
                     */
#include <stdio.h>
                       
/**
 * This is the function definition.
 * It is the actual body of the function which was declared elsewhere.
 */
void foo(int id, char *name)
{

fprintf(stdout,"id atrašanas vieta atmiņā: %p\n",&id);
fprintf(stdout,"id vērtība: %d\n",id);

fprintf(stdout,"name atrašanas vieta atmiņā: %p\n",name);
fprintf(stdout,"name vērtība: %s\n",name);

    fprintf(stdout, "foo(%d, \"%s\");\n", id, name);
    /* This will print how foo was called to stderr - standard error.
     * e.g., foo(42, "Hi!") will print `foo(42, "Hi!")`
     */
fprintf(stdout, "name[0] = %c \n", name[0]);
name[0]

}
