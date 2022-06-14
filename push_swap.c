/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarollan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:48:28 by rarollan          #+#    #+#             */
/*   Updated: 2022/06/14 14:18:35 by rarollan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	push(int element, char stack[], int *top, int stackSize)
{
	if(*top == -1)
	{
		stack[stackSize - 1] = element;
		*top = stackSize - 1;
	}
	else if(*top == 0)
		printf("The stack is already full. \n");
	else
	{
		stack[(*top) - 1] = element;
		(*top)--;
	}
}

void	pop(char stack[], int *top, int stackSize)
{
	if(*top == -1)
		printf("The stack is empty. \n");
	else
		printf("Element popped: %c \n", stack[(*top)]);
	if((*top) == stackSize - 1)
		(*top) = -1;
	else
		(*top)++;
}		

int main()
{
    int stackSize = 2;
    char stack[stackSize];
	int top = -1;	
	push('1', stack, &top, stackSize);
	printf("Element on top: %c\n", stack[top]);
	push('2', stack, &top, stackSize);
    printf("Element on top: %c\n", stack[top]);
  	pop(stack, &top, stackSize);
	printf("Element on top: %c\n", stack[top]);
  	return 0;
}
