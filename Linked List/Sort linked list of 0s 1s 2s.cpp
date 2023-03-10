// Question Name: Sort linked list of 0s 1s 2s
// Question link: https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

Node *sortList(Node *head)
{
    int zeroCount = 0, oneCount = 0, twoCount = 0;

    Node *temp = head;

    while (temp)
    {
        if (temp->data == 0)
            zeroCount++;
        else if (temp->data == 1)
            oneCount++;
        else
            twoCount++;

        temp = temp->next;
    }

    temp = head;

    while (temp)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else
        {
            temp->data = 2;
            twoCount--;
        }

        temp = temp->next;
    }

    return head;
}
