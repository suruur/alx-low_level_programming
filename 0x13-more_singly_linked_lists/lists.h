#ifndef MY_LISTS
#define MY_LISTS
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the nest node
 *
 * Description: Singly linked list node sturucture
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);


#endif
