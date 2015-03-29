#include <iostream>
using namespace std;
int main ()
{
setlocale(LC_ALL, "Russian");
int arr[(unsigned char)200], n, i, b, j;
cout<<"\n Введите длину массива="; cin>>n;
for (i=0; i<n; i++) //вывод массива
{
cout<<"\n Введите значение["<<i<<"]=";
cin>>arr[i];
}
//упорядочивание элементов в массиве по возрастанию их значений
for (j=1; j<n; j++)
for (i=0; i<n-j; i++)
if (arr[i]>arr[i+1]) //если текущий элемент больше следущего, то
{
b=arr[i]; //сохранить значение текущего элемента;
arr[i]=arr[i+1]; //заменить текущий элемент следующим;
arr[i+1]=b; //заменить следующий элемет текущим.
}
for (i=0; i<n; i++) cout<<arr[i]<<"\t"; //вывод упорядоченного массива
system("pause");
return 0;
}
