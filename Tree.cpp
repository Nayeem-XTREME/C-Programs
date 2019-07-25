#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    struct node *LC;
    struct node *RC;
    struct node *par;
}*head, *root, *NN, *src;

void insert (struct node *add, int data)
{
    if (data > add->val) {
        if (add->RC == NULL) {
            add->RC = NN;
            NN->par = add;
        }

        else {
            add = add->RC;
            insert (add, data);
        }
    }

    else if (data <= add->val) {
        if (add->LC == NULL) {
            add->LC = NN;
            NN->par = add;
        }

        else {
            add = add->LC;
            insert (add, data);
        }
    }
}

void preorder(struct node *ad)
{

    cout << "\t" << ad->val << "\t" << ad << "\t" << ad -> par << endl;

    if (ad->LC != NULL)
        preorder(ad->LC);

    if (ad->RC != NULL)
        preorder(ad->RC);

}

void inorder(struct node *ad)
{

    if (ad->LC != NULL)
        inorder(ad->LC);
        
    cout << "\t" << ad->val << "\t" << ad << "\t" << ad -> par << endl;

    if (ad->RC != NULL)
        inorder(ad->RC);

}

void postorder(struct node *ad)
{

    if (ad->LC != NULL)
        postorder(ad->LC);

    if (ad->RC != NULL)
        postorder(ad->RC);
        
    cout << "\t" << ad->val << "\t" << ad << "\t" << ad -> par << endl;

}

int search (struct node *root, int data)
{
    if (root -> val ==  data) {
    	cout << "Adress is " << root << endl;
        src = root;
	}   

    else if (data > root->val) {
        if (root->RC !=  NULL)  {
            root = root->RC;
            search (root, data);
        }
        else
        	cout << "//Data not found//" << endl;
    }

    else if (data <= root->val) {
        if (root->LC !=  NULL)  {
            root = root->LC;
            search (root, data);
        }
        else
        	cout << "//Data not found//" << endl;
    }

}

void delet (struct node *root, int val)
{
	struct node *TN, *parent, *max;
	search (root, val);
	TN = src;
	
	if (TN -> LC == NULL && TN -> RC == NULL) {   // leaf node delete
		parent = TN -> par;
		if ((parent -> LC) -> val == val) {
			parent -> LC = NULL;
		} 
		else if ((parent -> RC) -> val == val) {
			parent -> RC = NULL;
		}
	}
	
	else if (TN -> LC == NULL) {   // node, which have one child, delete
		parent = TN -> par;
		if ((parent -> RC) -> val == val) {
			parent -> RC = TN -> RC;
		}
		else if ((parent -> LC) -> val == val) {
			parent -> LC = TN -> RC;
		}
	}
	
	else if (TN -> RC == NULL) {   // node, which have one child, delete
		parent = TN -> par;
		if ((parent -> RC) -> val == val) {
			parent -> RC = TN -> LC;
		}
		else if ((parent -> LC) -> val == val) {
			parent -> LC = TN -> LC;
		}
	}
	
	else if (TN -> LC != NULL && TN -> RC != NULL) {   // node, which have two child, delete
		max = TN -> LC;
		while (max -> RC != NULL) {
			max = max -> RC;
		}
		
		TN -> val = max -> val;
		delet(TN->LC, max->val);
		//parent = max -> par;
		//if (max->LC == NULL && max->RC == NULL) 
			//parent -> RC = NULL;
	}
}

int main()
{
    int n, data;

    cout << "Enter the root : ";
    NN = (struct node*) malloc (sizeof(struct node));
    root = NN;
    head = NN;
    NN->LC = NULL;
    NN->RC = NULL;
    NN -> par = NULL;
    cin >> NN->val;

    cout << "Enter negative value when you want to exit" << endl;
    while (1) {
        
        cout << "Enter data: ";
		cin >> n;
        if (n >= 0) {
            NN = (struct node*) malloc (sizeof(struct node));
            NN->val = n;
            NN->RC = NULL;
            NN->LC = NULL;
            insert(head, NN->val);
        }

        else if (n < 0)
            break;
    }

    cout << endl << "Data of the tree" << endl;
    
    cout << "Pre-order traversing" << endl;
    preorder(root);
    //cout << endl << "In-order traversing" << endl;
    //inorder(root);
    //cout << endl << "Post-order traversing" << endl;
    //postorder(root);

    while (1) {
        cout << "1. Search\n2. Delete\n3. Exit" << endl;
        
        cin >> n;
        
        if (n == 1) {
            cout << "Enter data to search : ";
            cin >> data;
            search(root, data);
        }
        
        else if (n == 2) {
        	cout << "Enter data to delete : ";
            cin >> data;
            delet (root, data);
            
            cout << "Pre-order traversing : " << endl;
    		preorder(root);
		}

        else if (n == 3)
            break;
    }
    
    cout << "Pre-order traversing : " << endl;
    preorder(root);
}
