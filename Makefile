#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftaffore <ftaffore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 15:15:50 by ftaffore          #+#    #+#              #
#    Updated: 2014/05/13 12:15:44 by ftaffore         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC				=	clang
RM				=	rm -f
CFLAGS			=  -Wall -Wextra -Werror

COLLEEN			=	Colleen
GRACE			=	Grace
SULLY			=	Sully

SRCS_COLLEEN	=	Colleen_dir/Colleen.c
SRCS_GRACE		=	Grace_dir/Grace.c
SRCS_SULLY		=	Sully_dir/Sully.c

OBJS_COLLEEN	=	$(SRCS_COLLEEN:.c=.o)
OBJS_GRACE		=	$(SRCS_GRACE:.c=.o)
OBJS_SULLY		=	$(SRCS_SULLY:.c=.o)

all			:	$(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN)	:	$(OBJS_COLLEEN)
				$(CC) -o $(COLLEEN) $(OBJS_COLLEEN) $(CFLAGS)

$(GRACE)	:	$(OBJS_GRACE)
				$(CC) -o $(GRACE) $(OBJS_GRACE) $(CFLAGS)

$(SULLY)	:	$(OBJS_SULLY)
				$(CC) -o $(SULLY) $(OBJS_SULLY) $(CFLAGS)

clean		:
				$(RM) $(OBJS_COLLEEN) $(OBJS_GRACE) $(OBJS_SULLY)

fclean		:	clean
				$(RM) $(COLLEEN) $(GRACE) $(SULLY)

re			:	fclean all

.PHONY		:	all clean fclean re
