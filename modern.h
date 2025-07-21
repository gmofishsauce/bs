/* pdxjjb 2025 modern prototypes */
/* don't want to include <stdlib> */
extern void __attribute__((noreturn)) exit(int);
extern void time(long*);
extern void srand(unsigned);
extern double rand(void);
extern unsigned long strlen(const char *);
extern int strncmp(const char *, const char *, unsigned long);
extern char* strncpy(char *, const char *, unsigned long);
extern char* strcpy(char *, const char *);
extern int strcmp(const char *, const char *);
extern char *strcat(char *, const char *);
extern int fork(void);
/* we declare varargs execl() with the right number of args for its sole use here */
extern int execl(const char*, const char*, const char*, const char*, const char*);
extern void wait(int *);
extern void *malloc(unsigned long);
extern void free(void *);
extern void *calloc(unsigned long, unsigned long);

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
