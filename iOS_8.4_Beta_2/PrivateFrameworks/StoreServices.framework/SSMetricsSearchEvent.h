/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property(assign,retain) id actionDetails;
@property(assign,retain) NSString * actionType;
@property(assign,retain) NSString * searchTerm;
@property(assign,retain) NSString * targetIdentifier;
@property(assign,retain) NSString * targetType;
@property(assign,retain) NSString * targetURL;

- (id)actionDetails;
- (id)actionType;
- (id)init;
- (id)searchTerm;
- (void)setActionDetails:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setLocationWithEventLocations:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setTargetType:(id)arg1;
- (void)setTargetURL:(id)arg1;
- (id)targetIdentifier;
- (id)targetType;
- (id)targetURL;

@end
