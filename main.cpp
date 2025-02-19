#include <iostream>

struct List
{
	int value;
	List * next;
	List * before;
};

List* convertArrayToList(int* array, int countElementOfArray)
{
  List* head = new List; 
  head->value = array[0];
  head->next = nullptr;
  head->before = nullptr;
  List* nowHead = head;

  for (size_t i = 1; i < countElementOfArray; ++i)
  {
    List* newNewHead = new List;
    newNewHead->value = array[i];
    newNewHead->next = nullptr;
    newNewHead->before = nowHead;

    nowHead->next = newNewHead;
    nowHead = newNewHead;
  }
  return head;
}

int main()
{
  int maxCount = 10;
  int * array = new int[maxCount];
  int input;
  int realCount = 0;
  for (size_t i = 0; i < maxCount; i++)
  {
    std::cin >> input;
    if (std::cin.fail() && !std::cin.eof())
    {
      break;
    }
    array[i] = input;
    realCount++;
  }

  List * arr = convertArrayToList(array, realCount);

  for (size_t i = 0; i < realCount; i++)
  {
  // круто вывести 
  }
  // круто очистить память 
}
