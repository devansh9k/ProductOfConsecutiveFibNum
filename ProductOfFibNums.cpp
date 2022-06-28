#include <vector>
typedef unsigned long long ull;

class ProdFib
{
public:
   static std::vector<ull> productFib(ull prod)
   {

      ull p = 0;    // first element
      ull c = 1;    // second element
      ull next = 0; // p*c

      while (p * c < prod) // while prod is greater than f(n)*f(n+1)
      {
         next = p + c; // fibonacci formula

         p = c; // shifting elements
         c = next;
      }

      return {p, c, (p * c == prod)}; // return array with { f(n), f(n+1) , true/false}
   }
};