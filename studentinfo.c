#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct Student
{
    char name[50];
    char mail[50];
    int id;
    char blood[10];
    char cell[50];
    struct Student *next;
} node;
node *head = NULL;

void insert_head(const int id, const char name[], const char mail[], const char cell[], const char blood[])
{
    node *newf = (node*)malloc(sizeof(node));
    if (newf == NULL)
    {
        printf("Unable to Allocate\n");
        return;
    }
    newf->id = id;
    strcpy(newf->name, name);
    strcpy(newf->mail, mail);
    strcpy(newf->cell, cell);
    strcpy(newf->blood, blood);
    newf->next = NULL;
    if (head == NULL)
    {
        head = newf;
    }
    else
    {
        node* tp = head;
        while (tp->next != NULL)
        {
            tp = tp->next;
        }
        tp->next = newf;
    }
}

// displaying all student's info
void displaystudent()
{
    node *tp = head;
    while (tp != NULL)
    {
        printf("\t__________________________________________________\n");
        printf("\tID: %d                                            \n", tp->id);
        printf("\tName: %s                                          \n", tp->name);
        printf("\tEmail: %s                                         \n", tp->mail);
        printf("\tCell: %s                                          \n", tp->cell);
        printf("\tBlood Group: %s                                   \n", tp->blood);
        printf("\t__________________________________________________\n");
        tp = tp->next;
    }
}
void addnewstudent()
{
    int id;
    char name[30], email[30], cell[15], blood[5];
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    getchar();
    gets(name);
    printf("Enter Email: ");
    scanf("%s", email);
    printf("Enter Cell: ");
    scanf("%s", cell);
    printf("Enter Blood Group: ");
    scanf("%s", blood);
    insert_head(id, name, email, cell, blood);
    printf("New student added successfully!\n\n");
}

void search_by_id(int id)
{
    bool find = false;
    node *tp = head;
    if (tp == NULL)
    {
        if (tp->id == id)
        {
            printf("Found!\n");
            printf("__________________________________________________\n");
            printf("ID: %d                                            \n", tp->id);
            printf("Name: %s                                          \n", tp->name);
            printf("Email: %s                                         \n", tp->mail);
            printf("Cell: %s                                          \n", tp->cell);
            printf("Blood Group: %s                                   \n", tp->blood);
            printf("__________________________________________________\n");
            tp = tp->next;
            return;
        }
    }
    else
    {
        while (tp != NULL)
        {
            if (tp->id == id)
            {
                find = true;
                break;
            }
            else
            {
                tp = tp->next;
            }
        }
    }
    if (find)
    {
        printf("Found!\n");
        printf("__________________________________________________\n");
        printf("ID: %d                                            \n", tp->id);
        printf("Name: %s                                          \n", tp->name);
        printf("Email: %s                                         \n", tp->mail);
        printf("Cell: %s                                          \n", tp->cell);
        printf("Blood Group: %s                                   \n", tp->blood);
        printf("__________________________________________________\n");
        tp = tp->next;
    }
    else
    {
        printf("No matching id\n");
    }
}

void search_by_name(const char *name)
{
    bool find = false;
    node *tp = head;
    if (tp == NULL)
    {
        if (!strcmp(tp->name, name))
        {
            printf("Found!\n");
            printf("__________________________________________________\n");
            printf("ID: %d                                            \n", tp->id);
            printf("Name: %s                                          \n", tp->name);
            printf("Email: %s                                         \n", tp->mail);
            printf("Cell: %s                                          \n", tp->cell);
            printf("Blood Group: %s                                   \n", tp->blood);
            printf("__________________________________________________\n");
            tp = tp->next;
            return;
        }
    }
    else
    {
        while (tp != NULL)
        {
            if (!strcmp(tp->name, name))
            {
                find = true;
                break;
            }
            else
            {
                tp = tp->next;
            }
        }
    }
    if (find)
    {
        printf("Found!\n");
        printf("__________________________________________________\n");
        printf("ID: %d                                            \n", tp->id);
        printf("Name: %s                                          \n", tp->name);
        printf("Email: %s                                         \n", tp->mail);
        printf("Cell: %s                                          \n", tp->cell);
        printf("Blood Group: %s                                   \n", tp->blood);
        printf("__________________________________________________\n");
        tp = tp->next;
    }
    else
    {
        printf("No matching name\n");
    }
}

