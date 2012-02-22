// Auto generated file, don't modify.

#ifndef __META_B2MOUSEJOINT_H
#define __META_B2MOUSEJOINT_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gnamereplacer.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"


namespace meta_box2d { 


template <typename D, typename Policy>
void buildMetaClass_B2MouseJoint(const cpgf::GMetaDataConfigFlags & config, D _d, const cpgf::GMetaDataNameReplacer * _r, const Policy & _p)
{
    (void)config; (void)_d; (void)_r; (void)_d; (void)_p;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetAnchorA", _r), &D::ClassType::GetAnchorA, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetAnchorB", _r), &D::ClassType::GetAnchorB, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetReactionForce", _r), &D::ClassType::GetReactionForce, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetReactionTorque", _r), &D::ClassType::GetReactionTorque, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetTarget", _r), &D::ClassType::SetTarget, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetTarget", _r), &D::ClassType::GetTarget, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetMaxForce", _r), &D::ClassType::SetMaxForce, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetMaxForce", _r), &D::ClassType::GetMaxForce, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetFrequency", _r), &D::ClassType::SetFrequency, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetFrequency", _r), &D::ClassType::GetFrequency, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetDampingRatio", _r), &D::ClassType::SetDampingRatio, _p);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetDampingRatio", _r), &D::ClassType::GetDampingRatio, _p);
}


template <typename D, typename Policy>
void buildMetaClass_B2MouseJointDef(const cpgf::GMetaDataConfigFlags & config, D _d, const cpgf::GMetaDataNameReplacer * _r, const Policy & _p)
{
    (void)config; (void)_d; (void)_r; (void)_d; (void)_p;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>(_p);
    _d.CPGF_MD_TEMPLATE _field(replaceName("target", _r), &D::ClassType::target, _p);
    _d.CPGF_MD_TEMPLATE _field(replaceName("maxForce", _r), &D::ClassType::maxForce, _p);
    _d.CPGF_MD_TEMPLATE _field(replaceName("frequencyHz", _r), &D::ClassType::frequencyHz, _p);
    _d.CPGF_MD_TEMPLATE _field(replaceName("dampingRatio", _r), &D::ClassType::dampingRatio, _p);
}


} // namespace meta_box2d 




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif