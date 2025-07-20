/* pdxjjb 2025 modern prototypes */

/* atof.c */
extern double atof(char *);

/* string.c */
extern char *salloc(int, int);
extern int sindex(char *p, char *s);
extern char *trans(char *s, char *f, char *t);
extern char *substr(char *s, int f, int w);
extern int ematch(char *s, char *p);
extern void errxx(int c);

/* regexp.h */
extern char *compile(char *instring, char *ep, char *endbuf, int seof);
extern int step(char *p1, char *p2);
int advance(char *lp, char *ep);
void getrnge(char *str);
int ecmp(char *a, char *b, int count);

