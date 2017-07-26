/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compress.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 12:15:18 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/26 13:50:52 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_COMPRESS_H
#define BSQ_COMPRESS_H

# include "types.h"
# include "ds.h"

typedef struct	s_matrix {
	t_lbuf	*lbuf;
	t_lbuf	*root;
	t_u32	cursor;
}				t_matrix;

# define BINARY_MATRIX 0
# define REPEAT_MATRIX 1

/**
** At each index of our array we have a 8 bits:
** 1 bit: mode 
**      - 0 for binary matrix mode
**      - 1 for repeat matrix mode
** Binary Matrix Mode:
**   7 bits: 1 if empty, 0 if obstacle
** Repeat Matrix Mode:
**   1 bit: 1 if empty case repetition 0 if obstacle repetition
**   6 bit: number of repetitions
**/

extern void		matrix_write(t_matrix *matrix, t_bool value);
void			matrix_free(t_matrix *matrix, t_u32 to);
void			matrix_print(t_matrix *matrix, t_info *info);

#endif
