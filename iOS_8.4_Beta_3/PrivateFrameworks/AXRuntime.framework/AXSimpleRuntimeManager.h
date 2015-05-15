/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXSimpleRuntimeManager : NSObject {
    id _applicationElementCallback;
    id _attributeCallback;
    id _clientObserverCallback;
    id _hitTestCallback;
    id _outgoingValuePreprocessor;
    id _parameterizedAttributeCallback;
    id _performActionCallback;
    id _setAttributeCallback;
    bool _systemWideServer;
}

@property(assign,copy) id applicationElementCallback;
@property(assign,copy) id attributeCallback;
@property(assign,copy) id clientObserverCallback;
@property(assign,copy) id hitTestCallback;
@property(assign,copy) id outgoingValuePreprocessor;
@property(assign,copy) id parameterizedAttributeCallback;
@property(assign,copy) id performActionCallback;
@property(assign,copy) id setAttributeCallback;
@property(assign,readwrite) bool systemWideServer;

+ (id)sharedManager;

- (id)applicationElementCallback;
- (id)attributeCallback;
- (id)clientObserverCallback;
- (id)hitTestCallback;
- (id)outgoingValuePreprocessor;
- (id)parameterizedAttributeCallback;
- (id)performActionCallback;
- (void)setApplicationElementCallback:(id)arg1;
- (id)setAttributeCallback;
- (void)setAttributeCallback:(id)arg1;
- (void)setClientObserverCallback:(id)arg1;
- (void)setHitTestCallback:(id)arg1;
- (void)setOutgoingValuePreprocessor:(id)arg1;
- (void)setParameterizedAttributeCallback:(id)arg1;
- (void)setPerformActionCallback:(id)arg1;
- (void)setSetAttributeCallback:(id)arg1;
- (void)setSystemWideServer:(bool)arg1;
- (void)start;
- (bool)systemWideServer;

@end