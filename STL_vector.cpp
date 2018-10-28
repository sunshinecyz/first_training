//vector 向量，长度根据需要可自己改变 
#include<vector> 
using namespace std;
vector <int >  name; 
vector <int> vi[100];//vi的每一个元素都是 int型的可变长数组 
vector <int > ::iterator it;//iterator迭代器，类似于指针，可以通过*it 访问vector的元素 

//push_back(i);在vi的末尾添加元素i
vector <int > vi;
vi.push_back(9);//在vi末尾添加了元素9

//begin(),取元素首址
vector <int>::iterator it =vi.begin();

//end（）取尾元素地址的下一个地址，作为迭代器末尾标志，不存储任何元素
for (vector <int> iterator it=vi.begin();it!=vi.end();it++)
{printf("%d",*it);}

//pop_back(),用来删除vector的尾元素
for (int i=1;i<=3;i++)
{
	vi.pop_back();
} 

//size(),获取vector中元素的个数
vi.size();

//clear(),清空vector 中所有元素
vi.clear();

//insert（it,x）,向迭代器it的任意除插入一个元素x
vi.insert(vi.begin()+2,-1);
 
 //erase() 两种用法：删除单个元素，删除一个区间内的所有元素 
 //1.删除单个元素：erase（it） 
 //2.删除[first,last)的所有元素：erase(first,last)
