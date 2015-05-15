/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDirectlyObservableObject : NSObject {
    NSArray *_observers;
}

@property(assign,retain) NSArray * observers;

- (void)_objectDidPostNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)informObserversOfNotification:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;

@end