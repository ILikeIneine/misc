#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
typedef struct tree
{
    char data[3];
    struct tree* l;
    struct tree* r;
} tree;

char ch[3];

tree* maketree(tree *s)
{
    scanf("%s",ch);
    if(ch[0] == '#')
        s = NULL;
    else
        {
            if(ch[0] == 'J')
                {
                    ch[0] = '1';
                    ch[1] = '1';
                }
            else if(ch[0] == 'Q')
                {
                    ch[0] = '1';
                    ch[1] = '2';
                }
            else if(ch[0] == 'K')
                {
                    ch[0] = '1';
                    ch[1] = '3';
                }
            s = (tree* )malloc(sizeof(tree));
            strcpy(s->data, ch);
            s->l = maketree(s->l);
            s->r = maketree(s->r);
        }
    return s;
}
void postrl(tree *s)
{
    if(s!=NULL)
        {
            if(s->data[0]!='+' &&s->data[0]!='-' &&s->data[0]!='*'&&s->data[0]!='/')
                {
                    printf("%s",s->data);
                    return ;
                }
            {
                {
                    printf("(");
                    postrl(s->l);
                }
                printf("%s",s->data);
                {
                    postrl(s->r);
                    printf(")");
                }
            }
        }
}
double cal(tree *s)
{
    if(s!=NULL)
        {
            double res;
            if(s->data[0]>='0'&&s->data[0]<='9')
                return  atof(s->data);
            else
                {
                    switch(s->data[0])
                        {
                        case '+':
                            res = cal(s->l) + cal(s->r);
                            break;
                        case '-':
                            res = cal(s->l) - cal(s->r);
                            break;
                        case '*':
                            res = cal(s->l) * cal(s->r);
                            break;
                        case '/':
                            res = cal(s->l) / cal(s->r);
                            break;
                        }
                }
                    return res;
        }
}

int main()
{
    tree *ss = NULL;
    double res;
    int i =300;
    while(i--)
        {
            ss = maketree(ss);
            res = cal(ss);
            if( fabs(res-24.0) <= 1e-5){
                    postrl(ss);
                    printf("=%.0lf\n",res);
                }
            else if(ss !=NULL) {printf("%lf",res);printf("NO\n");}
        }
}*/


    void gen_expression_tree(BiTree &t, int num)

    {

     for(int i = 1; i < num; i++) {

         t->data = “+-*/”中的一者                       //按次序枚举

         gen_expression_tree(t->lchild, i);

         gen_expression_tree(t->rchild, num - i);
     }

  }





























