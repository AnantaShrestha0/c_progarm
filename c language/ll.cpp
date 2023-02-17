#include<stdio.h>
#include <string.h>
int MAX =15;



void AddBook(){
    char book_name[MAX];
  //  fgets(book_name ,MAX,stdin);
  scanf("%s",&book_name);

    FILE *file;
    file=fopen("pro.dat","w");
    // fputs(book_name,file);
    fwrite(book_name, sizeof(char), strlen(book_name), file);
    fclose(file);
    printf("Your book is added sucessfully in the Library \n");

}
void TakeBook(){
    char book_name[MAX];
    printf("Enter the name of book \n");
    fgets(book_name ,MAX,stdin);
    FILE *file;
    file=fopen("pro.dat","u");

    
}

void PrintData(){
    FILE *file;
    file=fopen("pro.dat","r");
    char content[1000];

    if(file !=NULL){
        while(fgets(content,1000,file)){;
        printf("%s \n",content);
        }

    }
}
void pr(){
	printf("hello");
}

int main(){
    printf("********************************************************************* \n");
    printf("********************************************************************* \n");
    printf("********************************************************************* \n");
    printf("***************** WELCOME TO THE LIBRARY ************************* \n ");
    printf("***************** MORGAN INTERNATIONAL COLLEGE ************************* \n ");
    printf("***************** BASUNDHARA ,KATHMANDU  ************************* \n ");
    printf("********************************************************************* \n");
    printf("********************************************************************* \n");
    printf("********************************************************************* \n");
    FILE *file;
    file=fopen("pro.dat","r");
    char content[1000];

    // if(file !=NULL){
    //     while(fgets(content,1000,file)){;
    //     printf("%s \n",content);
    //     }
    // }
    printf("These are the book available in our Library\n");
    PrintData();
    printf("*********************************************\n");
    printf("\n");
    printf("What do you want to do now ? \n");
    printf("Add new book ? \n");
    printf("Take new book ? \n");
    printf("Enter 1 for adding New book \n");
    printf("Enter 2 for Taking Book \n");
    int User_input;
    
    	scanf("%d \n",&User_input);
    int n=1;	
    	
    if(User_input==1){
    	
		if(n==1){
    		pr();
		}
    	
    	
        AddBook();
        
    }
    else if(User_input==2){
        TakeBook();
        return (1);
    }
    else{
        printf("Enter a valid number 1 or 2");
        return (1);
    }

    

    PrintData();
    return 0;
}


// void AddBook(){
//     pass;
// }

