#include <iostream>
using namespace std;
int main ()
{
setlocale(LC_ALL, "Russian");
int arr[(unsigned char)200], n, i, b, j;
cout<<"\n ������� ����� �������="; cin>>n;
for (i=0; i<n; i++) //����� �������
{
cout<<"\n ������� ��������["<<i<<"]=";
cin>>arr[i];
}
//�������������� ��������� � ������� �� ����������� �� ��������
for (j=1; j<n; j++)
for (i=0; i<n-j; i++)
if (arr[i]>arr[i+1]) //���� ������� ������� ������ ���������, ��
{
b=arr[i]; //��������� �������� �������� ��������;
arr[i]=arr[i+1]; //�������� ������� ������� ���������;
arr[i+1]=b; //�������� ��������� ������ �������.
}
for (i=0; i<n; i++) cout<<arr[i]<<"\t"; //����� �������������� �������
system("pause");
return 0;
}