// ORDER STATISTIC TREE *****************************************************************

// find_by_order: returns an iterator to the k-th largest element (counting from zero)
//   -> O(logn)
// order_of_key: the number of items in the set that are strictly smaller
//   -> O(logn)
// insert: insert an element into the set
//   -> O(logn)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

//Alias for order statistic tree, optional functor template argument for comparison
template<class T,class C=less_equal<>>
using ordered_set = tree<T,null_type,C,rb_tree_tag,tree_order_statistics_node_update>;

// **************************************************************************************
