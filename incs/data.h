#ifndef DATA_H
# define DATA_H

# define INT_MAX 

typedef struct	s_data
{
	int	min;
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
	int rr;
	int	rrr;
}	t_data;

int		ft_min_4(int a, int b, int c, int d);
int		data_bzero(t_data *data);
t_data	*data_new(void);
int		data_get(t_data *data, char *s);
void	greedy_renew(t_data *data, t_vars *vars, int index, int value);

#endif
