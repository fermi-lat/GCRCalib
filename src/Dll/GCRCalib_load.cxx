//  $Header: /nfs/slac/g/glast/ground/cvs/CalXtalResponse/src/Dll/CalXtalResponse_load.cxx,v 1.8 2006/04/26 20:23:55 fewtrell Exp $
/** 
 * @file
 * @author Zach Fewtrell
 * @brief This is needed for forcing the linker to load all components
 * of the library.
 *
 */

#include "GaudiKernel/DeclareFactoryEntries.h"
#include "GaudiKernel/IToolFactory.h"

#define DLL_DECL_TOOL(x)       extern const IToolFactory& x##Factory; x##Factory.addRef();

#define DLL_DECL_TOOL(x)       extern const IToolFactory& x##Factory; x##Factory.addRef();

DECLARE_FACTORY_ENTRIES(GCRCalib) {
  
 /* DECLARE_SERVICE( CalCalibSvc );*/
  
  DECLARE_ALGORITHM( GcrReconAlg );
  DECLARE_ALGORITHM( GcrSelectAlg );
  
  DECLARE_TOOL(      GcrReconTool       );
  DECLARE_TOOL(      GcrSelectTool       );

} 
