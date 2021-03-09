#include <iostream>
using namespace std;
class LinkedList
{      
    private:
        struct Node
        {
            const char *data;
            struct Node *next;
        }; 
        Node *first;
        Node *last;
        int size;
        
    public:
        LinkedList()
        {
            first = nullptr;
            last = nullptr;
            size = 0;
        }

        int append(const char* text)
        {
            Node* n = new Node;
            n -> data = text;
            n->next = NULL;
            if(first==nullptr)
            {
                first = n;
                last = n;
                size = 1;
                return 1;
            }
            else{
                last -> next = n;
                last = last->next;
                return 1;  
            }
            return 0;
            
        }

        const char *get_first(){
            return first -> data;
        }

        const char *get_last(){
            return last -> data;
        }

        int insert(const char* text, int p)
        {
            Node* n = new Node;
            n -> data = text;
            n->next = NULL;

            int a = 1;
            Node *zeiger = first;
            while(a<p)
            {
                    if(zeiger == nullptr)
                    {
                        append(text);
                        return a;
                    }
                    a++;
                    zeiger = zeiger -> next;
            }
            if(zeiger == nullptr)
            {
                last -> next = n;
                last = last -> next;
                return p;
            }
            n -> next = zeiger -> next;
            zeiger -> next = n;
            return p;
        }

        int remove(int p)
        {
                Node *zeiger = first->next;
                Node *schlepp = first;
                if(p ==0){
                    if(first->next == nullptr){
                        return 0;
                    }
                    if(first->next == last){
                        first = last;
                        first->next = nullptr;
                    }
                    first = first-> next;
                    free(schlepp);
                    return 1;
                }else if(p==1){
                    if(zeiger == last){
                        first->next = nullptr;
                        last = first;
                        free(zeiger);
                        return 1;
                    }else if( zeiger-> next == last){
                        first->next = last;
                        free(zeiger);
                        return 1;
                    }else {
                        first->next = zeiger->next;
                        free(zeiger);
                        return 1;
                    }
                }

                for (int a =2; p>a; a++ ){
                    if (zeiger->next == nullptr){
                        last = schlepp;
                        last->next = nullptr;
                        free(zeiger);
                        return 1;
                    }
                    schlepp =zeiger;
                    zeiger = zeiger->next;
                }
                if(zeiger->next == nullptr){
                    last = schlepp;
                    last->next = nullptr;
                    free(zeiger);
                    return 1;
                }
                schlepp->next = zeiger-> next;
                free(zeiger);
                return 1;
        }  

        const char *get(int p)
        {
            int a = 0;
            Node *zeiger = first;

            while(a<p)
            {
                if(zeiger == nullptr)
                {
                    return nullptr;
                }
                zeiger = zeiger -> next;
                a++;
            }
            const char* data = zeiger -> data;
            return data;
        }

        int index_of(const char *text)
        {
            int a = 0;
            Node *zeiger = first;
            while(zeiger != nullptr)
            {
                if(zeiger -> data == text)
                {
                    return a;
                }
                else
                {
                    zeiger = zeiger->next;
                    a++;
                }
            }
            return -1;
        }

        void visit_all(void (*work) (const char *t))
        {
            Node *zeiger = first;
            while(zeiger != nullptr)
            {
                work(zeiger->data);
                zeiger = zeiger -> next;
            }
        }

};