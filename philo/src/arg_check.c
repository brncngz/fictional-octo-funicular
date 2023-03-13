

#include "../inc/philo.h"

static void	set_data(char **argv, t_data *data)
{
	data->num_phil = ft_atoi(argv[1]);
	data->t_die = (unsigned long long)ft_atoi(argv[2]);
	data->t_eat = (unsigned long long)ft_atoi(argv[3]);
	data->t_sleep = (unsigned long long)ft_atoi(argv[4]);
	if (data->num_phil < 1 || data->t_die < 1
		|| data->t_eat < 1 || data->t_sleep < 1)
		error_message("Inputs must be greater than 1", 4);
	if (argv[5] != NULL)
	{
		data->must_check = 1;
		data->must_num = ft_atoi(argv[5]);
	}
	else
	{
		data->must_check = 0;
		data->must_num = 0;
	}
}

void	arg_check(char **argv, t_data *data)
{
	int	i;

	set_data(argv, data);
	data->philos = malloc(data->num_phil * sizeof(t_philo));
	i = 0;
	while (i < data->num_phil)
	{
		data->philos[i].id = i;
		data->philos[i].fork.owner_id = i;
		data->philos[i].fork.in_use = 0;
		data->philos[i].p_state = THINKING;
		data->philos[i].times_eaten = 0;
		data->philos[i].data = data;
		data->philos[i].last_eaten = data->start_time;
		i++;
	}
}
