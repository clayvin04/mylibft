
#include "my_libf.h"



void ft_lstadd_back(t_list **lst, t_list *new)
{
    
    t_list *lsst;

    lsst = *lst;

    if(*lst == NULL)
    {
        *lst = new;
        return;
    }

    while (lsst->next != NULL)
    {
        lsst = lsst->next;
    }
    lsst->next = new;
    

}

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}

