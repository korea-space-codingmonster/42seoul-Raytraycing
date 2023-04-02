# $@: 현재 Target 이름
# $^: 현재 Target이 의존하는 대상들의 전체 목록
# $?: 현재 Target이 의존하는 대상들 중 변경된 것들의 목록

SRCS = memset.c test.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = standard_function.a

all:	$(NAME)
$(NAME):	$(SRCS)
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar rc $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
#standard_function.a까지 삭제하는 경우

re:	fclean $(NAME)

.PHONY: all clean fclean re

