

#include "../inc/philo.h"

void	error_message(const char *msg, int exit_code)
{
	printf("%s\n", msg);
	exit(exit_code);
}

unsigned long long	get_time_micros(void)
{
	struct timeval		tv;
	unsigned long long	curtime;

	gettimeofday(&tv, NULL);
	curtime = (unsigned long long)((tv.tv_sec * 1000000 + tv.tv_usec));
	return (curtime);
}

void	usleep2(unsigned long long duration)
{
	unsigned long long	start;

	start = get_time_micros();
	while (1)
		if (get_time_micros() - start >= duration)
			break ;
}
