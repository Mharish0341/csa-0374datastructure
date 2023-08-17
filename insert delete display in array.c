#include <stdio.h>

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *size, int position, int element) {
    if (*size >= position) {
        for (int i = *size; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element;
        (*size)++;
        printf("Element inserted successfully!\n");
    } else {
        printf("Invalid position for insertion.\n");
    }
}
void deleteElement(int arr[], int *size, int position) {
    if (*size > 0 && position <= *size) {
        for (int i = position - 1; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
        printf("Element deleted successfully!\n");
    } else {
        printf("Invalid position for deletion.\n");
    }
}

int main() {
    int arr[100];
    int size = 0;

    while (1) {
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Display array\n");
        printf("4. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size < 100) {
                    int element, position;
                    printf("Enter the element to insert: ");
                    scanf("%d", &element);
                    printf("Enter the position to insert: ");
                    scanf("%d", &position);
                    insert(arr, &size, position, element);
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;

            case 2:
                if (size > 0) {
                    int position;
                    printf("Enter the position to delete: ");
                    scanf("%d", &position);
                    deleteElement(arr, &size, position);
                } else {
                    printf("Array is empty. Cannot delete elements.\n");
                }
                break;

            case 3:
                display(arr, size);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
