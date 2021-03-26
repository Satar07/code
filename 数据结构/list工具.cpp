#include <iostream>  
#include <list>  
#include <string>
#include <windows.h> 
  
using namespace std; 
typedef list<int> INTLIST; 
  
//从前向后显示list队列的全部元素  
void put_list(INTLIST list, string name) 
{ 
  INTLIST::iterator plist; 
  
  cout << "The contents of " << name << " : "; 
  for (plist = list.begin(); plist != list.end(); plist++) 
    cout << *plist << " "; 
  cout << endl; 
} 
  
//测试list容器的功能  
int main() 
{ 
  //list1对象初始为空  
  INTLIST list1; 
  INTLIST list2(5, 1); 
  INTLIST list3(list2.begin(), --list2.end()); 
  
  //声明一个名为i的双向迭代器  
  INTLIST::iterator i; 
  
  put_list(list1, "list1"); 
  put_list(list2, "list2"); 
  put_list(list3, "list3"); 
  
  list1.push_back(7); 
  list1.push_back(8); 
  cout << "list1.push_back(7) and list1.push_back(8):" << endl; 
  put_list(list1, "list1"); 
  
  list1.push_front(6); 
  list1.push_front(5); 
  cout << "list1.push_front(6) and list1.push_front(5):" << endl; 
  put_list(list1, "list1"); 
  
  list1.insert(++list1.begin(), 9); 
  cout << "list1.insert(++list1.begin(),9):" << endl; 
  put_list(list1, "list1"); 
  
  //测试引用类函数  
  cout << "list1.front()=" << list1.front() << endl; 
  cout << "list1.back()=" << list1.back() << endl; 
  
  list1.pop_front(); 
  list1.pop_back(); 
  cout << "list1.pop_front() and list1.pop_back():" << endl; 
  put_list(list1, "list1"); 
  
  list1.erase(++list1.begin()); 
  cout << "list1.erase(++list1.begin()):" << endl; 
  put_list(list1, "list1"); 
  
  
  list2.assign(8, 1); 
  cout << "list2.assign(8,1):" << endl; 
  put_list(list2, "list2"); 
  
  cout << "list1.max_size(): " << list1.max_size() << endl; 
  cout << "list1.size(): " << list1.size() << endl; 
  cout << "list1.empty(): " << list1.empty() << endl; 
  
  put_list(list1, "list1"); 
  put_list(list3, "list3"); 
  cout << "list1>list3: " << (list1 > list3) << endl; 
  cout << "list1<list3: " << (list1 < list3) << endl; 
  
  list1.sort(); 
  put_list(list1, "list1"); 
  
  list1.splice(++list1.begin(), list3); 
  put_list(list1, "list1"); 
  put_list(list3, "list3"); 
  Sleep(10000); 
} 
