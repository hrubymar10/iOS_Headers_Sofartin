/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {
    NSArray *_nodes;
    long long _type;
}

@property(assign,readonly) bool booleanValue;
@property(assign,readonly) bool invalidIteratorState;
@property(assign,copy) NSArray * nodes;
@property(assign,readonly) long long numberValue;
@property(assign,readonly) long long resultType;
@property(assign,readonly) IKDOMNode * singleNodeValue;
@property(assign,readonly) long long snapshotLength;
@property(assign,readonly) NSString * stringValue;
@property(assign,readwrite) long long type;

- (void).cxx_destruct;
- (bool)booleanValue;
- (id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3;
- (bool)invalidIteratorState;
- (id)iterateNext;
- (id)nodes;
- (long long)numberValue;
- (long long)resultType;
- (void)setNodes:(id)arg1;
- (void)setType:(long long)arg1;
- (id)singleNodeValue;
- (id)snapshotItem:(long long)arg1;
- (long long)snapshotLength;
- (id)stringValue;
- (long long)type;

@end
