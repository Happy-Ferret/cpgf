/*@@cpgf@@*/
// Auto generated file, don't modify.

/*@cpgf@creations@@
createMetaClass_metagen_BuilderField
@@cpgf@creations@*/

#ifndef METADATA_META_BUILDERFIELD_H
#define METADATA_META_BUILDERFIELD_H

#include "buildermodel/builderfield.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/gselectFunctionByArity.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"

namespace metadata {

template <typename TsE1f>
metagen::BuilderField &oPeRat0rWrapPer_metagen_BuilderField_opAssign_0(TsE1f * sE1F, const metagen::BuilderField &pAr9_Am0)
{
    return (*sE1F) = pAr9_Am0;
}

template <typename D_d >
void buildMetaClass_metagen_BuilderField(D_d & _d)
{
    using namespace cpgf;
    
    (void)_d;
    
    _d.CPGF_MD_TEMPLATE _base<metagen::BuilderItem >();

    _d.CPGF_MD_TEMPLATE _constructor<void * (const metagen::CppItem *)>();

    _d.CPGF_MD_TEMPLATE _method("getCppField", &typename D_d::ClassType::getCppField);

    _d.CPGF_MD_TEMPLATE _operator<metagen::BuilderField &(*)(cpgf::GMetaSelf, const metagen::BuilderField &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", &oPeRat0rWrapPer_metagen_BuilderField_opAssign_0<typename D_d::ClassType >);

}

cpgf::GDefineMetaInfo createMetaClass_metagen_BuilderField();

} // namespace metadata
#include "cpgf/metadata/private/gmetadata_footer.h"

#endif