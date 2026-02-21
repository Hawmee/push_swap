/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varandri <varandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:35:35 by varandri          #+#    #+#             */
/*   Updated: 2026/02/21 08:27:24 by varandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argv)
    if (argc < 2)
    {
        write(2, "Error\n", 6);
        return (1);
    }
    // rest of program
    return (0);
}