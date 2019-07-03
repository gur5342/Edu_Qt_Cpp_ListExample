#include <iostream>
#include <list>

using namespace std;

template<typename T>
void print_list(list<T> & lst)
{
    for(const auto & elem : lst){
        cout << elem << endl;
    }
}

int main()
{
    list<int> lst;
    lst.push_back(10);
    lst.push_front(5); // 맨 앞에 추가
    lst.push_back(20); // 맨 뒤에 추가
    lst.push_front(1);
    print_list(lst);

    for(list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr)
    {
        if(*itr == 20){ // 20이 되면
            lst.insert(itr, 19); // 20 앞에 19를 추가한다.
        }
    }

    for(list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr)
    {
        if(*itr == 19){
            lst.erase(itr);
            break;
        }
    }
    return 0;
}
