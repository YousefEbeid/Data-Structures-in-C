#include <complex>
#include <iostream>
#include <stdlib.h>
#define sn struct node
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
struct node {
    int data;
    struct node *next;
};
int main() {

    struct node *head , *temp;
    head = (sn*) malloc(sizeof(sn));
    head->data = 5;
    head->next = (sn*) malloc(sizeof(sn));
    head->next->data = 8;
    head->next->next = (sn*) malloc(sizeof(sn));
    head->next->next->data = 9;
    head->next->next->next = (sn*) malloc(sizeof(sn));
    head->next->next->next->data = 10;
    head->next->next->next->next = NULL;

    temp = head;
    while (temp != NULL) {
        printf("data : %d\n", temp->data);
        temp = temp->next;

    }
    return 0;
}
