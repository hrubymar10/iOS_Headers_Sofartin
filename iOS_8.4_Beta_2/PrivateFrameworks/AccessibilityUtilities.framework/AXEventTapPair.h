/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventTapPair : NSObject {
    struct __IOHIDEventSystemClient { } *_systemClient;
    int _type;
    id handler;
    NSString *identifier;
    int priority;
}

@property(assign,copy) id handler;
@property(assign,copy) NSString * identifier;
@property(assign,readwrite) int priority;
@property(assign,retain) struct __IOHIDEventSystemClient { }* systemClient;
@property(assign,readwrite) int type;

- (void)dealloc;
- (id)description;
- (id)handler;
- (id)identifier;
- (int)priority;
- (void)setHandler:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setType:(int)arg1;
- (struct __IOHIDEventSystemClient { }*)systemClient;
- (int)type;

@end
