# include <iostream>
void average( int *num, int *num2);
void swap(int *num, int *num2);
int main()
{
    int x =10;
    int y=20;
    swap(&x,&y);
    std::cout << x << std:: endl;
}

void average( int *num, int *num2)
{
    *num = (*num + *num2)/2;
    *num2 = *num;
}

void swap(int *num, int *num2)
{
    int temp = *num;
    *num = *num2;
    *num2 = temp;
}