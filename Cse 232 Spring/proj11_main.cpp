#include<iostream>
using std::cout; using std::endl; using std::boolalpha;
#include<algorithm>
using std::copy;
#include<iterator>
using std::ostream_iterator;
#include <string> 
using std::string; 

#include "proj11_class.h"

int main (){
  cout << boolalpha;
  Element<string, string> e1;
  e1.key_ = "abc";
  e1.values_[0] = "a"; 
  e1.values_[1] = "b";
  e1.values_[2] = "c";
  e1.count_ = 3; 
  cout << e1 << endl;
  Element<string, string> e2("abc", {"a", "b", "c"} );
  cout << (e1 == e2) << endl;
  
  MVM<string, string> mvm1 { {"abc", {"a","b", "c"}},{"xyz", {"x","y","z"}}}; 
  cout << "mvm " <<  mvm1 << endl;
  auto result = mvm1.find_key("abc");
  cout << result.second->key_ << endl;
  
  MVM<string,string> result_key = mvm1.find_value("a");
  cout << "result_key " <<  result_key << endl;
  cout << mvm1.size() << endl;
  cout << mvm1.add("qrs", "q") << endl;
  cout << mvm1.add("bcd", "a") << endl;
  cout << mvm1.add("qrs", "a") << endl;
  cout << mvm1 << endl;
  result_key = mvm1.find_value("a");
  cout << "result_key " <<  result_key << endl;
  cout << mvm1.remove_key("bcd") << endl;
  cout << mvm1 << endl;
  result_key = mvm1.remove_value("a");
  cout << "result_key " <<  result_key << endl;
  cout << mvm1 << endl;
}
