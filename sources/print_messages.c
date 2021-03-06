/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:31:49 by elima-me          #+#    #+#             */
/*   Updated: 2022/03/06 11:55:27 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	print_status(long int now, t_philo *philo, char *status)
{
	pthread_mutex_lock(philo->config->print);
	printf("%ld %d %s\n", (now - philo->config->sim_start),
		philo->id, status);
	pthread_mutex_unlock(philo->config->print);
	return (0);
}

int	print_errors(int errornum)
{
	char	*message[ERROR_SIZE];

	message[ERR_INVALID_ARGS] = "Arguments must be numbers";
	message[ERR_NUMBERS_ARGS] = "Invalid number of arguments";
	message[ERR_NEGATIVE_NUM] = "Please enter only positive numbers";
	message[ERR_NUMBER_PHILOS] = "The number of philos must be greater than 1";
	message[ERR_INVALID_VALUE] = "Arguements had invalid value";
	printf("Error, %s\n", message[errornum]);
	return (1);
}
