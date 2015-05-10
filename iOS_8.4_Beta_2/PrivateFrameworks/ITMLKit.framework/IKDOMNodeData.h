/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNodeData : NSObject {
    bool _childrenUpdated;
    NSMutableDictionary *_featuresMap;
    IKDOMNode *_ownerJSNode;
    IKViewElementStyleComposer *_styleComposer;
    bool _subtreeUpdated;
    bool _updated;
}

@property(getter=isChildrenUpdated,assign,readwrite) bool childrenUpdated;
@property(assign,retain) NSMutableDictionary * featuresMap;
@property(assign,readwrite) IKDOMNode * ownerJSNode;
@property(assign,retain) IKViewElementStyleComposer * styleComposer;
@property(getter=isSubtreeUpdated,assign,readwrite) bool subtreeUpdated;
@property(getter=isUpdated,assign,readwrite) bool updated;

+ (id)jsNodeDataForNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 create:(bool)arg2;

- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (id)featuresMap;
- (bool)isChildrenUpdated;
- (bool)isSubtreeUpdated;
- (bool)isUpdated;
- (id)ownerJSNode;
- (void)setChildrenUpdated:(bool)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;
- (void)setFeaturesMap:(id)arg1;
- (void)setOwnerJSNode:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (void)setSubtreeUpdated:(bool)arg1;
- (void)setUpdated:(bool)arg1;
- (id)styleComposer;

@end
