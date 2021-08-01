/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYCHECK "yyyymmdd"

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0

#ifndef yyparse
#define yyparse    expr.oxout_parse
#endif /* yyparse */

#ifndef yylex
#define yylex      expr.oxout_lex
#endif /* yylex */

#ifndef yyerror
#define yyerror    expr.oxout_error
#endif /* yyerror */

#ifndef yychar
#define yychar     expr.oxout_char
#endif /* yychar */

#ifndef yyval
#define yyval      expr.oxout_val
#endif /* yyval */

#ifndef yylval
#define yylval     expr.oxout_lval
#endif /* yylval */

#ifndef yydebug
#define yydebug    expr.oxout_debug
#endif /* yydebug */

#ifndef yynerrs
#define yynerrs    expr.oxout_nerrs
#endif /* yynerrs */

#ifndef yyerrflag
#define yyerrflag  expr.oxout_errflag
#endif /* yyerrflag */

#ifndef yylhs
#define yylhs      expr.oxout_lhs
#endif /* yylhs */

#ifndef yylen
#define yylen      expr.oxout_len
#endif /* yylen */

#ifndef yydefred
#define yydefred   expr.oxout_defred
#endif /* yydefred */

#ifndef yydgoto
#define yydgoto    expr.oxout_dgoto
#endif /* yydgoto */

#ifndef yysindex
#define yysindex   expr.oxout_sindex
#endif /* yysindex */

#ifndef yyrindex
#define yyrindex   expr.oxout_rindex
#endif /* yyrindex */

#ifndef yygindex
#define yygindex   expr.oxout_gindex
#endif /* yygindex */

#ifndef yytable
#define yytable    expr.oxout_table
#endif /* yytable */

#ifndef yycheck
#define yycheck    expr.oxout_check
#endif /* yycheck */

#ifndef yyname
#define yyname     expr.oxout_name
#endif /* yyname */

#ifndef yyrule
#define yyrule     expr.oxout_rule
#endif /* yyrule */
#define YYPREFIX "expr.oxout_"

#define YYPURE 0

#line 5 "expr.oxout.y"
#include <stdlib.h>
#include <string.h>
#line 8 "expr.Y"
 
#include "expr.oxout.h" 
#include <stdio.h>

