#include "lib.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	s1_len;
	int	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	return (ft_strncmp(s1, s2, ft_max(s1_len, s2_len)));
}
