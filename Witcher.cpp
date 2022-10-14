#include "Witcher.h"
namespace exa {

  /*! query if one of the cmaeke options defined for the witcher library
    are set, and if so, check return their value */
  bool hasOption(std::string option, int *value)
  {
    if (option == "BASIS_METHOD") {
#ifdef BASIS_METHOD
      *value = BASIS_METHOD;
      return true;
#endif
    }
    else if (option == "ANALYTIC_GRADIENTS") {
#ifdef ANALYTIC_GRADIENTS
      *value = ANALYTIC_GRADIENTS;
      return true;
#endif
    }
    else if (option == "ALLOW_EMPTY_CELLS") {
#ifdef ALLOW_EMPTY_CELLS
      *value = ALLOW_EMPTY_CELLS;
      return true;
#endif
    }
    else if (option == "ENABLE_GRADIENT_SHADING") {
#ifdef ENABLE_GRADIENT_SHADING
      *value = ENABLE_GRADIENT_SHADING;
      return true;
#endif
    }
    else if (option == "FAST_CENTRAL_DIFFERENCES") {
#ifdef FAST_CENTRAL_DIFFERENCES
      *value = FAST_CENTRAL_DIFFERENCES;
      return true;
#endif
    }

    return false;
  }
  
} // ::exa

// vim: sw=2:expandtab:softtabstop=2:ts=2:cino=\:0g0t0

