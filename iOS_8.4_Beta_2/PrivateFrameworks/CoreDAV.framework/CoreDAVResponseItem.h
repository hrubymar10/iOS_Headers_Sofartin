/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVResponseItem : CoreDAVItem {
    CoreDAVErrorItem *_errorItem;
    NSMutableArray *_hrefs;
    CoreDAVItemWithHrefChildItem *_location;
    CoreDAVMatchResultsItem *_matchResults;
    NSMutableSet *_propStats;
    CoreDAVLeafItem *_responseDescription;
    CoreDAVLeafItem *_serverUID;
    CoreDAVLeafItem *_status;
}

@property(assign,retain) CoreDAVErrorItem * errorItem;
@property(assign,retain) NSMutableArray * hrefs;
@property(assign,retain) CoreDAVItemWithHrefChildItem * location;
@property(assign,retain) CoreDAVMatchResultsItem * matchResults;
@property(assign,retain) NSMutableSet * propStats;
@property(assign,retain) CoreDAVLeafItem * responseDescription;
@property(assign,retain) CoreDAVLeafItem * serverUID;
@property(assign,retain) CoreDAVLeafItem * status;

+ (id)copyParseRules;

- (void)addHref:(id)arg1;
- (void)addPropStat:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)errorItem;
- (id)firstHref;
- (bool)hasPropertyError;
- (id)hrefs;
- (id)init;
- (id)location;
- (id)matchResults;
- (id)propStats;
- (id)responseDescription;
- (id)serverUID;
- (void)setErrorItem:(id)arg1;
- (void)setHrefs:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMatchResults:(id)arg1;
- (void)setPropStats:(id)arg1;
- (void)setResponseDescription:(id)arg1;
- (void)setServerUID:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)successfulPropertiesToValues;

@end
