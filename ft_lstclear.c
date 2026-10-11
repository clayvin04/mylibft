
#include "my_libf.h"


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