/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageCriterion : NSObject {
    unsigned int _allCriteriaMustBeSatisfied;
    NSArray *_criteria;
    NSString *_criterionIdentifier;
    unsigned int _dateIsRelative;
    int _dateUnitType;
    NSString *_expression;
    bool _expressionIsSanitized;
    unsigned int _includeRelatedMessages;
    NSIndexSet *_libraryIdentifiers;
    NSString *_name;
    int _qualifier;
    NSArray *_requiredHeaders;
    int _type;
    NSString *_uniqueId;
    bool _useFlaggedForUnreadCount;
}

@property(assign,readwrite) bool expressionIsSanitized;
@property(assign,readwrite) bool includeRelatedMessages;
@property(assign,retain) NSIndexSet * libraryIdentifiers;
@property(assign,readwrite) bool useFlaggedForUnreadCount;

+ (id)ThreadNotifyMessageCriterion;
+ (id)VIPSenderMessageCriterion;
+ (void)_updateAddressComments:(id)arg1;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(bool)arg2;
+ (id)criterionForMailboxURL:(id)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)flaggedMessageCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)includesMeCriterion;
+ (id)messageIsDeletedCriterion:(bool)arg1;
+ (id)messageIsServerSearchResultCriterion:(bool)arg1;
+ (id)notCriterionWithCriterion:(id)arg1;
+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)stringForCriterionType:(int)arg1;
+ (id)todayMessageCriterion;
+ (id)unreadMessageCriterion;

- (id)SQLExpressionWithContext:(struct { id x1; id x2; unsigned int x3; unsigned int x4; bool x5; bool x6; bool x7; }*)arg1 depth:(unsigned int)arg2;
- (id)SQLExpressionWithTables:(unsigned int*)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(bool)arg3 contentIndex:(id)arg4 mailboxIDs:(id)arg5;
- (void)_addCriteriaSatisfyingPredicate:(int (*)arg1 toCollector:(id)arg2;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(bool)arg2 collapsedIndexes:(id*)arg3;
- (id)_criterionForSQL;
- (bool)_evaluateAccountCriterion:(id)arg1;
- (bool)_evaluateAddressBookCriterion:(id)arg1;
- (bool)_evaluateAddressHistoryCriterion:(id)arg1;
- (bool)_evaluateAttachmentCriterion:(id)arg1;
- (bool)_evaluateCompoundCriterion:(id)arg1;
- (bool)_evaluateDateCriterion:(id)arg1;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (bool)_evaluateFlagCriterion:(id)arg1;
- (bool)_evaluateFullNameCriterion:(id)arg1;
- (bool)_evaluateHeaderCriterion:(id)arg1;
- (bool)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (bool)_evaluateIsEncryptedCriterion:(id)arg1;
- (bool)_evaluatePriorityIsHighCriterion:(id)arg1;
- (bool)_evaluatePriorityIsLowCriterion:(id)arg1;
- (bool)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (bool)_evaluateSenderHeaderCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (id)_qualifierString;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (bool)allCriteriaMustBeSatisfied;
- (unsigned int)bestBaseTable;
- (id)criteria;
- (id)criteriaSatisfyingPredicate:(int (*)arg1;
- (id)criterionByApplyingTransform:(id)arg1;
- (id)criterionForSQL;
- (id)criterionIdentifier;
- (int)criterionType;
- (bool)dateIsRelative;
- (int)dateUnits;
- (void)dealloc;
- (id)description;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (bool)doesMessageSatisfyCriterion:(id)arg1;
- (id)emailAddressesForGroupCriterion;
- (id)expression;
- (bool)expressionIsSanitized;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (id)fixOnce;
- (bool)hasLibraryIDCriterion;
- (bool)hasNonFullTextSearchableCriterion;
- (unsigned long long)hash;
- (bool)includeRelatedMessages;
- (bool)includesCriterionSatisfyingPredicate:(int (*)arg1 restrictive:(bool)arg2;
- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(bool)arg2;
- (id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFullTextSearchableCriterion;
- (id)libraryIdentifiers;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)name;
- (int)qualifier;
- (void)setAllCriteriaMustBeSatisfied:(bool)arg1;
- (void)setCriteria:(id)arg1;
- (void)setCriterionIdentifier:(id)arg1;
- (void)setCriterionType:(int)arg1;
- (void)setDateIsRelative:(bool)arg1;
- (void)setDateUnits:(int)arg1;
- (void)setExpression:(id)arg1;
- (void)setExpressionIsSanitized:(bool)arg1;
- (void)setIncludeRelatedMessages:(bool)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualifier:(int)arg1;
- (void)setUseFlaggedForUnreadCount:(bool)arg1;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (bool)useFlaggedForUnreadCount;

@end