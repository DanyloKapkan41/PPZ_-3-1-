
#include <iostream>
#include<list>
using namespace std;

void filling(list<int>& list, int n)
{
    list.push_back(n);
}

void show(list<int> list)
{
    for (auto& element : list) {
        cout << element << " ";
    }
}
int main()
{
    list <int> list1, list2;
    int N=-1, i;
    srand(time(NULL));
    do {
        cout << "Count elements in first list(0<=N<=50): ";
        cin >> N;
    } while (N > 50 || N < 0);
    for (i = 0; i < N; i++)
    {
        filling(list1, rand() % 201 - 100);
    }
    do {
        cout << "Count elements in second list(0<=N<=50): ";
        cin >> N;
    } while (N > 50 || N < 0);
    for (i = 0; i < N; i++)
    {
        filling(list2, rand() % 201 - 100);
    }
    list1.sort();
    list2.sort();
    cout << "\nList1: ";
    show(list1);
    cout << "\nList2: ";
    show(list2);
    list1.splice(list1.end(), list2);
    list1.sort();
    cout << "\nList1: ";
    show(list1);
}