void search_by_blood(const char *blood)
{
    bool find = false;
    node *tp = head;
    if (tp == NULL)
    {
        if (!strcmp(tp->blood, blood))
        {
            printf("Found!\n");
            printf("__________________________________________________\n");
            printf("ID: %d                                            \n", tp->id);
            printf("Name: %s                                          \n", tp->name);
            printf("Email: %s                                         \n", tp->mail);
            printf("Cell: %s                                          \n", tp->cell);
            printf("Blood Group: %s                                   \n", tp->blood);
            printf("__________________________________________________\n");
            tp = tp->next;
            return;
        }
    }
    else
    {
        while (tp != NULL)
        {
            if (!strcmp(tp->blood, blood))
            {
                find = true;
                break;
            }
            else
            {
                tp = tp->next;
            }
        }
    }
    if (find)
    {
        printf("Found!\n");
        printf("__________________________________________________\n");
        printf("ID: %d                                            \n", tp->id);
        printf("Name: %s                                          \n", tp->name);
        printf("Email: %s                                         \n", tp->mail);
        printf("Cell: %s                                          \n", tp->cell);
        printf("Blood Group: %s                                   \n", tp->blood);
        printf("__________________________________________________\n");
        tp = tp->next;
    }
    else
    {
        printf("No matching blood\n");
    }
}

