//  $Header: /nfs/slac/g/glast/ground/cvs/GCRCalib/src/Dll/GCRCalib_load.cxx,v 1.1.1.1 2006/11/13 09:59:38 claval Exp $
/** 
 * @file
 * @author Zach Fewtrell
 * @brief This is needed for forcing the linker to load all components
 * of the library.
 *
 */

#include "GaudiKernel/DeclareFactoryEntries.h"
//#include "GaudiKernel/IToolFactory.h"

//#define DLL_DECL_TOOL(x)       extern const IToolFactory& x##Factory; x##Factory.addRef();

//#define DLL_DECL_TOOL(x)       extern const IToolFactory& x##Factory; x##Factory.addRef();

DECLARE_FACTORY_ENTRIES(GCRCalib) {
  
 /* DECLARE_SERVICE( CalCalibSvc );*/
  
  DECLARE_ALGORITHM( GcrReconAlg );
  DECLARE_ALGORITHM( GcrSelectAlg );
  
  DECLARE_TOOL(      GcrReconTool       );
  DECLARE_TOOL(      GcrSelectTool       );

} 
