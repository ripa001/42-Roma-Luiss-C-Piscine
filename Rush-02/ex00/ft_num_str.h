/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:01:18 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 23:35:32 by ccantale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUM_STR_H

# define FT_NUM_STR_H

typedef struct s_num_str
{
	char	*num;
	int		size;
	char	*string;
	int		spaces;
}	t_num_str;

void	fiat_pax(char *imperium, char *numerus, int index, int m);
void	check_in_struct(int limit,
			struct s_num_str *my_struct, char *s1, int last);
void	ft_split_row(char *av, int j, struct s_num_str *par, int c);
int		ft_cunnistringus(char *initial_stringus,
			struct s_num_str *ft_num_str, int len);
int		alea_iacta_est(char *imperium, char *numerus, int index, int magnitudo);
void	print_num(char *s1, struct s_num_str *my_struct);
char	*ft_strncpy(char *src, unsigned int n);
char	*divide_et_impera(char *numerus);
int		ft_isnum(char c);
int		ft_isalpha(char c);
int		ft_isspace(char c);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*check_initial(char *initial_stringus);
int		row_is_valid2(char *av, int i, int j);
int		row_is_valid(char *av, int j);
char	*check_arg(int argc, int *fd, char *argv[]);
char	*add0(char *s1);
void	check_in_struct(int limit,
			struct s_num_str *my_struct, char *s1, int last);
void	case1(char *s1, struct s_num_str *my_struct, int last);
int		case2(char *s1, struct s_num_str *my_struct, int last);
int		print3(struct s_num_str *my_struct, char *s1, int last);
void	count_spaces(int *c_spaces, char *s1);
void	print_digits(char *s1, struct s_num_str *my_struct, int last);

#endif
