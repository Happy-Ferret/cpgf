// Auto generated file, don't modify.

#ifndef __META_BOX2D_B2DISTANCEJOINT_H
#define __META_BOX2D_B2DISTANCEJOINT_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gnamereplacer.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_box2d { 


template <typename D>
void buildMetaClass_B2DistanceJoint(const cpgf::GMetaDataConfigFlags & config, D _d, const cpgf::GMetaDataNameReplacer * _r)
{
    (void)config; (void)_d; (void)_r; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetAnchorA", _r), &D::ClassType::GetAnchorA);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetAnchorB", _r), &D::ClassType::GetAnchorB);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetReactionForce", _r), &D::ClassType::GetReactionForce);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetReactionTorque", _r), &D::ClassType::GetReactionTorque);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetLength", _r), &D::ClassType::SetLength);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetLength", _r), &D::ClassType::GetLength);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetFrequency", _r), &D::ClassType::SetFrequency);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetFrequency", _r), &D::ClassType::GetFrequency);
    _d.CPGF_MD_TEMPLATE _method(replaceName("SetDampingRatio", _r), &D::ClassType::SetDampingRatio);
    _d.CPGF_MD_TEMPLATE _method(replaceName("GetDampingRatio", _r), &D::ClassType::GetDampingRatio);
}


template <typename D>
void buildMetaClass_B2DistanceJointDef(const cpgf::GMetaDataConfigFlags & config, D _d, const cpgf::GMetaDataNameReplacer * _r)
{
    (void)config; (void)_d; (void)_r; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field(replaceName("localAnchorA", _r), &D::ClassType::localAnchorA);
    _d.CPGF_MD_TEMPLATE _field(replaceName("localAnchorB", _r), &D::ClassType::localAnchorB);
    _d.CPGF_MD_TEMPLATE _field(replaceName("length", _r), &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _field(replaceName("frequencyHz", _r), &D::ClassType::frequencyHz);
    _d.CPGF_MD_TEMPLATE _field(replaceName("dampingRatio", _r), &D::ClassType::dampingRatio);
    _d.CPGF_MD_TEMPLATE _method(replaceName("Initialize", _r), &D::ClassType::Initialize);
}


} // namespace meta_box2d




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
