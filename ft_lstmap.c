
#include "my_libf.h"



t_list *ft_lstnew(void *content)
{
    t_list *new;
    if(!(new = malloc(sizeof(t_list))))
        return NULL;
    new->content = content;
    new->next = NULL;

    return(new);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *lsst;

    if(*lst == NULL)
    {    
        *lst = new;
        return;
    }
    lsst = *lst;
    while (lsst->next != NULL)
    {
        lsst = lsst->next;
    }
    lsst->next= new;
    
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *leet;
    t_list *save;

    leet = *lst;

    if(leet == NULL || del == NULL)
        return;
    
    while (leet != NULL)
    {
        save = leet->next;
        del(leet->content);
        free(leet);
        leet = save;
    }

    *lst = NULL;
    

}



t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_node;
    t_list *new_list;
    void *content;

    new_list = NULL;
    
    while (lst != NULL)
    {
        content = f(lst->content);
        new_node = ft_lstnew(content);

        if(new_node == NULL)
        {
            ft_lstclear(&new_list,del);
            return NULL;

        }

        ft_lstadd_back(&new_list,new_node);
        lst = lst->next;
    }

    return(new_list);
    


}