extern int yylex(void);
extern void yyerror(const char *);
#line 27 "expr.oxout.y"
#include <limits.h>
#define yyyR USHRT_MAX  
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 31 "expr.oxout.y"
typedef union YYSTYPE {
struct yyyOxAttrbs {
struct yyyStackItem *yyyOxStackItem;
} yyyOxAttrbs;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 38 "expr.oxout.y"
#include <stdio.h>
#include <stdarg.h>

static int yyyYok = 1;

extern yyyFT yyyRCIL[];

void yyyExecuteRRsection(yyyGNT *rootNode);
void yyyYoxInit(void);
void yyyDecorate(void);
struct yyyOxAttrbs; /* hack required to compensate for 'msta' behavior */
void yyyGenIntNode(long yyyProdNum, int yyyRHSlength, int yyyNattrbs, struct yyyOxAttrbs *yyval_OxAttrbs, ...);
void yyyAdjustINRC(long yyyProdNum, int yyyRHSlength, long startP, long stopP, struct yyyOxAttrbs *yyval_OxAttrbs, ...);
void yyyCheckUnsolvedInstTrav(yyyGNT *rootNode,long *nNZrc,long *cycleSum);
void yyyUnsolvedInstSearchTrav(yyyGNT *pNode);
void yyyUnsolvedInstSearchTravAux(yyyGNT *pNode);
void yyyabort(void);

#line 146 "expr.oxout.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ID 257
#define CONST 258
#define YYERRCODE 256
typedef int YYINT;
static const YYINT expr.oxout_lhs[] = {                  -1,
    2,    0,    1,    3,    3,    3,    3,    3,    3,    3,
};
static const YYINT expr.oxout_len[] = {                   2,
    0,    2,    1,    3,    3,    3,    3,    3,    1,    1,
};
static const YYINT expr.oxout_defred[] = {                1,
    0,    0,    9,   10,    0,    2,    0,    0,    0,    0,
    0,    0,    8,    0,    0,    4,    0,
};
static const YYINT expr.oxout_dgoto[] = {                 1,
    6,    2,    7,
};
static const YYINT expr.oxout_sindex[] = {                0,
    0,  -40,    0,    0,  -40,    0,  -18,  -24,  -40,  -40,
  -40,  -40,    0,  -37,  -37,    0,  -39,
};
static const YYINT expr.oxout_rindex[] = {                0,
    0,    0,    0,    0,    0,    0,    6,    0,    0,    0,
    0,    0,    0,    2,    8,    0,    1,
};
static const YYINT expr.oxout_gindex[] = {                0,
    0,    0,    4,
};
#define YYTABLESIZE 218
static const YYINT expr.oxout_table[] = {                 5,
    6,    5,   11,    0,   11,    3,    0,    7,    8,   12,
    0,    0,   14,   15,   16,   17,   13,   11,    9,    0,
   10,    0,   12,   11,    9,    0,   10,    0,   12,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    6,    5,    6,    5,    6,    5,    6,    7,    0,
    7,    0,    7,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    3,    4,
};
static const YYINT expr.oxout_check[] = {                40,
    0,    0,   42,   -1,   42,    0,   -1,    0,    5,   47,
   -1,   -1,    9,   10,   11,   12,   41,   42,   43,   -1,
   45,   -1,   47,   42,   43,   -1,   45,   -1,   47,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   41,   41,   43,   43,   45,   45,   47,   41,   -1,
   43,   -1,   45,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 258
#define YYUNDFTOKEN 264
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const expr.oxout_name[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID",
"CONST",0,0,0,0,0,"illegal-symbol",
};
static const char *const expr.oxout_rule[] = {
"$accept : yyyAugNonterm",
"$$1 :",
"yyyAugNonterm : $$1 s",
"s : expr",
"expr : expr '*' expr",
"expr : expr '+' expr",
"expr : expr '/' expr",
"expr : expr '-' expr",
"expr : '(' expr ')'",
"expr : ID",
"expr : CONST",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 53 "expr.Y"
 

int yyparse(void);

int main() 
  {yyparse(); 
  } 



#line 138 "expr.oxout.y"
long yyySSALspaceSize =    20000; 
long yyyRSmaxSize =        1000; 
long yyyTravStackMaxSize = 2000; 

struct yyySolvedSAlistCell {yyyWAT attrbNum; 
                            long next; 
                           }; 
 
#define yyyLambdaSSAL 0 
long yyySSALCfreeList = yyyLambdaSSAL; 
long yyyNewSSALC = 1; 
 
struct yyySolvedSAlistCell *yyySSALspace; 

long yyyNbytesStackStg; 



yyyFT yyyRCIL[1];

short yyyIIIEL[] = {0,
0,2,6,10,14,18,22,24,
};

long yyyIIEL[] = {
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
1,1,
};

long yyyIEL[] = {
0,0,0,
};

yyyFT yyyEntL[1];

void yyyfatal(char *msg)
{fputs(msg,stderr);exit(-1);} 



#define yyySSALof 'S' 
#define yyyRSof   'q' 
#define yyyTSof   't' 



void yyyHandleOverflow(char which) 
  {char *msg1,*msg2; 
   long  oldSize,newSize; 
   switch(which) 
     {
      case yyySSALof : 
           msg1 = "SSAL overflow: ";
           oldSize = yyySSALspaceSize; 
           break; 
      case yyyRSof   : 
           msg1 = "ready set overflow: ";
           oldSize = yyyRSmaxSize; 
           break; 
      case yyyTSof   : 
           msg1 = "traversal stack overflow: ";
           oldSize = yyyTravStackMaxSize; 
           break; 
      default        :;  
     }
   newSize = (3*oldSize)/2; 
   if (newSize < 100) newSize = 100; 
   fputs(msg1,stderr); 
   fprintf(stderr,"size was %ld.\n",oldSize); 
   msg2 = "     Have to modify evaluator:  -Y%c%ld.\n"; 
   fprintf(stderr,msg2,which,newSize); 
   exit(-1); 
  }



void yyySignalEnts(yyyGNT *node,long startP,long stopP) 
  {yyyGNT *dumNode; 

   while (startP < stopP)  
     {
      if (!yyyEntL[startP]) dumNode = node;  
         else dumNode = (node->cL)[yyyEntL[startP]-1];   
      if (!(--((dumNode->refCountList)[yyyEntL[startP+1]]
              ) 
           )
         ) 
         { 
          if (++yyyRSTop == yyyAfterRS) 
             {yyyHandleOverflow(yyyRSof); 
              break; 
             }
          yyyRSTop->node = dumNode; 
          yyyRSTop->whichSym = yyyEntL[startP];  
          yyyRSTop->wa = yyyEntL[startP+1];  
         }  
      startP += 2;  
     }  
  } 






void yyySolveAndSignal() {
long yyyiDum,*yyypL;
int yyyws,yyywa;
yyyGNT *yyyRSTopN,*yyyRefN; 
yyyParent yyyRSTopNp; 


yyyRSTopNp = (yyyRSTopN = yyyRSTop->node)->parent;
yyyRefN= (yyyws = (yyyRSTop->whichSym))?yyyRSTopNp.noderef:yyyRSTopN;
yyywa = yyyRSTop->wa; 
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***yacc rule 1***/
  switch (yyyws) {
  }
break;
case 2:  /***yacc rule 2***/
  switch (yyyws) {
  }
break;
case 3:  /***yacc rule 3***/
  switch (yyyws) {
  }
break;
case 4:  /***yacc rule 4***/
  switch (yyyws) {
  }
break;
case 5:  /***yacc rule 5***/
  switch (yyyws) {
  }
break;
case 6:  /***yacc rule 6***/
  switch (yyyws) {
  }
break;
case 7:  /***yacc rule 7***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 8:  /***yacc rule 8***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
} /* switch */ 

if (yyyws)  /* the just-solved instance was inherited. */ 
   {if (yyyRSTopN->prodNum) 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyIEL[yyyiDum],
                                yyyIEL[yyyiDum+1]
                     );
       }
   } 
   else     /* the just-solved instance was synthesized. */ 
   {if (!(yyyRSTopN->parentIsStack)) /* node has a parent. */ 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopNp.noderef->prodNum] + 
                          yyyRSTopN->whichSym 
                         ] + 
                  yyywa;
        yyySignalEnts(yyyRSTopNp.noderef,
                      yyyIEL[yyyiDum],
                      yyyIEL[yyyiDum+1] 
                     );
       } 
       else   /* node is still on the stack--it has no parent yet. */ 
       {yyypL = &(yyyRSTopNp.stackref->solvedSAlist); 
        if (yyySSALCfreeList == yyyLambdaSSAL) 
           {yyySSALspace[yyyNewSSALC].next = *yyypL; 
            if ((*yyypL = yyyNewSSALC++) == yyySSALspaceSize) 
               yyyHandleOverflow(yyySSALof); 
           }  
           else
           {yyyiDum = yyySSALCfreeList; 
            yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
            yyySSALspace[yyyiDum].next = *yyypL; 
            *yyypL = yyyiDum;  
           } 
        yyySSALspace[*yyypL].attrbNum = yyywa; 
       } 
   }

} /* yyySolveAndSignal */ 






