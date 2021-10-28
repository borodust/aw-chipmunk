/* Generated by :claw at 2021-10-28T15:49:41.752446Z */

#if defined(__cplusplus)
#include <new>
#endif

#define CP_USE_DOUBLES 0
#define CP_USE_CGTYPES 0

#include "chipmunk/chipmunk.h"

#if !defined(__CLAW_API)
#  if defined(_WIN32)
#    define __CLAW_API __declspec(dllexport)
#  elif defined(__GNUC__)
#    define __CLAW_API __attribute__((visibility("default")))
#  else
#    define __CLAW_API
#  endif
#endif

#if defined(__cplusplus)
extern "C" {
#endif


__CLAW_API cpShapeFilter* __claw_cpShapeGetFilter(cpShapeFilter* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:157:25
(*__claw_result_) = cpShapeGetFilter(shape);
return __claw_result_;
}

__CLAW_API cpShape* __claw_cpSpaceSegmentQueryFirst(cpSpace* space, cpVect* start, cpVect* end, cpFloat radius, cpShapeFilter* filter, cpSegmentQueryInfo* out) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:207:20
return cpSpaceSegmentQueryFirst(space, *start, *end, radius, *filter, out);
}

__CLAW_API cpVect* __claw_cpArbiterTotalImpulse(cpVect* __claw_result_, const cpArbiter* arb) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:55:18
(*__claw_result_) = cpArbiterTotalImpulse(arb);
return __claw_result_;
}

__CLAW_API cpFloat __claw_cpMomentForPoly(cpFloat m, int count, const cpVect* verts, cpVect* offset, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/chipmunk.h:152:19
return cpMomentForPoly(m, count, verts, *offset, radius);
}

__CLAW_API void __claw_cpBodyUpdateVelocity(cpBody* body, cpVect* gravity, cpFloat damping, cpFloat dt) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:147:16
cpBodyUpdateVelocity(body, *gravity, damping, dt);
}

__CLAW_API cpShape* __claw_cpBoxShapeNew2(cpBody* body, cpBB* box, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPolyShape.h:47:20
return cpBoxShapeNew2(body, *box, radius);
}

__CLAW_API cpSlideJoint* __claw_cpSlideJointInit(cpSlideJoint* joint, cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB, cpFloat min, cpFloat max) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSlideJoint.h:31:25
return cpSlideJointInit(joint, a, b, *anchorA, *anchorB, min, max);
}

__CLAW_API cpVect* __claw_cpArbiterGetSurfaceVelocity(cpVect* __claw_result_, cpArbiter* arb) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:41:18
(*__claw_result_) = cpArbiterGetSurfaceVelocity(arb);
return __claw_result_;
}

__CLAW_API void __claw_cpGrooveJointSetAnchorB(cpConstraint* constraint, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:48:16
cpGrooveJointSetAnchorB(constraint, *anchorB);
}

__CLAW_API void __claw_cpBodySetCenterOfGravity(cpBody* body, cpVect* cog) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:105:16
cpBodySetCenterOfGravity(body, *cog);
}

__CLAW_API cpFloat __claw_cpMomentForBox2(cpFloat m, cpBB* box) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/chipmunk.h:165:19
return cpMomentForBox2(m, *box);
}

__CLAW_API void __claw_cpShapeSetFilter(cpShape* shape, cpShapeFilter* filter) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:159:16
cpShapeSetFilter(shape, *filter);
}

__CLAW_API cpContactPointSet* __claw_cpArbiterGetContactPointSet(cpContactPointSet* __claw_result_, const cpArbiter* arb) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:99:29
(*__claw_result_) = cpArbiterGetContactPointSet(arb);
return __claw_result_;
}

__CLAW_API cpConstraint* __claw_cpSlideJointNew(cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB, cpFloat min, cpFloat max) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSlideJoint.h:33:25
return cpSlideJointNew(a, b, *anchorA, *anchorB, min, max);
}

__CLAW_API cpVect* __claw_cpArbiterGetNormal(cpVect* __claw_result_, const cpArbiter* arb) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:113:18
(*__claw_result_) = cpArbiterGetNormal(arb);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyGetRotation(cpVect* __claw_result_, const cpBody* body) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:133:18
(*__claw_result_) = cpBodyGetRotation(body);
return __claw_result_;
}

