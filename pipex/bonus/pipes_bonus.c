

#include "../inc/pipex_bonus.h"

void	create_pipes(t_ppx *ppx)
{
	int	i;

	i = 0;
	while (i < ppx->cmd_num - 1)
	{
		if (pipe(ppx->fd + 2 * i) < 0)
			free_parent(ppx);
		i++;
	}
}

void	close_pipes(t_ppx *ppx)
{
	int	i;

	i = 0;
	while (i < (ppx->pipe_num))
	{
		close(ppx->fd[i]);
		i++;
	}
}
