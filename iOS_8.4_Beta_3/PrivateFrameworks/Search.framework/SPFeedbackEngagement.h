/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackEngagement : SPFeedback {
    NSURL *_action_destination;
    NSString *_cardType;
    bool _engagementOnCard;
    bool _userReturnedToResultsList;
}

@property(assign,retain) NSURL * action_destination;
@property(assign,retain) NSString * cardType;
@property(assign,readwrite) bool engagementOnCard;
@property(assign,readwrite) bool userReturnedToResultsList;

- (id)action_destination;
- (id)cardType;
- (void)encodeWithCoder:(id)arg1;
- (bool)engagementOnCard;
- (id)initWithCoder:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2;
- (void)setAction_destination:(id)arg1;
- (void)setCardType:(id)arg1;
- (void)setEngagementOnCard:(bool)arg1;
- (void)setUserReturnedToResultsList:(bool)arg1;
- (bool)userReturnedToResultsList;

@end