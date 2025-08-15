
/* bs.c */
#define DBLSIZE	sizeof (double)
#define INTSIZE	sizeof (int64_t)

union value {
	double	d;
	char	*sp;
	struct {
		FILE	*file;
		char	ffunc, f_or_p;
	} io;
	char	ch[DBLSIZE];
	int	intg[DBLSIZE/INTSIZE];
	struct {
		struct names	*head, *lastref;
	} ar_hdr;
	int	*htabl; /* really a `struct htab' */
};

typedef struct names {
	union value v;
	char	t,
		set;
	union {
		char	sname[6];
		struct {
			int	subscr; /* stored as a complement */
			struct	names *next;
		} ar;
	} u;
} names_t;

typedef struct estack {
	union value v;
	char	t, set;
} estack_t;

extern void intr(int num);
extern void setup(void);
extern void sigpipe(int num);
extern int main(int argc, char** argv);
extern void statement(void);
extern void singstat(void );
extern void fexec(char * s);
extern int comp(void);
extern int expr(int64_t a);
extern void e1(int64_t a);
extern void e2(int64_t a);
extern void e3(int64_t a);
extern int e3a(void);
extern void e4(int64_t a);
extern void e5(int64_t a);
extern void e6(int64_t a);
extern void e7(int64_t a);
extern void e8(int64_t a);
extern void e9(int64_t a);
extern void op(int64_t a);
extern void push(int64_t v);
extern void cerror(char *s);
extern int aname(char *np);
extern int ckname(char *np, char **table);
extern int cklabel(char *tname, int64_t *s);
extern int rlist(char delim);
extern struct htab *htable(int sz);
extern struct htitem *htitem(struct htab *h, char *key);
extern struct estack *execute(int64_t *instr, struct estack *estackp);
extern int true(struct estack *estack);
extern void error(char *s);
extern void prtsubs(char *ps, struct names *np);
extern int to_int(struct estack *estack);
extern double mkdouble(struct estack *estack);
extern char *to_str(struct estack *estack);
extern void io(int args, char *ns, double fd, char *flname, char *func);
extern void clear(void);
extern int local(char *);
extern void clearstk(struct estack *top, struct estack *bottom);
extern void graph(int args, struct estack *estack);
extern void putgr(int n, struct estack *estack);
extern void grio(void );
extern void putwd(int a);
extern long cvbase(int, char *s);
struct names *getar(struct names *np, int val);
extern struct names *lookup(char *);
extern struct names *nextname(int);
extern double intpow(double a, int b);
