/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elima-me <elima-me@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:31:49 by elima-me          #+#    #+#             */
/*   Updated: 2022/02/10 21:41:50 by elima-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

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
