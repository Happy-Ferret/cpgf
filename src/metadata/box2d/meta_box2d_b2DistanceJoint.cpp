// Auto generated file, don't modify.

#include "Box2D/Box2D.h"
#include "Box2D/Dynamics/Joints/b2DistanceJoint.h"

#include "cpgf/metadata/box2d/meta_box2d_b2DistanceJoint.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_B2DistanceJoint()
{
    GDefineMetaClass<b2DistanceJoint, b2Joint> _d = GDefineMetaClass<b2DistanceJoint, b2Joint>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("b2DistanceJoint");
    buildMetaClass_B2DistanceJoint(0, _d, NULL);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2DistanceJointDef()
{
    GDefineMetaClass<b2DistanceJointDef, b2JointDef> _d = GDefineMetaClass<b2DistanceJointDef, b2JointDef>::declare("b2DistanceJointDef");
    buildMetaClass_B2DistanceJointDef(0, _d, NULL);
    return _d.getMetaInfo();
}


} // namespace meta_box2d


