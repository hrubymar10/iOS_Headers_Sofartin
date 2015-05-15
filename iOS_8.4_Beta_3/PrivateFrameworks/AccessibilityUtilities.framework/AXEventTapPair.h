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

@property (nonatomic, copy) id handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic, retain) struct __IOHIDEventSystemClient { }*systemClient;
@property (nonatomic) int type;

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
