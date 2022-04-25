C - More singly linked lists

In this project, I continued to practice building and using singly linked lists in C.



Header File 

lists.h: Header file containing definitions and prototypes for all types and functions written for the project.

Type/FileDefinition/Prototype

struct listint_s

int n

struct listint_s *next

typedef listint_tstruct listint_s

0-print_listint.csize_t print_listint(const listint_t *h);

1-listint_len.csize_t listint_len(const listint_t *h);

2-add_nodeint.clistint_t *add_nodeint(listint_t **head, const int n);

3-add_nodeint_end.clistint_t *add_nodeint_end(listint_t **head, const int n);

4-free_listint.cvoid free_listint(listint_t *head);

5-free_listint2.cvoid free_listint2(listint_t **head);

6-pop_listint.cint pop_listint(listint_t **head);

7-get_nodeint.clistint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

8-sum_listint.cint sum_listint(listint_t *head);

9-insert_nodeint.clistint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

10-delete_nodeint.cint delete_nodeint_at_index(listint_t **head, unsigned int index);

100-reverse_listint.clistint_t *reverse_listint(listint_t **head);

101-print_listint_safe.csize_t print_listint_safe(const listint_t *head);

102-free_listint_safe.csize_t free_listint_safe(listint_t **h);

103-find_loop.clistint_t *find_listint_loop(listint_t *head);