__CLAW_API cpPolyShape* __claw_cpPolyShapeInit(cpPolyShape* poly, cpBody* body, int count, const cpVect* verts, cpTransform* transform, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPolyShape.h:29:24
return cpPolyShapeInit(poly, body, count, verts, *transform, radius);
}

__CLAW_API cpVect* __claw_cpSegmentShapeGetA(cpVect* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:191:18
(*__claw_result_) = cpSegmentShapeGetA(shape);
return __claw_result_;
}

__CLAW_API cpGrooveJoint* __claw_cpGrooveJointInit(cpGrooveJoint* joint, cpBody* a, cpBody* b, cpVect* groove_a, cpVect* groove_b, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:31:26
return cpGrooveJointInit(joint, a, b, *groove_a, *groove_b, *anchorB);
}

__CLAW_API cpConstraint* __claw_cpPivotJointNew(cpBody* a, cpBody* b, cpVect* pivot) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:33:25
return cpPivotJointNew(a, b, *pivot);
}

__CLAW_API cpVect* __claw_cpPinJointGetAnchorA(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPinJoint.h:36:18
(*__claw_result_) = cpPinJointGetAnchorA(constraint);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpSegmentShapeGetB(cpVect* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:193:18
(*__claw_result_) = cpSegmentShapeGetB(shape);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyGetVelocityAtWorldPoint(cpVect* __claw_result_, const cpBody* body, cpVect* point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:167:18
(*__claw_result_) = cpBodyGetVelocityAtWorldPoint(body, *point);
return __claw_result_;
}

__CLAW_API void __claw_cpPinJointSetAnchorA(cpConstraint* constraint, cpVect* anchorA) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPinJoint.h:38:16
cpPinJointSetAnchorA(constraint, *anchorA);
}

__CLAW_API cpShape* __claw_cpPolyShapeNew(cpBody* body, int count, const cpVect* verts, cpTransform* transform, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPolyShape.h:35:20
return cpPolyShapeNew(body, count, verts, *transform, radius);
}

__CLAW_API cpVect* __claw_cpPolyShapeGetVert(cpVect* __claw_result_, const cpShape* shape, int index) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPolyShape.h:52:18
(*__claw_result_) = cpPolyShapeGetVert(shape, index);
return __claw_result_;
}

__CLAW_API void __claw_cpSpaceBBQuery(cpSpace* space, cpBB* bb, cpShapeFilter* filter, cpSpaceBBQueryFunc func, void* data) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:213:16
cpSpaceBBQuery(space, *bb, *filter, func, data);
}

__CLAW_API cpShape* __claw_cpCircleShapeNew(cpBody* body, cpFloat radius, cpVect* offset) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:170:20
return cpCircleShapeNew(body, radius, *offset);
}

__CLAW_API cpConstraint* __claw_cpPivotJointNew2(cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:35:25
return cpPivotJointNew2(a, b, *anchorA, *anchorB);
}

__CLAW_API cpFloat __claw_cpAreaForSegment(cpVect* a, cpVect* b, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/chipmunk.h:149:19
return cpAreaForSegment(*a, *b, radius);
}

__CLAW_API void __claw_cpSlideJointSetAnchorB(cpConstraint* constraint, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSlideJoint.h:43:16
cpSlideJointSetAnchorB(constraint, *anchorB);
}

__CLAW_API void __claw_cpSlideJointSetAnchorA(cpConstraint* constraint, cpVect* anchorA) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSlideJoint.h:38:16
cpSlideJointSetAnchorA(constraint, *anchorA);
}

__CLAW_API cpVect* __claw_cpPinJointGetAnchorB(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPinJoint.h:41:18
(*__claw_result_) = cpPinJointGetAnchorB(constraint);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyWorldToLocal(cpVect* __claw_result_, const cpBody* body, cpVect* const point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:154:18
(*__claw_result_) = cpBodyWorldToLocal(body, *point);
return __claw_result_;
}

__CLAW_API cpContactPointSet* __claw_cpShapesCollide(cpContactPointSet* __claw_result_, const cpShape* a, const cpShape* b) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:95:29
(*__claw_result_) = cpShapesCollide(a, b);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpCentroidForPoly(cpVect* __claw_result_, const int count, const cpVect* verts) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/chipmunk.h:159:18
(*__claw_result_) = cpCentroidForPoly(count, verts);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpArbiterGetPointB(cpVect* __claw_result_, const cpArbiter* arb, int i) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:117:18
(*__claw_result_) = cpArbiterGetPointB(arb, i);
return __claw_result_;
}

