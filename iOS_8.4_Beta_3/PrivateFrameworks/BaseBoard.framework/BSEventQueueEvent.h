/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEventQueueEvent : NSObject {
    id _handler;
    NSString *_name;
}

@property (nonatomic, copy) id handler;
@property (nonatomic, copy) NSString *name;

+ (id)eventWithName:(id)arg1 handler:(id)arg2;

- (void)_execute;
- (void)dealloc;
- (id)description;
- (void)execute;
- (void)executeFromEventQueue;
- (id)handler;
- (bool)isEqualToEvent:(id)arg1;
- (id)name;
- (void)setHandler:(id)arg1;
- (void)setName:(id)arg1;

@end
