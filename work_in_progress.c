#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 100
#define BUFSIZE 100



struct tnode {
	char *word;				/*points to the next*/
	int count;				/*numberof occurences*/
	struct tnode *left;		/*left child*/
	struct tnode *right;	/*right child*/
};

char buf[BUFSIZE];
int bufp = 0;


//Functions
int getch(void)      /* get a (possibly pushed-back) character */
{
	return (bufp > 0 ) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}


/* getword: get next word or character from input */
int getword(char *word, int lim)
{
    int c, getch(void);
    void ungetch(int);
    char *w = word;
    
    while(isspace(c = getch()));

    if(c != EOF)
    {
        *w++ = c;
    }
    
    if(!isalpha(c))
    {
        *w = '\0';
        return c;
    }
    
    for( ; --lim > 0; w++)
    {
        if(!isalnum(*w = getch()))
        {
            ungetch(*w);
            break;
        }
    }
    
    *w = '\0';
    
    return word[0];
}




int main()
{
    char word[MAXSIZE] = "now is the time for all good men to come to the aid of their party";
    struct tnode *root;
    
    root = NULL;
    
    while(getword(word, MAXSIZE) != EOF)
    {    
        printf("....\n");
        if(isalpha(word[0]))
        {
            printf("....\n");
        }
    
    }    
    return 0;
}
