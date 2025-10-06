//Prajwal Gaikwad
//24070123073
//A3
#include<iostream>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int elements;
    std::cout<<"How many elements in the arrayx  :";
    std::cin>>elements;
    int array[elements];
    std::cout<<"Enter elements:";
    for(int i=0;i<elements;i++){
        std::cin>>array[i];
    }
    for(int i=0;i<elements;i++){
        std::cout<<array[i]<<" ";
    }
    int n=0;
    while(n!=elements){
        for(int i=0;i<elements-n;i++){
            if(array[i]>array[i+1]){
                swap(&array[i],&array[i+1]);
            }
        }
        n++;
    }
    std::cout<<"\nSorted array is:"<<"\n";
    for(int i=0;i<elements;i++){
        std::cout<<array[i]<<" ";
    }
    return 0;
}
/*
Output:
Enter elements:2
4
99
1
3
2 4 99 1 3 
Sorted array is:
1 2 3 4 99
*/