#define condStg unsigned int conds;
#define yyyClearConds {yyyTST->conds = 0;}
#define yyySetCond(n) {yyyTST->conds += (1<<(n));}
#define yyyCond(n) ((yyyTST->conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node; 
                         char isReady;
                         condStg
                        };



void yyyDoTraversals(yyyGNT *rootNode)
{struct yyyTravStackItem *yyyTravStack,*yyyTST,*yyyAfterTravStack;
 yyyGNT *yyyTSTn,**yyyCLptr2; 
 int yyyi,yyyRL,yyyPass;
 int i;

 if (!yyyYok) return;
 if ((yyyTravStack = 
                 ((struct yyyTravStackItem *) 
                  calloc((size_t)yyyTravStackMaxSize, 
                         (size_t)sizeof(struct yyyTravStackItem)
                        )
                 )
     )
     == 
     (struct yyyTravStackItem *)NULL
    ) 
    {fputs("malloc error in traversal stack allocation\n",stderr); 
     exit(-1); 
    } 

yyyAfterTravStack = yyyTravStack + yyyTravStackMaxSize; 
yyyTravStack++; 


for (yyyi=0; yyyi<2; yyyi++) {
yyyTST = yyyTravStack; 
yyyTST->node = rootNode;
yyyTST->isReady = 0;
yyyClearConds

while(yyyTST >= yyyTravStack)
  {yyyTSTn = yyyTST->node;
   if (yyyTST->isReady)  
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      } 
      else 
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTST->isReady = 1;  
       if (yyyTSTn->prodNum)
          {if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL; 
              i = yyyTSTn->cLlen; 
              while (i--) 
                {if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                 yyyCLptr2++; 
                } 
             } /* right to left */
             else  /* left to right */
             {i = yyyTSTn->cLlen; 
              yyyCLptr2 = yyyTSTn->cL + i; 
              while (i--) 
                {yyyCLptr2--; 
                 if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                } 
             } /* left to right */
          }
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

if (!
#line 24 "expr.Y"
  (1)
#line 444 "expr.oxout.y"
) yyySetCond(1)
yyySetCond(2)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 24 "expr.Y"
  
#line 453 "expr.oxout.y"
}
if (yyyCond(1) != yyyPass) {
#line 24 "expr.Y"
 printf("\n"); 
                   
#line 459 "expr.oxout.y"
}
if (yyyCond(2) != yyyPass) {
#line 25 "expr.Y"
  printf("prefix:   ");
                
#line 465 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 23 "expr.Y"
  (1)
#line 477 "expr.oxout.y"
) yyySetCond(2)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 22 "expr.Y"
 printf("\n"); 
                   
