#include "push_swap_new.h"

int		pa(t_vars *vars);
int		pb(t_vars *vars);
int		ra(t_vars *vars);
int		rra(t_vars *vars);
int		rb(t_vars *vars);
int		rrb(t_vars *vars);
int		sa(t_vars *vars);
int		sb(t_vars *vars);
int		ss(t_vars *vars);
int		rr(t_vars *vars);
int		rrr(t_vars *vars);

int	push_swap(t_vars *vars, char *s)
{
	t_list	*new;

	if (push_swap_operation(vars, s) < 0)
		return (-1);
	new = ft_lstnew(s);
	if (new == NULL)
		return (-1);
	ft_lstadd_back(&(vars->cmd), new);
	return (0);
}

int	push_swap_n_times(t_vars *vars, char *s, int n)
{
	int	ret;
	int	i;

	i = 0;
	while (i < n)
	{
		ret = push_swap(vars, s);
		if (ret < 0)
			return (-1);
		i++;
	}
	return (0);
}

int	push_swap_min_rotate(t_vars *vars, int index, char *ra, char *rra)
{
	int	size;
	int	ret;
	int	index;

	size = ft_stsize(vars->a);
	if (index < size - index)
		ret = push_swap_n_times(ra, index);
	else
		ret = push_swap_n_times(rra, size - index);
	if (ret < 0)
		return (-1);
	return (0);
}

int	push_swap_operation(t_vars *vars, char *s)
{
	if (ft_strcmp(s, "pa") == 0)
		return (pa(vars));
	else if (ft_strcmp(s, "pb") == 0)
		return (pb(vars));
	else if (ft_strcmp(s, "ra") == 0)
		return (ra(vars));
	else if (ft_strcmp(s, "rra") == 0)
		return (rra(vars));
	else if (ft_strcmp(s, "rb") == 0)
		return (rb(vars));
	else if (ft_strcmp(s, "rrb") == 0)
		return (rrb(vars));
	else if (ft_strcmp(s, "sa") == 0)
		return (sa(vars));
	else if (ft_strcmp(s, "sb") == 0)
		return (sb(vars));
	else if (ft_strcmp(s, "ss") == 0)
		return (ss(vars));
	else if (ft_strcmp(s, "rr") == 0)
		return (rr(vars));
	else if (ft_strcmp(s, "rrr") == 0)
		return (rrr(vars));
	else
		return (-1);
}