__CLAW_API void __claw_cpSpacePointQuery(cpSpace* space, cpVect* point, cpFloat maxDistance, cpShapeFilter* filter, cpSpacePointQueryFunc func, void* data) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:198:16
cpSpacePointQuery(space, *point, maxDistance, *filter, func, data);
}

__CLAW_API cpVect* __claw_cpSlideJointGetAnchorB(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSlideJoint.h:41:18
(*__claw_result_) = cpSlideJointGetAnchorB(constraint);
return __claw_result_;
}

__CLAW_API cpShape* __claw_cpSegmentShapeNew(cpBody* body, cpVect* a, cpVect* b, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:185:20
return cpSegmentShapeNew(body, *a, *b, radius);
}

__CLAW_API cpVect* __claw_cpShapeGetCenterOfGravity(cpVect* __claw_result_, cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:121:18
(*__claw_result_) = cpShapeGetCenterOfGravity(shape);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpSlideJointGetAnchorA(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSlideJoint.h:36:18
(*__claw_result_) = cpSlideJointGetAnchorA(constraint);
return __claw_result_;
}

__CLAW_API cpConstraint* __claw_cpDampedSpringNew(cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB, cpFloat restLength, cpFloat stiffness, cpFloat damping) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpDampedSpring.h:36:25
return cpDampedSpringNew(a, b, *anchorA, *anchorB, restLength, stiffness, damping);
}

__CLAW_API cpPivotJoint* __claw_cpPivotJointInit(cpPivotJoint* joint, cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:31:25
return cpPivotJointInit(joint, a, b, *anchorA, *anchorB);
}

__CLAW_API void __claw_cpShapeSetSurfaceVelocity(cpShape* shape, cpVect* surfaceVelocity) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:144:16
cpShapeSetSurfaceVelocity(shape, *surfaceVelocity);
}

__CLAW_API void __claw_cpBodySetPosition(cpBody* body, cpVect* pos) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:100:16
cpBodySetPosition(body, *pos);
}

__CLAW_API cpFloat __claw_cpMomentForSegment(cpFloat m, cpVect* a, cpVect* b, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/chipmunk.h:146:19
return cpMomentForSegment(m, *a, *b, radius);
}

__CLAW_API cpConstraint* __claw_cpGrooveJointNew(cpBody* a, cpBody* b, cpVect* groove_a, cpVect* groove_b, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:33:25
return cpGrooveJointNew(a, b, *groove_a, *groove_b, *anchorB);
}

__CLAW_API cpBB* __claw_cpShapeGetBB(cpBB* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:124:16
(*__claw_result_) = cpShapeGetBB(shape);
return __claw_result_;
}

__CLAW_API void __claw_cpPinJointSetAnchorB(cpConstraint* constraint, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPinJoint.h:43:16
cpPinJointSetAnchorB(constraint, *anchorB);
}

__CLAW_API void __claw_cpArbiterSetSurfaceVelocity(cpArbiter* arb, cpVect* vr) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:45:16
cpArbiterSetSurfaceVelocity(arb, *vr);
}

__CLAW_API cpCircleShape* __claw_cpCircleShapeInit(cpCircleShape* circle, cpBody* body, cpFloat radius, cpVect* offset) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:168:26
return cpCircleShapeInit(circle, body, radius, *offset);
}

__CLAW_API void __claw_cpSpaceSegmentQuery(cpSpace* space, cpVect* start, cpVect* end, cpFloat radius, cpShapeFilter* filter, cpSpaceSegmentQueryFunc func, void* data) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:205:16
cpSpaceSegmentQuery(space, *start, *end, radius, *filter, func, data);
}

__CLAW_API cpVect* __claw_cpBodyGetCenterOfGravity(cpVect* __claw_result_, const cpBody* body) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:103:18
(*__claw_result_) = cpBodyGetCenterOfGravity(body);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyGetVelocity(cpVect* __claw_result_, const cpBody* body) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:108:18
(*__claw_result_) = cpBodyGetVelocity(body);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpArbiterGetPointA(cpVect* __claw_result_, const cpArbiter* arb, int i) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpArbiter.h:115:18
(*__claw_result_) = cpArbiterGetPointA(arb, i);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyGetPosition(cpVect* __claw_result_, const cpBody* body) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:98:18
(*__claw_result_) = cpBodyGetPosition(body);
return __claw_result_;
}

