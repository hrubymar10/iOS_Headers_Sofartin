/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXRemoteElement : NSObject {
    id _accessibilityContainer;
    NSMutableSet *_allChildren;
    unsigned int _contextId;
    bool _deniesDirectAppConnection;
    unsigned int _machPort;
    bool _onClientSide;
    <AXRemoteElementChildrenDelegate> *_remoteChildrenDelegate;
    int _remotePid;
    NSString *_uuid;
}

@property (nonatomic) id accessibilityContainer;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) bool deniesDirectAppConnection;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) bool onClientSide;
@property (nonatomic) <AXRemoteElementChildrenDelegate> *remoteChildrenDelegate;
@property (nonatomic) int remotePid;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long uuidHash;

+ (void)initialize;
+ (bool)registerRemoteElement:(id)arg1;
+ (id)remoteElementForBlock:(id)arg1;
+ (id)remoteElementForContextId:(unsigned int)arg1;

- (void)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(id)arg3;
- (id)_accessibilityFirstElement;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (bool)_accessibilityIsRemoteElement;
- (id)_accessibilityLastElement;
- (id)_accessibilityResponderElement;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_remoteElementWithAttribute:(int)arg1;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (id)accessibilityContainer;
- (id)accessibilityContainerElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (bool)accessibilityViewIsModal;
- (unsigned int)contextId;
- (void)dealloc;
- (bool)deniesDirectAppConnection;
- (id)description;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (unsigned int)machPort;
- (bool)onClientSide;
- (void)platformCleanup;
- (void)platformCleanup;
- (id)remoteChildrenDelegate;
- (int)remotePid;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setDeniesDirectAppConnection:(bool)arg1;
- (void)setMachPort:(unsigned int)arg1;
- (void)setOnClientSide:(bool)arg1;
- (void)setRemoteChildrenDelegate:(id)arg1;
- (void)setRemotePid:(int)arg1;
- (void)setUuid:(id)arg1;
- (void)unregister;
- (id)uuid;
- (unsigned long long)uuidHash;

@end
