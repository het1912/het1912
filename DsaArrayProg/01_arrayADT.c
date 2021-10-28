
struct customArr
{
    
    int reservedSize;
    
    int usedSized;
    
    int* baseAdd;

    
};


void createArray(struct customArr* a, int reserved_size, int used_size){
    
    a -> reservedSize = reserved_size;
    a -> usedSized = used_size;
    
    a -> baseAdd = (int*)malloc(reserved_size * sizeof(int));

}

void displayArr(struct customArr* a){
    for (int i = 0; i < a->usedSized; i++)
    {
        printf("/n%d", (a->baseAdd)[i]);
    }
    

}
void addElement(struct customArr* a){
    int element;
    for (int i = 0; i < a->usedSized; i++)
    {
        printf("/nEnter element %d", i);
        scanf("%d",&element);
        (a->baseAdd)[i] = element;
    }
    

}

int main()
{
    struct customArr elements;
    createArray(&elements,10,5);
    printf("addElements running now \n");
    addElement(&elements);
    printf("displayArr running now \n");
    displayArr(&elements);

    return 0;
}


