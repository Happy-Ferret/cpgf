// Auto generated file, don't modify.

#ifndef __META_TEST_METAGEN_OPERATOR_OTHER_H
#define __META_TEST_METAGEN_OPERATOR_OTHER_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_test { 


inline MetagenOperatorOther opErAToRWrapper_MetagenOperatorOther__opComma(const MetagenOperatorOther * self, int n) {
    return (*self) , n;
}
inline int opErAToRWrapper_MetagenOperatorOther__opSubscript(const MetagenOperatorOther * self, int n) {
    return (*self)[n];
}
inline int opErAToRWrapper_MetagenOperatorOther__opSubscript(const MetagenOperatorOther * self, const std::string & s) {
    return (*self)[s];
}
inline int opErAToRWrapper_MetagenOperatorOther__opAddress(MetagenOperatorOther * self) {
    return &(*self);
}
inline int opErAToRWrapper_MetagenOperatorOther__opDerefer(MetagenOperatorOther * self) {
    return *(*self);
}
inline int opErAToRWrapper_MetagenOperatorOther__opFunction(const MetagenOperatorOther * self, const std::string & s, int n) {
    return (*self)(s, n);
}
inline int opErAToRWrapper_MetagenOperatorOther__opFunction(const MetagenOperatorOther * self, const cpgf::GMetaVariadicParam * params) {
    return (*self)(params);
}


template <typename D>
void buildMetaClass_MetagenOperatorOther(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _field("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorOther (*)(const cpgf::GMetaSelf &, int)>((mopHolder , mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opComma", (MetagenOperatorOther (*) (const MetagenOperatorOther *, int))&opErAToRWrapper_MetagenOperatorOther__opComma, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opSubscript", (int (*) (const MetagenOperatorOther *, int))&opErAToRWrapper_MetagenOperatorOther__opSubscript, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder[0], cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubscript", (int (*) (const MetagenOperatorOther *, const std::string &))&opErAToRWrapper_MetagenOperatorOther__opSubscript, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(cpgf::GMetaSelf)>(&mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddress", (int (*) (MetagenOperatorOther *))&opErAToRWrapper_MetagenOperatorOther__opAddress, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(cpgf::GMetaSelf)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (int (*) (MetagenOperatorOther *))&opErAToRWrapper_MetagenOperatorOther__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(const std::string &, int)>(mopHolder(mopHolder), cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (int (*) (const MetagenOperatorOther *, const std::string &, int))&opErAToRWrapper_MetagenOperatorOther__opFunction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaVariadicParam *)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (int (*) (const MetagenOperatorOther *, const cpgf::GMetaVariadicParam *))&opErAToRWrapper_MetagenOperatorOther__opFunction, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_test




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
