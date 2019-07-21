# DS&A - Hash Table (w/open hashing)
Example with a basic hash table data structure and also an example using open hashing as a collision resolution technique


# Time complexity of basic hash table 
Is O(n).  


# Time complexity of hash table with open hashing
This depends on if the distribution of the keys is sufficiently uniform.  In which case, the average cost of a lookup depends only on the average keys per linked-list.  Ideal case is O(1).  A rare case could be O(n) where all elements are inserted into the same linked-list.  If open hashing lookup is O(1) then the whole time complexity for the algorithm is O(n).  Worst case would be O(n^2)
