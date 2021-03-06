// REAL MOD FUNCTION ********************************************************************

// mod: returns the value of x mod m, works for negative numbers as well
//   -> O(1)

template<class T>
T mod(int x,int m){return (x%m+m)%m;}

// **************************************************************************************
