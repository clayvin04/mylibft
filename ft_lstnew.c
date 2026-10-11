#include "my_libf.h"


t_list *ft_lstnew(void *content)
{
    t_list *str;

    if(!(str = malloc(sizeof(t_list))))
        return NULL;
    str->content = content;
    str->next = NULL;
    
    return(str);
}