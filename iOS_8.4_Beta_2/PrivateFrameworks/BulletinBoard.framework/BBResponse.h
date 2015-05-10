/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBResponse : NSObject <NSSecureCoding> {
    NSString *_actionID;
    long long _actionType;
    bool _activated;
    NSString *_bulletinID;
    NSString *_buttonID;
    NSDictionary *_context;
    BBAssertion *_lifeAssertion;
    NSArray *_lifeAssertions;
    NSString *_originID;
    NSString *_replyText;
    id _sendBlock;
    bool _sent;
}

@property(assign,copy) NSString * actionID;
@property(assign,readwrite) long long actionType;
@property(assign,readwrite) bool activated;
@property(assign,retain) NSString * bulletinID;
@property(assign,copy) NSString * buttonID;
@property(assign,copy) NSDictionary * context;
@property(assign,copy) NSArray * lifeAssertions;
@property(assign,copy) NSString * originID;
@property(assign,copy) NSString * replyText;
@property(assign,copy) id sendBlock;

+ (bool)supportsSecureCoding;

- (id)actionID;
- (long long)actionType;
- (bool)activated;
- (id)bulletinID;
- (id)buttonID;
- (id)context;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lifeAssertions;
- (id)originID;
- (id)replyText;
- (void)send;
- (id)sendBlock;
- (void)setActionID:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setActivated:(bool)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setButtonID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLifeAssertions:(id)arg1;
- (void)setOriginID:(id)arg1;
- (void)setReplyText:(id)arg1;
- (void)setSendBlock:(id)arg1;

@end