__CLAW_API cpBB* __claw_cpShapeUpdate(cpBB* __claw_result_, cpShape* shape, cpTransform* transform) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:85:16
(*__claw_result_) = cpShapeUpdate(shape, *transform);
return __claw_result_;
}

__CLAW_API void __claw_cpBodySetVelocity(cpBody* body, cpVect* velocity) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:110:16
cpBodySetVelocity(body, *velocity);
}

__CLAW_API cpSegmentShape* __claw_cpSegmentShapeInit(cpSegmentShape* seg, cpBody* body, cpVect* a, cpVect* b, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:183:27
return cpSegmentShapeInit(seg, body, *a, *b, radius);
}

__CLAW_API cpVect* __claw_cpBodyGetForce(cpVect* __claw_result_, const cpBody* body) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:113:18
(*__claw_result_) = cpBodyGetForce(body);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyLocalToWorld(cpVect* __claw_result_, const cpBody* body, cpVect* const point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:152:18
(*__claw_result_) = cpBodyLocalToWorld(body, *point);
return __claw_result_;
}

__CLAW_API cpPolyShape* __claw_cpBoxShapeInit2(cpPolyShape* poly, cpBody* body, cpBB* box, cpFloat radius) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPolyShape.h:43:24
return cpBoxShapeInit2(poly, body, *box, radius);
}

__CLAW_API cpFloat __claw_cpMomentForCircle(cpFloat m, cpFloat r1, cpFloat r2, cpVect* offset) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/chipmunk.h:138:19
return cpMomentForCircle(m, r1, r2, *offset);
}

__CLAW_API void __claw_cpGrooveJointSetGrooveB(cpConstraint* constraint, cpVect* grooveB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:43:16
cpGrooveJointSetGrooveB(constraint, *grooveB);
}

__CLAW_API void __claw_cpBodySetForce(cpBody* body, cpVect* force) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:115:16
cpBodySetForce(body, *force);
}

__CLAW_API void __claw_cpBodyApplyForceAtLocalPoint(cpBody* body, cpVect* force, cpVect* point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:159:16
cpBodyApplyForceAtLocalPoint(body, *force, *point);
}

__CLAW_API void __claw_cpGrooveJointSetGrooveA(cpConstraint* constraint, cpVect* grooveA) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:38:16
cpGrooveJointSetGrooveA(constraint, *grooveA);
}

__CLAW_API cpVect* __claw_cpPivotJointGetAnchorB(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:43:18
(*__claw_result_) = cpPivotJointGetAnchorB(constraint);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpPivotJointGetAnchorA(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:38:18
(*__claw_result_) = cpPivotJointGetAnchorA(constraint);
return __claw_result_;
}

__CLAW_API cpBB* __claw_cpShapeCacheBB(cpBB* __claw_result_, cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:83:16
(*__claw_result_) = cpShapeCacheBB(shape);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpDampedSpringGetAnchorA(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpDampedSpring.h:39:18
(*__claw_result_) = cpDampedSpringGetAnchorA(constraint);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpDampedSpringGetAnchorB(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpDampedSpring.h:44:18
(*__claw_result_) = cpDampedSpringGetAnchorB(constraint);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpSegmentShapeGetNormal(cpVect* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:195:18
(*__claw_result_) = cpSegmentShapeGetNormal(shape);
return __claw_result_;
}

__CLAW_API cpBool __claw_cpShapeSegmentQuery(const cpShape* shape, cpVect* a, cpVect* b, cpFloat radius, cpSegmentQueryInfo* info) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:92:18
return cpShapeSegmentQuery(shape, *a, *b, radius, info);
}

__CLAW_API cpVect* __claw_cpCircleShapeGetOffset(cpVect* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:173:18
(*__claw_result_) = cpCircleShapeGetOffset(shape);
return __claw_result_;
}

__CLAW_API cpFloat __claw_cpShapePointQuery(const cpShape* shape, cpVect* p, cpPointQueryInfo* out) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:89:19
return cpShapePointQuery(shape, *p, out);
}

__CLAW_API cpShape* __claw_cpSpacePointQueryNearest(cpSpace* space, cpVect* point, cpFloat maxDistance, cpShapeFilter* filter, cpPointQueryInfo* out) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:200:20
return cpSpacePointQueryNearest(space, *point, maxDistance, *filter, out);
}

__CLAW_API void __claw_cpPivotJointSetAnchorB(cpConstraint* constraint, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:45:16
cpPivotJointSetAnchorB(constraint, *anchorB);
}

__CLAW_API void __claw_cpPivotJointSetAnchorA(cpConstraint* constraint, cpVect* anchorA) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPivotJoint.h:40:16
cpPivotJointSetAnchorA(constraint, *anchorA);
}

