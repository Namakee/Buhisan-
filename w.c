#include<stdio.h>

int main(){
    FILE *add = fopen("input.txt","a");
    FILE *display = fopen("display.txt","r");
    FILE *mt = fopen("empty.txt","w");
    int choice;
    char prodname[50];
    float prodprice;

    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 4)
    {
        switch(choice){
            case 1:
            {
                if (add == NULL){
                    printf("Failed to open the file!");
                }
                else{
                    printf("Enter product name or product price: ");
                    scanf("%s %s", prodname, prodprice);
                    fprintf(add,"%c %f", prodname, prodprice);
                    return 0;
                }
                break;
            }
            case 2:
            {
                if (display == NULL){
                    printf("Failed to open the file!");
                }
                else {
                    while(!feof(display)){
                        fgets(prodname,100,display);
                        fgets(prodprice,100,display);
                        printf("Menu: %s %f", prodname, prodprice);
                    }
                }
                    break;
            }

            case 3:
            {
                if (mt == NULL){
                    printf("Failed to open the file!");
                }
                break;
            }
            default: {
                printf("yawa");
            }
            }
    }



    fclose(add);
  //  fclose(display);
    fclose(mt);
    return 0;
}
