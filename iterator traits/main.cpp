//
//  main.cpp
//  iterator traits
//
//  Created by Panayotis Matsinopoulos on 16/5/21.
//

#include <algorithm>
#include <forward_list>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

template<typename C>
using Iterator_type = typename C::iterator;

template<typename Iter>
using Iterator_category = typename std::iterator_traits<Iter>::iterator_category;

template<typename Ran>
void sort_helper(Ran beg, Ran end, std::random_access_iterator_tag) {
  std::sort(beg, end);
}

template<typename For>
void sort_helper(For beg, For end, std::forward_iterator_tag) {
//  cout << "decltype(*beg) " << decltype(*beg) << endl;
  auto x = *beg;
  vector<decltype(x)> v { beg, end };
//  vector<int> v { beg, end };
  std::sort(v.begin(), v.end());
  std::copy(v.begin(), v.end(), beg);
}


template<class C>
void extended_sort(C& c) {
  using Iter = Iterator_type<C>;
  sort_helper(c.begin(), c.end(), Iterator_category<Iter>{});
}

void test(vector<string>& v, forward_list<int>& lst) {
  extended_sort(v);
  extended_sort(lst);
}

int main(int argc, const char * argv[]) {
  cout << "Starting..." << endl;
  
  vector<int> vec_of_int { 5, 11, 7 };
  
  extended_sort(vec_of_int);
  
  int index = 0;
  for(auto i = vec_of_int.begin(); i != vec_of_int.end(); i++) {
    cout << "vec element at (" << index << ") is " << *i << endl;
    index++;
  }
  
  vector<string> vec_of_string { "9", "3", "7" };
  forward_list<int> flist_of_int { 9, 3, 7 };
  
  test(vec_of_string, flist_of_int);

  for(auto i = flist_of_int.begin(); i != flist_of_int.end(); i++) {
    cout << "flist element " << *i << endl;
  }
  return 0;
}
