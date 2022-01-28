#include <stdio.h>
#include <string.h>
int main(){
    struct form{
        char email,correct_answer,secret_answer,phno,password,c_password,pwd,new_password,new_c_password,mail;
    };
    struct form p[50];
    int i,j,n,m;
    do{        
        printf("\n\n1.Register \n2.Login \n3.Reset Password \n4.Display");
        printf("\n\nYour response: ");
        scanf("%d",&n);
        switch(n){
            case 1: //enter details
            printf("\nPlease fill the details \n");
            printf("email: ");
            scanf("%c",&(p[i].email));
            printf("Phone number: ");
            scanf("%c",&(p[i].phno));
            printf("Answer this secret question \n");
            printf("Your favourite music genre: ");
            scanf("%c",&(p[i].secret_answer));
            printf("password: ");
            scanf("%c",&(p[i].password));
            printf("confirm password: ");
            scanf("%c",&(p[i].c_password));

            if(p[i].password == p[i].c_password){ //validating the password
                p[i].mail = p[i].email; //assign values for future validation
                p[i].pwd = p[i].password; //assign values for future validation
                p[i].correct_answer = p[i].secret_answer; //assign values for future validation
                printf("Account Successfully Created.");
            }
            else printf("Account Cannot be created please try again later."); //failed validation
            break;
            case 2:
            printf("email: ");
            scanf("%c",&(p[i].email));
            printf("password: ");
            scanf("%c",&(p[i].password));
            if((p[i].password == p[i].pwd)&&(p[i].email == p[i].mail)){ //check if password is correct
                printf("Logged in successfully.");
            }
            else printf("Incorrect password."); //if the password is incorrect print invalid
            break;
            case 3:
            printf("email: ");
            scanf("%c",&(p[i].email));
            printf("password: ");
            scanf("%c",&(p[i].password));
            if((p[i].password == p[i].pwd)&&(p[i].email == p[i].mail)){ //validate email
                printf("Answer this secret question \n");
                printf("Your favourite music genre: ");
                scanf("%c",&(p[i].secret_answer));
                if(p[i].secret_answer == p[i].correct_answer){ //check if the secret answer is correct
                    printf("Reset your password");
                    printf("Enter new password: ");
                    scanf("%c",&(p[i].new_password));
                    printf("confirm password: ");
                    scanf("%c",&(p[i].new_c_password));
                    if(p[i].new_password == p[i].new_c_password){ //check if the new entered pwd matches with the confirm pwd
                        p[i].password = p[i].new_password; //assign the new password to the old password
                        p[i].c_password = p[i].new_c_password;
                        printf("Password reset successfull");
                    }
                    else if(p[i].secret_answer != p[i].correct_answer){
                        printf("Incorrect answer!");
                        printf("Password reset failed");
                    }
                    else printf("Password reset failed");
                }
            break;
            case 4: //displaying details 
            for(i=0;i<m;i++){
                printf("email: %c",p[i].email);
                printf("Phone number: %c",p[i].phno);
            }
            break; 
            default: printf("Invalid option");
        }
    }while(n>=1&&n<=3);   
    return 0;
}