#line 486 "expr.oxout.y"
}
if (yyyCond(1) != yyyPass) {
#line 23 "expr.Y"
 
#line 491 "expr.oxout.y"
}
if (yyyCond(2) != yyyPass) {
#line 23 "expr.Y"
 printf("postfix:  ")/* missing ; */
                   
#line 497 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
case 2:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 29 "expr.Y"
  printf(" * "); 
                
#line 518 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 28 "expr.Y"
 printf(" * "); 
                   
#line 533 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
case 3:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 32 "expr.Y"
  printf(" + "); 
                   
#line 554 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 33 "expr.Y"
 printf(" + "); 
                
#line 569 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
case 4:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 37 "expr.Y"
  printf(" / "); 
                
#line 590 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 36 "expr.Y"
 printf(" / "); 
                   
#line 605 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
case 5:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 41 "expr.Y"
  printf(" - "); 
                
#line 626 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 40 "expr.Y"
 printf(" - "); 
                   
#line 641 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
case 6:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 7:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 46 "expr.Y"
  printf(" %s ",yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.lexeme); 
                
#line 685 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 45 "expr.Y"
 printf(" %s ",yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.lexeme); 
                   
#line 700 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
case 8:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 50 "expr.Y"
  printf(" %s ",yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.lexeme); 
                
#line 721 "expr.oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 49 "expr.Y"
 printf(" %s ",yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.lexeme); 
                   
#line 736 "expr.oxout.y"
}
				break;
					}
		break;
			}

break;
								} /* switch */ 
   if (yyyPass) goto yyyTpop; else goto yyyTpush; 
  } /* while */ 
 } /* for */ 
} /* yyyDoTraversals */ 

