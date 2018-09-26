#ifndef METHODS_H_   /* Include guard */
#define MOTHODS_H_


typedef struct node
{
  int data;
  int rep;
  struct node *left;
  struct node *right;
} node;

typedef int (*comparer) (int, int);
typedef void (*callback) (node *);


int compare (int left, int right);
void display_tree (node * nd);
void display (node * nd);
node *create_node (int data);
node *insert_node (node * root, comparer compare, int data);
node *delete_node(node* root, int data,comparer compare);

#endif // METHODS_H_
