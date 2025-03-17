#include<stdio.h>

void updatednumber(int slots, int oslots) {
    char action;

    do {
        printf("\nTotal number of slots= %d", slots);
        printf(", Vehicle Parked! Updated Occupied slots= %d", oslots);
        printf("\nEnter action (E/e for Enter, X/x for Exit): ");
        scanf(" %c", &action); 

        if (action == 'e' || action == 'E') {
            if (oslots < slots) {
                oslots++;
                printf("Vehicle Parked! Updated Occupied slots= %d\n", oslots);
            } else {
                printf("Parking full! No slots available.\n");
            }
        } 
        else if (action == 'x' || action == 'X') {
            if (oslots > 0) {
                oslots--;
                printf("Vehicle Exited! Updated Occupied slots= %d\n", oslots);
            } else {
                printf("No vehicles parked.\n");
            }
        } 
        else {
            printf("Write correct input.\n");
        }
    } while (1);
}

int main() {
    int slots, oslots;

    do {
        printf("Total number of slots: ");
        scanf("%d", &slots);
        if (slots < 0) {
            printf("Enter valid slots..\n");
        }
    } while (slots < 0);

    do {
        printf("Occupied slots: ");
        scanf("%d", &oslots);
        if (oslots < 0 || oslots > slots) {
            printf("Enter valid occupied slots..\n");
        }
    } while (oslots < 0 || oslots > slots);

    updatednumber(slots, oslots);

    return 0;
}