void yyyExecuteRRsection(yyyGNT *rootNode)  {
   int yyyi; 
   long cycleSum = 0; 
   long nNZrc = 0; 

   if (!yyyYok) return; 
   yyyCheckUnsolvedInstTrav(rootNode,&nNZrc,&cycleSum);
   if (nNZrc) 
      {
       fputs("\n\n\n**********\n",stderr);
       fputs("cycle detected in completed parse tree",stderr);
       fputs(" after decoration.\n",stderr);
#if CYCLE_VERBOSE
       fprintf(stderr,
               "number of unsolved attribute instances == %ld.\n", 
               nNZrc 
              ); 
       fprintf(stderr,
               "total number of remaining dependencies == %ld.\n", 
               cycleSum
              ); 
       fputs("average number of remaining dependencies\n",stderr);
       fprintf(stderr,"  per unsolved instance == %f.\n", 
               ((float)(cycleSum)/(float)(nNZrc)) 
              ); 
#endif
       fprintf(stderr,
         "searching parse tree for %ld unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(rootNode);
      }
   yyyDoTraversals(rootNode);
} /* yyyExecuteRRsection */ 



yyyWAT yyyLRCIL[2] = {0,0,
};



void yyyYoxInit(void) 
  { 
   static int yyyInitDone = 0;
   if (yyyInitDone) return;
 
   if ((yyyRS = (struct yyyRSitem *) 
         calloc((size_t)(yyyRSmaxSize+1), (size_t)sizeof(struct yyyRSitem))
       )  
       == 
       ((struct yyyRSitem *) NULL) 
      )   
      yyyfatal("malloc error in ox ready set space allocation\n");  
   yyyRS++; 
   yyyAfterRS = yyyRS + yyyRSmaxSize; 

 
   if ((yyySSALspace = (struct yyySolvedSAlistCell *) 
          calloc((size_t)(yyySSALspaceSize+1), (size_t)sizeof(struct yyySolvedSAlistCell)) 
       ) 
       == 
       ((struct yyySolvedSAlistCell *) NULL) 
      ) 
      yyyfatal("malloc error in stack solved list space allocation\n"); 
   yyyInitDone = 1;
 
   yyyRSTop = yyyRS - 1; 
  } /* yyyYoxInit */ 



void yyyDecorate(void) 
  { 
   while (yyyRSTop >= yyyRS) 
      yyySolveAndSignal();  
  } 



void yyyGenIntNode(long yyyProdNum, int yyyRHSlength, int yyyNattrbs, struct yyyOxAttrbs *yyval_OxAttrbs, ...) 
  {yyyWST i;
   yyySIT **yyyOxStackItem = &yyval_OxAttrbs->yyyOxStackItem; 
   yyyGNT *gnpDum; 
   va_list ap; 

   *yyyOxStackItem = (yyySIT *) malloc((size_t)sizeof(yyySIT)); 
   if (*yyyOxStackItem == (yyySIT *) NULL) 
      yyyfatal("malloc error in ox yacc semantic stack space allocation\n");
   (*yyyOxStackItem)->node = 
                                (yyyGNT *) malloc((size_t)sizeof(yyyGNT)); 
   if ((*yyyOxStackItem)->node == (yyyGNT *) NULL) 
      yyyfatal("malloc error in ox node space allocation\n");
   (*yyyOxStackItem)->solvedSAlist = yyyLambdaSSAL; 
   (*yyyOxStackItem)->node->parent.stackref = *yyyOxStackItem;  
   (*yyyOxStackItem)->node->parentIsStack = 1;  
   (*yyyOxStackItem)->node->cLlen  = yyyRHSlength; 
   (*yyyOxStackItem)->node->cL = 
            (yyyGNT **) calloc((size_t)yyyRHSlength, (size_t)sizeof(yyyGNT *)); 
   if ((*yyyOxStackItem)->node->cL == (yyyGNT **) NULL) 
      yyyfatal("malloc error in ox child list space allocation\n");
   (*yyyOxStackItem)->node->refCountListLen = yyyNattrbs; 
   (*yyyOxStackItem)->node->refCountList =  
            (yyyRCT *) calloc((size_t)yyyNattrbs, (size_t)sizeof(yyyRCT));  
   if ((*yyyOxStackItem)->node->refCountList == (yyyRCT *) NULL) 
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   (*yyyOxStackItem)->node->prodNum = yyyProdNum; 
   va_start(ap, yyval_OxAttrbs); 
   for (i=1;i<=yyyRHSlength;i++) 
     {yyySIT *yaccStDum = va_arg(ap,struct yyyOxAttrbs *)->yyyOxStackItem;
      gnpDum = (*yyyOxStackItem)->node->cL[i-1] = yaccStDum->node;  
      gnpDum->whichSym = i;  
      gnpDum->parent.noderef = (*yyyOxStackItem)->node; 
      gnpDum->parentIsStack = 0;  
     } 
   va_end(ap); 
  } 



#define yyyDECORfREQ 50 



void yyyAdjustINRC(long yyyProdNum, int yyyRHSlength, long startP, long stopP, struct yyyOxAttrbs *yyval_OxAttrbs, ...) 
  {yyyWST i;
   yyySIT *yyyOxStackItem = yyval_OxAttrbs->yyyOxStackItem;
   long SSALptr,SSALptrHead,*cPtrPtr; 
   long *pL; 
   yyyGNT *gnpDum; 
   long iTemp;
   long nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;
   va_list ap; 

   nextP = startP;
   while (nextP < stopP) 
     {if (yyyRCIL[nextP] == yyyR)  
         {(yyyOxStackItem->node->refCountList)[yyyRCIL[nextP+1]] = yyyRCIL[nextP+2];
         } 
         else 
         {(((yyyOxStackItem->node->cL)[yyyRCIL[nextP]])->refCountList)[yyyRCIL[nextP+1]] = yyyRCIL[nextP+2];
         } 
      nextP += 3;  
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum]; 
   va_start(ap, yyval_OxAttrbs); 
   for (i=1;i<=yyyRHSlength;i++) 
     {yyySIT *yaccStDum = va_arg(ap,struct yyyOxAttrbs *)->yyyOxStackItem;
      pL++; 
      SSALptrHead = SSALptr = *(cPtrPtr = &(yaccStDum->solvedSAlist)); 
      if (SSALptr != yyyLambdaSSAL) 
         {*cPtrPtr = yyyLambdaSSAL; 
          do 
            {
             iTemp = (*pL+yyySSALspace[SSALptr].attrbNum);
             yyySignalEnts(yyyOxStackItem->node,
                           yyyIEL[iTemp],
                           yyyIEL[iTemp+1]
                          );  
             SSALptr = *(cPtrPtr = &(yyySSALspace[SSALptr].next)); 
            } 
            while (SSALptr != yyyLambdaSSAL);  
          *cPtrPtr = yyySSALCfreeList;  
          yyySSALCfreeList = SSALptrHead;  
         } 
     } 
   va_end(ap); 
   nextP = startP + 2;
   while (nextP < stopP) 
     {if (!yyyRCIL[nextP])
         {if (yyyRCIL[nextP-2] == yyyR)  
             {pL = &(yyyOxStackItem->solvedSAlist); 
              if (yyySSALCfreeList == yyyLambdaSSAL) 
                 {yyySSALspace[yyyNewSSALC].next = *pL; 
                  if ((*pL = yyyNewSSALC++) == yyySSALspaceSize) 
                     yyyHandleOverflow(yyySSALof); 
                 }  
                 else
                 {iTemp = yyySSALCfreeList; 
                  yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
                  yyySSALspace[iTemp].next = *pL; 
                  *pL = iTemp;  
                 } 
              yyySSALspace[*pL].attrbNum = yyyRCIL[nextP-1]; 
             } 
             else 
             {if ((gnpDum = (yyyOxStackItem->node->cL)[yyyRCIL[nextP-2]])->prodNum != 0)
                 {
                  iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + yyyRCIL[nextP-1];
                  yyySignalEnts(gnpDum, 
                                yyyIEL[iTemp],  
                                yyyIEL[iTemp+1] 
                               );    
                 }  
             } 
         } 
      nextP += 3; 
     } 
   if (!--intNodeCount) 
      {intNodeCount = yyyDECORfREQ; 
       yyyDecorate(); 
      } 
  } 



void yyyGenLeaf(int nAttrbs,int typeNum,long startP,long stopP,YYSTYPE *yylval) 
  {yyyRCT *rcPdum; 
   yyySIT **yyyOxStackItem = &yylval->yyyOxAttrbs.yyyOxStackItem; 
   (*yyyOxStackItem) = (yyySIT *) malloc((size_t)sizeof(yyySIT)); 
   if ((*yyyOxStackItem) == (yyySIT *) NULL) 
      yyyfatal("malloc error in ox yacc semantic stack space allocation\n");
   (*yyyOxStackItem)->node = 
                          (yyyGNT *) malloc((size_t)sizeof(yyyGNT)) 
                         ; 
   if ((*yyyOxStackItem)->node == (yyyGNT *) NULL) 
      yyyfatal("malloc error in ox node space allocation\n");
   (*yyyOxStackItem)->solvedSAlist = yyyLambdaSSAL; 
   (*yyyOxStackItem)->node->parent.stackref = *yyyOxStackItem; 
   (*yyyOxStackItem)->node->parentIsStack = 1; 
   (*yyyOxStackItem)->node->cLlen = 0; 
   (*yyyOxStackItem)->node->cL = (yyyGNT **)NULL;  
   (*yyyOxStackItem)->node->refCountListLen = nAttrbs; 
   rcPdum = (*yyyOxStackItem)->node->refCountList =  
            (yyyRCT *) calloc((size_t)nAttrbs, (size_t)sizeof(yyyRCT));  
   if (rcPdum == (yyyRCT *) NULL) 
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   while (startP < stopP) rcPdum[yyyLRCIL[startP++]] = 0; 
   (*yyyOxStackItem)->node->prodNum = 0; 
   (*yyyOxStackItem)->node->whichSym = 0; 
  } 



void yyyabort(void)
  {yyyYok = 0; 
  } 





#define yyyLastProdNum 8


#define yyyNsorts 1


int yyyProdsInd[] = {
   0,
   0,   2,   6,  10,  14,  18,  22,  24,
  26,
};


int yyyProds[][2] = {
{ 116,   0},{ 462,   0},{ 462,   0},{ 462,   0},{ 412,   0},
{ 462,   0},{ 462,   0},{ 462,   0},{ 420,   0},{ 462,   0},
{ 462,   0},{ 462,   0},{ 452,   0},{ 462,   0},{ 462,   0},
{ 462,   0},{ 436,   0},{ 462,   0},{ 462,   0},{ 396,   0},
{ 462,   0},{ 404,   0},{ 462,   0},{ 619,   1},{ 462,   0},
{ 567,   1},
};


int yyySortsInd[] = {
  0,
  0,
  1,
};


int yyySorts[] = {
  413,
};



char *yyyStringTab[] = {
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"s",0,0,0,
0,0,"y",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"LRpre",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"'('",0,0,0,
0,0,0,0,"')'",
0,0,0,0,0,
0,0,"'*'","lexeme",0,
0,0,0,0,0,
"'+'",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"'-'",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"'/'",0,0,
0,0,0,0,0,
0,0,"expr",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"printf",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"CONST","LRpost",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"ID",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1]) 

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