void searchstudent()
{
    while (1)
    {
        system("cls");
        printf("\t\t\tSearching Student Information by different parameters\n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t1. Search by ID\n");
        printf("\t\t\t2. Search by Name\n");
        printf("\t\t\t3. Search by Blood\n");
        printf("\t\t\tEnter your choice: ");
        int x;
        scanf("%d", &x);
        if (x == 1)
        {
            printf("Enter the ID: ");
            int id;
            scanf("%d", &id);
            system("cls");
            search_by_id(id);
        }
        else if (x == 2)
        {
            printf("Enter the Name: ");
            char name[30];
            getchar();
            gets(name);
            system("cls");
            search_by_name(name);
        }
        else if (x == 3)
        {
            printf("Enter the Blood Group: ");
            char blood[5];
            scanf("%s", blood);
            system("cls");
            search_by_blood(blood);
        }
        else
            return;
        printf("Press Enter to continue...");
        getchar();
        getchar();
    }
}
void delete_node()
{
    printf("Enter id to delete: ");
    int id;
    scanf("%d", &id);
    node* tp, *prev;
    if (head == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        tp = head;
        prev = head;
        while (tp != NULL)
        {
            if (tp->id != id)
            {
                prev = tp;
                tp = tp->next;
            }
            else
            {
                prev->next = tp->next;
                free(tp);
                printf("successfully deleted \n");
                return;
            }
        }
        printf("No matching id found for deletion\n");
    }
}
void pre_store()
{
    insert_head(4755, "Nasima", "nasima15-4755@diu.edu.bd", "017111", "A+");
    insert_head(4792, "Anuradha", "anuradha15-4792@diu.edu.bd", "0171111", "A-");
    insert_head(4794, "Rakib", "rakib15-4794@diu.edu.bd", "0176763", "B+");
    insert_head(4802, "Salman", "salman15-4802@diu.edu.bd", "01664", "B-");
    insert_head(4893, "Mirajul", "mirajul15-4893@diu.edu.bd", "01766665", "O+");
    insert_head(4902, "Tanjina", "tanjina15-4902@diu.edu.bd", "0166676", "O-");
    insert_head(4903, "Tanjid", "tanjid15-4903@diu.edu.bd", "0176667", "AB+");
    insert_head(4916, "Sabbir", "sabbir15-4916@diu.edu.bd", "01678", "AB-");
    insert_head(4918, "Rumaia", "rumaia15-4918@diu.edu.bd", "0155579", "A+");
    insert_head(4928, "Jannatul", "jannatul15-4928@diu.edu.bd", "0184440", "A-");
    insert_head(4953, "Sohana", "sohana15-4953@diu.edu.bd", "0144481", "B+");
    insert_head(4982, "Jannatul", "jannatul15-4982@diu.edu.bd", "0184442", "B-");
    insert_head(5077, "Sumaiya", "sumaiya15-5077@diu.edu.bd", "0183", "O+");
    insert_head(5100, "Lamia", "lamia15-5100@diu.edu.bd", "0184", "O-");
    insert_head(5115, "Tonima", "tonima15-5115@diu.edu.bd", "0185", "AB+");
    insert_head(5127, "Najmus", "md15-5127@diu.edu.bd", "0186", "AB-");
    insert_head(5142, "Anika", "anika15-5142@diu.edu.bd", "0187", "A+");
    insert_head(5151, "RAFID", "rafid15-5151@diu.edu.bd", "0188", "O+");
    insert_head(5156, "Jarif", "jarif15-5156@diu.edu.bd", "0189", "B+");
    insert_head(5222, "Jamil", "jamil15-5222@diu.edu.bd", "01701", "B-");
    insert_head(5251, "Eiamin", "eiamin15-5251@diu.edu.bd", "01702", "O+");
    insert_head(5292, "Atique", "atique15-5292@diu.edu.bd", "01703", "O-");
    insert_head(5300, "Nehal", "nehal15-5300@diu.edu.bd", "01704", "AB+");
    insert_head(5308, "Iftekharul", "iftekharul15-5308@diu.edu.bd", "01705", "AB-");
    insert_head(5322, "Jahangir", "jahangir15-5322@diu.edu.bd", "01706", "A+");
    insert_head(5334, "Nahid", "nahid15-5334@diu.edu.bd", "01707", "A-");
    insert_head(5371, "Rinvi", "rinvi15-5371@diu.edu.bd", "01708", "B+");
    insert_head(5375, "Atia", "atia15-5375@diu.edu.bd", "01709", "B-");
    insert_head(5376, "Pulak", "pulak15-5376@diu.edu.bd", "01710", "O+");
    insert_head(5390, "Sirajes", "sirajes15-5390@diu.edu.bd", "01711", "O-");
    insert_head(5428, "Hossain", "hossain15-5428@diu.edu.bd", "01712", "AB+");
    insert_head(5448, "Mahfuj", "mahfuj15-5448@diu.edu.bd", "01713", "AB-");
    insert_head(5459, "Abir", "md15-5459@diu.edu.bd", "01714", "A+");
    insert_head(5494, "Rafi", "rafi15-5494@diu.edu.bd", "01715", "A-");
    insert_head(5498, "Islam", "islam15-5498@diu.edu.bd", "01716", "B+");
    insert_head(5643, "Kouser", "ahamed15-5643@diu.edu.bd", "01716", "B+");
    insert_head(5700, "Farhan", "farhan15-5700@diu.edu.bd", "01717", "O+");
    insert_head(5755, "Sanjida", "sanjida15-5755@diu.edu.bd", "01718", "A+");
    insert_head(5801, "Mizan", "mizan15-5801@diu.edu.bd", "01719", "B-");
    insert_head(5900, "Sadia", "sadia15-5900@diu.edu.bd", "01720", "AB+");
    insert_head(6002, "Mithun", "mithun15-6002@diu.edu.bd", "01721", "A+");
    insert_head(6105, "Rashid", "rashid15-6105@diu.edu.bd", "01722", "O-");
    insert_head(6200, "Tasnim", "tasnim15-6200@diu.edu.bd", "01723", "O+");
    insert_head(6300, "Rifat", "rifat15-6300@diu.edu.bd", "01724", "AB+");
    insert_head(6401, "Mahmud", "mahmud15-6401@diu.edu.bd", "01725", "A+");
    insert_head(6500, "Shakila", "shakila15-6500@diu.edu.bd", "01726", "B+");
    insert_head(6600, "Arif", "arif15-6600@diu.edu.bd", "01727", "A-");
    insert_head(6700, "Faria", "faria15-6700@diu.edu.bd", "01728", "O+");
    insert_head(6800, "Tareq", "tareq15-6800@diu.edu.bd", "01729", "B+");
    insert_head(6900, "Nusrat", "nusrat15-6900@diu.edu.bd", "01730", "A+");
    insert_head(7000, "Nayeem", "nayeem15-7000@diu.edu.bd", "01731", "AB-");
    insert_head(7100, "Rifat", "rifat15-7100@diu.edu.bd", "01732", "A+");
    insert_head(7200, "Nashit", "nashit15-7200@diu.edu.bd", "01733", "B-");
    insert_head(7300, "Sadia", "sadia15-7300@diu.edu.bd", "01734", "AB+");
    insert_head(7400, "Hasib", "hasib15-7400@diu.edu.bd", "01735", "O+");
    insert_head(7500, "Tanha", "tanha15-7500@diu.edu.bd", "01736", "A-");


}
int main()
{

    pre_store();

    int choice;
    while (1)
    {
        //system("cls");
        system("color 65");
        printf("\n");
        printf("\t\t\t\t    Student Information System             \n");
        printf("\t\t\t\t          Made By Kouser                   \n\n");

        printf("\t\t\t\t1. Add New Student                         \n");
        printf("\t\t\t\t2. Search                                  \n");
        printf("\t\t\t\t3. Delete                                  \n");
        printf("\t\t\t\t4. Display Student List                    \n");
        printf("\t\t\t\t5. Exit                                    \n\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            system("cls");
            printf("\t\t\tAdd New Student\n");
            printf("\t\t\t---------------------------------------------\n");
            addnewstudent();
            getchar();
            break;
        case 2:
            system("cls");
            printf("\t\t\tSearching student: \n");
            searchstudent();
            getchar();
            break;
        case 3:

            system("cls");
            printf("Delete Student Information\n");
            printf("\t\t\t---------------------------------------------\n");
            delete_node();
            getchar();
            break;
        case 4:

            system("cls");
            printf("Students List\n");
            printf("\t\t\t---------------------------------------------\n");
            displaystudent();
            getchar();
            break;
        case 5:
            system("cls");
            printf("Good Bye!");
            break;
        default:
            printf("Wrong Choice\n");
            getchar();
        }
    }
}
