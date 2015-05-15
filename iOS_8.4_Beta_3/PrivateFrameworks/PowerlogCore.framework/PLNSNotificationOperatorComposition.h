/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLNSNotificationOperatorComposition : NSObject {
    NSArray *_notificationNames;
    id _observer;
    PLOperator *_operator;
    id _operatorBlock;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,readonly) NSString * notificationName;
@property(assign,retain) NSArray * notificationNames;
@property(assign,retain) id observer;
@property(assign,readwrite) PLOperator * operator;
@property(assign,copy) id operatorBlock;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(id)arg3;
- (id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(id)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(id)arg3;
- (id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(id)arg3;
- (void)listenForNotifications:(bool)arg1;
- (void)notificationCallback:(id)arg1;
- (id)notificationName;
- (id)notificationNames;
- (id)observer;
- (id)operator;
- (id)operatorBlock;
- (void)setNotificationNames:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