__CLAW_API void __claw_cpDampedSpringSetAnchorA(cpConstraint* constraint, cpVect* anchorA) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpDampedSpring.h:41:16
cpDampedSpringSetAnchorA(constraint, *anchorA);
}

__CLAW_API void __claw_cpDampedSpringSetAnchorB(cpConstraint* constraint, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpDampedSpring.h:46:16
cpDampedSpringSetAnchorB(constraint, *anchorB);
}

__CLAW_API cpVect* __claw_cpGrooveJointGetGrooveB(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:41:18
(*__claw_result_) = cpGrooveJointGetGrooveB(constraint);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpBodyGetVelocityAtLocalPoint(cpVect* __claw_result_, const cpBody* body, cpVect* point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:169:18
(*__claw_result_) = cpBodyGetVelocityAtLocalPoint(body, *point);
return __claw_result_;
}

__CLAW_API cpVect* __claw_cpGrooveJointGetGrooveA(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:36:18
(*__claw_result_) = cpGrooveJointGetGrooveA(constraint);
return __claw_result_;
}

__CLAW_API cpPinJoint* __claw_cpPinJointInit(cpPinJoint* joint, cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPinJoint.h:31:23
return cpPinJointInit(joint, a, b, *anchorA, *anchorB);
}

__CLAW_API cpVect* __claw_cpSpaceGetGravity(cpVect* __claw_result_, const cpSpace* space) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:87:18
(*__claw_result_) = cpSpaceGetGravity(space);
return __claw_result_;
}

__CLAW_API cpConstraint* __claw_cpPinJointNew(cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpPinJoint.h:33:25
return cpPinJointNew(a, b, *anchorA, *anchorB);
}

__CLAW_API cpDampedSpring* __claw_cpDampedSpringInit(cpDampedSpring* joint, cpBody* a, cpBody* b, cpVect* anchorA, cpVect* anchorB, cpFloat restLength, cpFloat stiffness, cpFloat damping) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpDampedSpring.h:34:27
return cpDampedSpringInit(joint, a, b, *anchorA, *anchorB, restLength, stiffness, damping);
}

__CLAW_API void __claw_cpSegmentShapeSetNeighbors(cpShape* shape, cpVect* prev, cpVect* next) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:188:16
cpSegmentShapeSetNeighbors(shape, *prev, *next);
}

__CLAW_API cpVect* __claw_cpGrooveJointGetAnchorB(cpVect* __claw_result_, const cpConstraint* constraint) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpGrooveJoint.h:46:18
(*__claw_result_) = cpGrooveJointGetAnchorB(constraint);
return __claw_result_;
}

__CLAW_API void __claw_cpSpaceSetGravity(cpSpace* space, cpVect* gravity) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpSpace.h:88:16
cpSpaceSetGravity(space, *gravity);
}

__CLAW_API void __claw_cpBodyApplyImpulseAtWorldPoint(cpBody* body, cpVect* impulse, cpVect* point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:162:16
cpBodyApplyImpulseAtWorldPoint(body, *impulse, *point);
}

__CLAW_API cpVect* __claw_cpShapeGetSurfaceVelocity(cpVect* __claw_result_, const cpShape* shape) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpShape.h:142:18
(*__claw_result_) = cpShapeGetSurfaceVelocity(shape);
return __claw_result_;
}

__CLAW_API void __claw_cpBodyApplyForceAtWorldPoint(cpBody* body, cpVect* force, cpVect* point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:157:16
cpBodyApplyForceAtWorldPoint(body, *force, *point);
}

__CLAW_API void __claw_cpBodyApplyImpulseAtLocalPoint(cpBody* body, cpVect* impulse, cpVect* point) {
// /home/borodust/devel/repo/aw-projects/aw-chipmunk/src/lib/chipmunk/include/chipmunk/cpBody.h:164:16
cpBodyApplyImpulseAtLocalPoint(body, *impulse, *point);
}

#if defined(__cplusplus)
}
#endif
