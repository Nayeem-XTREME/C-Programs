#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node {
	char data[20];
	node *par;
	node *next;
}*nptr, *head, *temp, *pos;

int main()
{
	int n;
	char name[20];
	//node *nptr, *head, *temp, *pos;
	
	
	//cin >> n;
	
	nptr = (struct node*)malloc(sizeof(node));
	nptr->par = NULL;
	nptr->next = NULL;
	cout << "Please enter the data of 1st node (Name):" << endl;
	gets(nptr->data);
	
	head = nptr;
	temp = nptr;
	
	while (1) {
		cout << "1. Create another node\n2. Exit" << endl;
		cin >> n;
		
		if (n == 1) {
			nptr = (struct node*)malloc(sizeof(node));
			temp->next = nptr;
			nptr->par = temp;
			nptr->next = NULL;
			cout << "Enter the data of the node (Name):" << endl;
			cin >> nptr->data;
			temp = nptr;
		}
		
		else if (n == 2)
			break;
	}
	
	cout << "Data of the linked list:" << endl;
	
	temp = head;
	while (1) {
		//printf("%d\n", temp->data);
		puts(temp->data);
		//cout << temp->par << " " << temp << " " << temp->data << " " << temp->next << endl;
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	
	while (1) {
		cout << "1. Insert\n2. Delete\n3. Exit" << endl;
		cin >> n;
		if (n == 1) {
			cout << "After which data you want to insert a new node (Name)?" << endl;
			cin >> name;
			
			temp = head;
			while (1) {
				if (strcmp(temp->data, name) == 0) {
					pos = temp;
					break;
				}
				temp = temp->next;
			}
			
			nptr = (struct node*)malloc(sizeof(node));
			nptr->par = pos;
			nptr->next = pos->next;
			pos->next = nptr;
			(nptr->next)->par = nptr;
			cout << "Enter your data (Name):" << endl;
			cin >> nptr->data;
		}
		
		else if (n == 2) {
			
			cout << "1. Delete a data\n2. Delete head" << endl;
			cin >> n;
			
			if (n == 1) {
				cout << "Which data you want to delete (Name)?" << endl;
				//cin >> n;
				cin >> name;
				
				temp = head;
				while (1) {
					if (strcmp(temp->data, name) == 0) {
						pos = temp;
						break;
					}
					temp = temp->next;
				}
				if (pos->par != NULL && pos->next != NULL) {
					(pos->par)->next = pos->next;
					(pos->next)->par = pos->par;
				}
				
				else if (pos->par == NULL)
					head = head->next;
				
				else if (pos->next == NULL)
					pos = pos->par;
				
			}
			
			else if (n == 2) {
				head = head->next;
			}	
		}
		
		else if (n == 3)
			break;
	}
	
	cout << "Final linked list is:" << endl;
	temp = head;
	while (1) {
		//printf("%d\n", temp->data);
		puts(temp->data);
		//cout << temp->par << " " << temp << " " << temp->data << " " << temp->next << endl;
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	
	
	return 0;
}
