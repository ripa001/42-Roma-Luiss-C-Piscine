#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main()
{
	char				*arr[20] = {"prova1","prova2","prova3","prova4","prova5","prova6"};
	struct s_stock_str	*my_struct;

	my_struct = ft_strs_to_tab(6, arr);
	ft_show_tab(my_struct);
}