/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiStatusItem : CoreDAVItem {
    NSMutableArray *_orderedResponses;
    CoreDAVLeafItem *_responseDescription;
}

@property(assign,retain) NSMutableArray * orderedResponses;
@property(assign,retain) CoreDAVLeafItem * responseDescription;
@property(assign,readonly) NSSet * responses;

+ (id)copyParseRules;

- (void)addResponse:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)orderedResponses;
- (id)responseDescription;
- (id)responses;
- (void)setOrderedResponses:(id)arg1;
- (void)setResponseDescription:(id)arg1;

@end
