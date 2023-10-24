#ifndef MY_LIST
#define MY_LIST
/**
 * struct list_s - singly list
 * @str: string
 * @len: length
 * @next: next node
 *
 * Description: singly linked ;list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
