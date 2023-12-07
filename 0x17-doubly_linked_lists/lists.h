#ifndef MY_LIST
#define MY_LIST

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @next: pointer to the next node
 * @prev: pointer to the previous node
 *
 * Description - doubly linled list
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;


size_t print_dlistint(const dlistint_t *h);

#endif
