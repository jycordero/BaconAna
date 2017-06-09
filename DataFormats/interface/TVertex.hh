#ifndef BACONANA_DATAFORMATS_TVERTEX_HH
#define BACONANA_DATAFORMATS_TVERTEX_HH

#include <TObject.h>

namespace baconhep
{
  class TVertex : public TObject
  {
    public:
      TVertex():
      index1(0), index2(0),
      nTracksFit(0),
      ndof(0), chi2(0),
      x(0), y(0), z(0),
      xerr(0), yerr(0), zerr(0),
      isValid(true)
      {}
      ~TVertex(){}
      
      unsigned int index1, index2;
      unsigned int nTracksFit;  // number of tracks in vertex fit
      float        ndof;        // vertex fit number of degrees of freedom
      float        chi2;        // vertex fit chi-square
      float        x,y,z;       // position
      float        xerr,yerr,zerr; // position error
      bool         isValid;     // valid vertex flag

    ClassDef(TVertex,1)
  };
}
#endif
