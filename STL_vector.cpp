//vector ���������ȸ�����Ҫ���Լ��ı� 
#include<vector> 
using namespace std;
vector <int >  name; 
vector <int> vi[100];//vi��ÿһ��Ԫ�ض��� int�͵Ŀɱ䳤���� 
vector <int > ::iterator it;//iterator��������������ָ�룬����ͨ��*it ����vector��Ԫ�� 

//push_back(i);��vi��ĩβ���Ԫ��i
vector <int > vi;
vi.push_back(9);//��viĩβ�����Ԫ��9

//begin(),ȡԪ����ַ
vector <int>::iterator it =vi.begin();

//end����ȡβԪ�ص�ַ����һ����ַ����Ϊ������ĩβ��־�����洢�κ�Ԫ��
for (vector <int> iterator it=vi.begin();it!=vi.end();it++)
{printf("%d",*it);}

//pop_back(),����ɾ��vector��βԪ��
for (int i=1;i<=3;i++)
{
	vi.pop_back();
} 

//size(),��ȡvector��Ԫ�صĸ���
vi.size();

//clear(),���vector ������Ԫ��
vi.clear();

//insert��it,x��,�������it�����������һ��Ԫ��x
vi.insert(vi.begin()+2,-1);
 
 //erase() �����÷���ɾ������Ԫ�أ�ɾ��һ�������ڵ�����Ԫ�� 
 //1.ɾ������Ԫ�أ�erase��it�� 
 //2.ɾ��[first,last)������Ԫ�أ�erase(first,last)
