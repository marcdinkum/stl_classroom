/*
 STL Vector example

 A list of artists that can be sorted by name
*/

#include <iostream>
#include <vector>

int main()
{
std::vector<std::string> artists;

  std::cout << "Vector contains " << artists.size()
    << " elements" << std::endl;

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



  return 0;
} // main()
