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


struct tnode *addtree(struct tnode *p, char *w);
void treeprint(struct tnode *);
struct tnode *talloc(void);
char *strdup(char*);


int main()
{
    int i;
    char word[MAXSIZE];
    struct tnode *root;
    
    root = NULL;
    word[0]  = "now";
    /*word[1]  = "is";
    word[2]  = "the";
    word[3]  = "time";
    word[4]  = "for";
    word[5]  = "all";
    word[6]  = "good";
    word[7]  = "men";
    word[8]  = "to";
    word[9]  = "come";
    word[10] = "to";
    word[11] = "the";
    word[12] = "aid";
    word[13] = "of";
    word[14] = "their";
    word[15] = "party";*/
    

    root = addtree(root, word);

    printf("%4d %s\n", root->count, root->word);

    //treeprint(root);
    
    return 0;
}


/*strdup*/
char *strdup(char *s)
{
    char *p;
    
    p = (char *) malloc(strlen(s)+1);
    
    if(p != NULL)
        strcpy(p, s);
    
    return p;    
}


/*talloc*/
struct tnode *talloc(void)
{
    return (struct tnode*) malloc(sizeof(struct tnode));
}


/*treeprint*/
void treeprint(struct tnode *p)
{
    if(NULL != p)
    {
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
    }
}

/*addtree*/
struct tnode *addtree(struct tnode *p, char *w)
{
    int cond;
    
    if(NULL == p)
    {
        p = talloc();
        p->word = strdup(w);
        p->count = 1;
        p->left = p->right = NULL;
    }
       
    return p;
    
    /*else if((cond = strcmp(w, p->word)) == 0)
    {
        p->count++;
    }
    
    else if(cond < 0)
    {
        p->left = addtree( p->left , w);
    }
    
    else
    {
         p->right = addtree( p->right , w);
    }
    
    return p;*/
}


