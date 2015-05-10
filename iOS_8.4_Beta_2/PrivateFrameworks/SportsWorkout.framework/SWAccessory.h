/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWAccessory : NSObject {
    NSString *_linkState;
    NSString *_searchState;
    NSString *_serialNumber;
    NSString *_transportType;
    SWVicFileLogger *_vicFileLogger;
}

@property(assign,readonly) NSString * linkState;
@property(assign,readonly) NSString * searchState;
@property(assign,readonly) NSString * serialNumber;
@property(assign,readonly) NSString * transportType;
@property(assign,retain) SWVicFileLogger * vicFileLogger;

- (void)beginLinking;
- (void)beginSearching;
- (void)cancelLinking;
- (void)cancelSearching;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)linkState;
- (id)searchState;
- (id)serialNumber;
- (void)setVicFileLogger:(id)arg1;
- (id)transportType;
- (void)unlink;
- (id)vicFileLogger;

@end
