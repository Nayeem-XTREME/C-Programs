#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int f=0;
int par;

void heapify(int fr)
{
    int p,temp;

    p=fr/2;

    while(p>0)
    {
        if(arr[fr]>arr[p])
        {
            temp=arr[p];
            arr[p]=arr[fr];
            arr[fr]=temp;
        }
        else
            break;
        fr=p;
        p=fr/2;
    }

}

void insert(int data)
{
    arr[++f]=data;
    heapify(f);
}

int Search(int low,int high,int data)
{
    int mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(data==arr[mid])
            return mid;
        else if(data<arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }
}

void del(int ch)
{
    int i;
//    while(1<2)
//    {
//        i++;
//        if(ch==arr[i])
//            break;
//    }

	for (i = 1; i < f; i++) {
		if (ch == arr[i])
			break;
	}

    while(i<=f)
    {
        arr[i]=arr[i+1];
        heapify(i);
        i++;
    }
    f--;

}

void display()
{
    cout<<"Heapify data are"<<endl;
    int i;
    for(i=1; i<=f; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}


int main()
{
    int i,data;
    while(1<2)
    {
        cout<<"1.To Insert\n2.To Display\n3.To Delete\n4.To search\n0.To Exit"<<endl;
        cin>>i;
        switch (i)
        {
        case 1:
            cout<<"Enter data to Insert"<<endl;
            cin>>data;
            insert(data);
            break;
        case 2:
            display();
            break;
        case 3:
            cout<<"Enter which data you want to delete"<<endl;
            int ch;
            cin>>ch;
            del(ch);
            break;
        case 4:
            cout<<"Enter data to Search"<<endl;
            int data;
            cin>>data;
            int mid=Search(1,f,data);
            cout<<arr[mid]<<endl;
            break;
        }
        if(i==0)
            break;
    }
    return 0;
}
