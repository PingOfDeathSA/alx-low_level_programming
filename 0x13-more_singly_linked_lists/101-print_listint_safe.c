#include <stdio.h>
#include <stddef.h>
/**

display_safe_listint - securely prints a linked list
@head: list of type listint_t to be displayed
Return: count of nodes in the list
*/
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

size_t looped_listint_len(const listint_t *head);

size_t looped_listint_len(const listint_t *head) {
    const listint_t *ptr1, *ptr2;
    size_t count = 0;

    if (head == NULL || head->next == NULL)
        return count;

    ptr1 = head->next;
    ptr2 = (head->next)->next;

    while (ptr2 && ptr2->next) {
        if (ptr1 == ptr2) {
            ptr1 = head;
            while (ptr1 != ptr2) {
                count++;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            ptr1 = ptr1->next;
            while (ptr1 != ptr2) {
                count++;
                ptr1 = ptr1->next;
            }

            return count;
        }

        ptr1 = ptr1->next;
        ptr2 = (ptr2->next)->next;
    }

    return count;
}

size_t print_listint_safe(const listint_t *head) {
    size_t totalNodes = 0;

    totalNodes = looped_listint_len(head);

    if (totalNodes == 0) {
        while (head != NULL) {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
            totalNodes++;
        }
    } else {
        size_t currentIndex;
        for (currentIndex = 0; currentIndex < totalNodes; currentIndex++) {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }

        printf("-> [%p] %d\n", (void *)head, head->n);
    }

    return totalNodes;
}


