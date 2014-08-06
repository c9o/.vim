/* prblm2.c: this program
 *   Author: Charles E. Campbell, Jr.
 *   Date:   Dec 16, 2008
 */

/* =====================================================================
 * Header Section: {{{1
 */

/* ---------------------------------------------------------------------
 * Includes: {{{2
 */
#include <stdio.h>

/* ------------------------------------------------------------------------
 * Definitions: {{{2
 */

/* ------------------------------------------------------------------------
 * Typedefs: {{{2
 */

/* ------------------------------------------------------------------------
 * Local Data Structures: {{{2
 */

/* ------------------------------------------------------------------------
 * Global Data: {{{2
 */

/* ------------------------------------------------------------------------
 * Explanation: {{{2
 */

/* ------------------------------------------------------------------------
 * Prototypes: {{{2
 */
int main( int, char **); /* prblm2.c */
int func1(int);          /* prblm2.c */
int func2(int);          /* prblm2.c */
int func3(int);          /* prblm2.c */

/* ========================================================================
 * Functions: {{{1
 */

/* --------------------------------------------------------------------- */
/* main: {{{2 */
int main(
  int    argc,
  char **argv)
{
int ret= 0;

ret= func1(1);

return 0;
}

/* --------------------------------------------------------------------- */
/* func1: this function {{{2 */
int func1(int x)
{
int ret= 0;

ret= func2(x+1);

return ret;
}

/* --------------------------------------------------------------------- */
/* func2: this function {{{2 */
int func2(int x)
{
int ret= 0;

ret= func3(x+2);

return ret;
}

/* --------------------------------------------------------------------- */
/* func3: this function {{{2 */
int func3(int x)
{
int ret= 0;

/* division by zero error expected */
ret= 2*x/ret;

return ret;
}

/* ===================================================================== */
/* Modelines: {{{1
 * vim: fdm=marker
 */
