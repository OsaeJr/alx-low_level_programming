#ifndef LISTS_
#define LISTS_
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
ist_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
