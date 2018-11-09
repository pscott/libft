#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
		if (*alst)
		{
				del(*alst->content, *alst->content_size);
				free(*alst->content);
				free(*alst->content_size);
				*ast = NULL;
		}
}