void yyyShowProd(int i)
  {int j,nSyms;

   nSyms = yyySizeofProd(i);
   for (j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fputs(" : ",stderr); else putc(' ',stderr);
     }
   fputs(";\n",stderr);
  }



void yyyShowProds()
  {int i; for (i=1; i<=yyyLastProdNum; i++) yyyShowProd(i);}



void yyyShowSymsAndSorts()
  {int i; 

   for (i=1; i<=yyyLastProdNum; i++) 
     {int j, nSyms;

      fprintf(stderr,
              "\n\n\n---------------------------------- %3.1d\n",i);
      /* yyyShowProd(i); */ 
      nSyms = yyySizeofProd(i); 
      for (j=0; j<nSyms; j++) 
        {int k, sortSize;

         fprintf(stderr,"%s\n",yyyGSoccurStr(i,j));
         sortSize = yyySizeofSort(yyySortOf(i,j));
         for (k=0; k<sortSize; k++) 
            fprintf(stderr,"  %s\n",yyyAttrbStr(i,j,k));
         if (j == 0) fputs("->\n",stderr); 
              else 
              putc('\n',stderr); 
        }
     }
  }



void yyyCheckNodeInstancesSolved(yyyGNT *np)
  {int mysort,sortSize,i,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = np->parent.noderef->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fputs("Node is terminal.  Its parent production is:\n  ",stderr);
         yyyShowProd(prodNum);
        }
      else
        {fputs("Node is nonterminal.  ",stderr);
         if (!(np->parentIsStack))
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(np->parent.noderef->prodNum);
           }
         fputs("Node is on left hand side of this production:\n  ",stderr);
         yyyShowProd(np->prodNum);
        }
      fputs("The following instances are unsolved:\n",stderr);
      for (i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



void yyyCheckUnsolvedInstTrav(yyyGNT *pNode,long *nNZrc,long *cycleSum)
  {yyyGNT **yyyCLpdum;
   yyyRCT *rcp;
   int i;
  
   /* visit the refCountList of each node in the tree, and sum the non-zero refCounts */ 
   rcp = pNode->refCountList; 
   i = pNode->refCountListLen; 
   while (i--) 
      if (*rcp++) {*cycleSum += *(rcp - 1); (*nNZrc)++;} 
   yyyCLpdum = pNode->cL;
   i = pNode->cLlen;
   while (i--)
     {
      yyyCheckUnsolvedInstTrav(*yyyCLpdum,nNZrc,cycleSum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTravAux(yyyGNT *pNode)
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCheckNodeInstancesSolved(pNode); 
   yyyCLpdum = pNode->cL;
   i = pNode->cLlen;
   while (i--)
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTrav(yyyGNT *pNode)
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCLpdum = pNode->cL;
   i = pNode->cLlen;
   while (i--)
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



#line 1647 "expr.oxout.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    /* yym is set below */
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    /* yystate is set below */

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 64 "expr.oxout.y"
	{yyyYoxInit();}
#line 1849 "expr.oxout.tab.c"
break;
case 2:
#line 66 "expr.oxout.y"
	{
		 yyyDecorate(); yyyExecuteRRsection(yystack.l_mark[0].yyyOxAttrbs.yyyOxStackItem->node);
		}
#line 1856 "expr.oxout.tab.c"
break;
case 3:
#line 73 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(1,1,0,&yyval.yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(1,1,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1863 "expr.oxout.tab.c"
break;
case 4:
#line 80 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(2,3,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(2,3,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1870 "expr.oxout.tab.c"
break;
case 5:
#line 87 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(3,3,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(3,3,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1877 "expr.oxout.tab.c"
break;
case 6:
#line 94 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(4,3,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(4,3,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1884 "expr.oxout.tab.c"
break;
case 7:
#line 101 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(5,3,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(5,3,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1891 "expr.oxout.tab.c"
break;
case 8:
#line 108 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(6,3,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(6,3,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[-2].yyyOxAttrbs,&yystack.l_mark[-1].yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1898 "expr.oxout.tab.c"
break;
case 9:
#line 114 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(7,1,0,&yyval.yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(7,1,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1905 "expr.oxout.tab.c"
break;
case 10:
#line 121 "expr.oxout.y"
	{if(yyyYok){
yyyGenIntNode(8,1,0,&yyval.yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);
yyyAdjustINRC(8,1,0,0,&yyval.yyyOxAttrbs,&yystack.l_mark[0].yyyOxAttrbs);}}
#line 1912 "expr.oxout.tab.c"
break;
#line 1914 "expr.oxout.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
