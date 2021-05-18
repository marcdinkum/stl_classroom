/*
 STL Vector example

 A list of artists that can be sorted by name
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


int main()
{
std::vector<std::string> artists;
std::vector<std::string>::iterator index;

  std::cout << "Vector contains " << artists.size()
    << " elements" << std::endl;
  std::cout << "Vector capacity " << artists.capacity() << std::endl;

  // Loop until user types quit
  std::cout << "\n\nPlease enter artist names or quit to end and show a list of artists\n";
  std::string nextItem;
  do
  {
    std::cout << "Artist name: ";
    std::cin >> nextItem;
    if(nextItem == "quit") break;
    artists.push_back(nextItem);
    std::cout << "Vector capacity " << artists.capacity() << std::endl;
  } while(true);


  std::cout << "\n\nSummary of vector properties:\n";
  std::cout << "Vector contains " << artists.size() << " elements" << std::endl;
  std::cout << "Vector capacity " << artists.capacity() << std::endl;


  /* vector::end() returns an iterator referring to the past-the-end element
     which is the theoretical element that would follow the last element
     in the vector.
     It does not point to any element, and thus shall not be dereferenced.
  */
  std::cout << "\n\nContents of artist database:\n";
  index=artists.begin();
  while(index != artists.end()){
    std::cout << *index << std::endl;
    index++;
  } // while


  std::cout << std::endl;

  // Sort vector
  sort(artists.begin(),artists.end());

  // Show again
  std::cout << "Sorted database:\n";
  index=artists.begin();
  while(index != artists.end()){
    std::cout << *index << std::endl;
    index++;
  } // while

  std::cout << std::endl;

  return 0;
} // main()
