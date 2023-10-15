#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>
typedef struct Student {
	char name[50];
	char mail[50];
	int id;z
	char blood[10];
	char cell[50];
	struct Student *next;
} node;
node *head = NULL;

void insert_data(const int id, const char name[], const char mail[], const char cell[], const char blood[]) {
	node *newnode = (node*)malloc(sizeof(node));
	if (newnode == NULL) {
		printf("Unable to Allocate\n");
		return;
	}
	newnode->id = id;
	strcpy(newnode->name, name);
	strcpy(newnode->mail, mail);
	strcpy(newnode->cell, cell);
	strcpy(newnode->blood, blood);
	newnode->next = NULL;
	if (head == NULL) {
		head = newnode;
	} else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

// displaying all student's info
void displaystudent()
{
	node *temp = head;
	while (temp != NULL) {
		printf("__________________________________________________\n");
		printf("ID: %d                                            \n", temp->id);
		printf("Name: %s                                          \n", temp->name);
		printf("Email: %s                                         \n", temp->mail);
		printf("Cell: %s                                          \n", temp->cell);
		printf("Blood Group: %s                                   \n", temp->blood);
		printf("__________________________________________________\n");
		temp = temp->next;
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
	insert_data(id, name, email, cell, blood);
	printf("New student added successfully!\n\n");
}

void search_by_id(int id) {
	bool find = false;
	node *temp = head;
	if (temp == NULL) {
		if (temp->id == id) {
			printf("Found!\n");
			printf("__________________________________________________\n");
			printf("ID: %d                                            \n", temp->id);
			printf("Name: %s                                          \n", temp->name);
			printf("Email: %s                                         \n", temp->mail);
			printf("Cell: %s                                          \n", temp->cell);
			printf("Blood Group: %s                                   \n", temp->blood);
			printf("__________________________________________________\n");
			temp = temp->next;
			return;
		}
	} else {
		while (temp != NULL) {
			if (temp->id == id) {
				find = true;
				break;
			} else {
				temp = temp->next;
			}
		}
	}
	if (find) {
		printf("Found!\n");
		printf("__________________________________________________\n");
		printf("ID: %d                                            \n", temp->id);
		printf("Name: %s                                          \n", temp->name);
		printf("Email: %s                                         \n", temp->mail);
		printf("Cell: %s                                          \n", temp->cell);
		printf("Blood Group: %s                                   \n", temp->blood);
		printf("__________________________________________________\n");
		temp = temp->next;
	} else {
		printf("No matching id\n");
	}
}

void search_by_name(const char *name) {
	bool find = false;
	node *temp = head;
	if (temp == NULL) {
		if (!strcmp(temp->name, name)) {
			printf("Found!\n");
			printf("__________________________________________________\n");
			printf("ID: %d                                            \n", temp->id);
			printf("Name: %s                                          \n", temp->name);
			printf("Email: %s                                         \n", temp->mail);
			printf("Cell: %s                                          \n", temp->cell);
			printf("Blood Group: %s                                   \n", temp->blood);
			printf("__________________________________________________\n");
			temp = temp->next;
			return;
		}
	} else {
		while (temp != NULL) {
			if (!strcmp(temp->name, name)) {
				find = true;
				break;
			} else {
				temp = temp->next;
			}
		}
	}
	if (find) {
		printf("Found!\n");
		printf("__________________________________________________\n");
		printf("ID: %d                                            \n", temp->id);
		printf("Name: %s                                          \n", temp->name);
		printf("Email: %s                                         \n", temp->mail);
		printf("Cell: %s                                          \n", temp->cell);
		printf("Blood Group: %s                                   \n", temp->blood);
		printf("__________________________________________________\n");
		temp = temp->next;
	} else {
		printf("No matching name\n");
	}
}

void search_by_blood(const char *blood) {
	bool find = false;
	node *temp = head;
	if (temp == NULL) {
		if (!strcmp(temp->blood, blood)) {
			printf("Found!\n");
			printf("__________________________________________________\n");
			printf("ID: %d                                            \n", temp->id);
			printf("Name: %s                                          \n", temp->name);
			printf("Email: %s                                         \n", temp->mail);
			printf("Cell: %s                                          \n", temp->cell);
			printf("Blood Group: %s                                   \n", temp->blood);
			printf("__________________________________________________\n");
			temp = temp->next;
			return;
		}
	} else {
		while (temp != NULL) {
			if (!strcmp(temp->blood, blood)) {
				find = true;
				break;
			} else {
				temp = temp->next;
			}
		}
	}
	if (find) {
		printf("Found!\n");
		printf("__________________________________________________\n");
		printf("ID: %d                                            \n", temp->id);
		printf("Name: %s                                          \n", temp->name);
		printf("Email: %s                                         \n", temp->mail);
		printf("Cell: %s                                          \n", temp->cell);
		printf("Blood Group: %s                                   \n", temp->blood);
		printf("__________________________________________________\n");
		temp = temp->next;
	} else {
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
void delete_node() {
	printf("Enter id to delete: ");
	int id;
	scanf("%d", &id);
	node* temp, *prev;
	if (head == NULL) {
		printf("Empty List\n");
	} else {
		temp = head;
		prev = head;
		while (temp != NULL) {
			if (temp->id != id) {
				prev = temp;
				temp = temp->next;
			} else {
				prev->next = temp->next;
				free(temp);
				printf("successfully deleted \n");
				return;
			}
		}
		printf("No matching id found for deletion\n");
	}
}
void pre_store() {
	insert_data(4755, "Nasima", "nasima15-4755@diu.edu.bd", "0171", "A+");
	insert_data(4792, "Anuradha", "anuradha15-4792@diu.edu.bd", "0172", "A-");
	insert_data(4794, "Rakib", "rakib15-4794@diu.edu.bd", "0173", "B+");
	insert_data(4802, "Salman", "salman15-4802@diu.edu.bd", "0174", "B-");
	insert_data(4893, "Mirajul", "mirajul15-4893@diu.edu.bd", "0175", "O+");
	insert_data(4902, "Tanjina", "tanjina15-4902@diu.edu.bd", "0176", "O-");
	insert_data(4903, "Tanjid", "tanjid15-4903@diu.edu.bd", "0177", "AB+");
	insert_data(4916, "Sabbir", "sabbir15-4916@diu.edu.bd", "0178", "AB-");
	insert_data(4918, "Rumaia", "rumaia15-4918@diu.edu.bd", "0179", "A+");
	insert_data(4928, "Jannatul", "jannatul15-4928@diu.edu.bd", "0180", "A-");
	insert_data(4953, "Sohana", "sohana15-4953@diu.edu.bd", "0181", "B+");
	insert_data(4982, "Jannatul", "jannatul15-4982@diu.edu.bd", "0182", "B-");
	insert_data(5077, "Sumaiya", "sumaiya15-5077@diu.edu.bd", "0183", "O+");
	insert_data(5100, "Lamia", "lamia15-5100@diu.edu.bd", "0184", "O-");
	insert_data(5115, "Tonima", "tonima15-5115@diu.edu.bd", "0185", "AB+");
	insert_data(5127, "Najmus", "md15-5127@diu.edu.bd", "0186", "AB-");
	insert_data(5142, "Anika", "anika15-5142@diu.edu.bd", "0187", "A+");
	insert_data(5151, "RAFID", "rafid15-5151@diu.edu.bd", "0188", "O+");
	insert_data(5156, "Jarif", "jarif15-5156@diu.edu.bd", "0189", "B+");
	insert_data(5222, "Jamil", "jamil15-5222@diu.edu.bd", "01701", "B-");
	insert_data(5251, "Eiamin", "eiamin15-5251@diu.edu.bd", "01702", "O+");
	insert_data(5292, "Atique", "atique15-5292@diu.edu.bd", "01703", "O-");
	insert_data(5300, "Nehal", "nehal15-5300@diu.edu.bd", "01704", "AB+");
	insert_data(5308, "Iftekharul", "iftekharul15-5308@diu.edu.bd", "01705", "AB-");
	insert_data(5322, "Jahangir", "jahangir15-5322@diu.edu.bd", "01706", "A+");
	insert_data(5334, "Nahid", "nahid15-5334@diu.edu.bd", "01707", "A-");
	insert_data(5371, "Rinvi", "rinvi15-5371@diu.edu.bd", "01708", "B+");
	insert_data(5375, "Atia", "atia15-5375@diu.edu.bd", "01709", "B-");
	insert_data(5376, "Pulak", "pulak15-5376@diu.edu.bd", "01710", "O+");
	insert_data(5390, "Sirajes", "sirajes15-5390@diu.edu.bd", "01711", "O-");
	insert_data(5428, "Hossain", "hossain15-5428@diu.edu.bd", "01712", "AB+");
	insert_data(5448, "Mahfuj", "mahfuj15-5448@diu.edu.bd", "01713", "AB-");
	insert_data(5459, "Abir", "md15-5459@diu.edu.bd", "01714", "A+");
	insert_data(5494, "Rafi", "rafi15-5494@diu.edu.bd", "01715", "A-");
	insert_data(5498, "Islam", "islam15-5498@diu.edu.bd", "01716", "B+");
}
int main() {

	pre_store();

	int choice;
	while (1)
	{
		//system("cls");
		system("color 30");
		printf("\t\t\t\t---------------------------------------------\n");
		printf("\t\t\t\t|       Student Information Mini Project    |\n");
		printf("\t\t\t\t---------------------------------------------\n");
		printf("\t\t\t\t|1. Add New Student                         |\n");
		printf("\t\t\t\t|2. Search                                  |\n");
		printf("\t\t\t\t|3. Delete                                  |\n");
		printf("\t\t\t\t|4. Display Student List                    |\n");
		printf("\t\t\t\t|5. Exit                                    |\n");
		printf("\t\t\t\t---------------------------------------------\n");
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