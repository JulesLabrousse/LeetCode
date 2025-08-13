#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *res = malloc(sizeof(struct ListNode));
    struct ListNode *head = res;

    /* check if malloc failed */
    if (res == NULL)
        return (NULL);
    
    int carry = 0;
    while(l1 != NULL && l2 != NULL) {
        res->val = (l1->val + l2->val + carry) % 10;
        carry = (l1->val + l2->val + carry) / 10;
        l1 = l1->next;
        l2 = l2->next;
        if (l1 != NULL || l2 != NULL || carry > 0) {
            res->next = malloc(sizeof(struct ListNode));
            res = res->next;
        } else {
            res->next = NULL;
        }
    }
    /* process remaining digits in l1 */
    while (l1 != NULL) {
        res->val = (l1->val + carry) % 10;
        carry = (l1->val + carry) / 10;
        l1 = l1->next;
        if (l1 != NULL || carry > 0) {
            res->next = malloc(sizeof(struct ListNode));
            res = res->next;
        } else {
            res->next = NULL;
        }
    }
    /* process remaining digits in l2 */
    while (l2 != NULL) {
        res->val = (l2->val + carry) % 10;
        carry = (l2->val + carry) / 10;
        l2 = l2->next;
        if (l2 != NULL || carry > 0) {
            res->next = malloc(sizeof(struct ListNode));
            res = res->next;
        } else {
            res->next = NULL;
        }
    }
    /* add last carry if needed */
    if (carry > 0) {
        res->val = carry;
        res->next = NULL;
    }

    return (head);
}
