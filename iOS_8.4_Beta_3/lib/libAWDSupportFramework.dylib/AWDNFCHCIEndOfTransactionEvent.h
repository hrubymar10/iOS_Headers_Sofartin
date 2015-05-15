/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {
    NSData *_aid;
    NSData *_cdi;
    unsigned int _command;
    unsigned int _commandStatus;
    unsigned int _currencyCode;
    unsigned int _cvm;
    struct { 
        unsigned int iad : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int transactionTotal : 1; 
        unsigned int command : 1; 
        unsigned int commandStatus : 1; 
        unsigned int currencyCode : 1; 
        unsigned int cvm : 1; 
        unsigned int informative : 1; 
        unsigned int msc : 1; 
        unsigned int transactionStatus : 1; 
        unsigned int version : 1; 
    } _has;
    unsigned long long _iad;
    unsigned int _informative;
    NSData *_maid;
    NSData *_maidDeprecated;
    NSData *_mcii;
    unsigned int _msc;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_transactionId;
    unsigned int _transactionStatus;
    unsigned long long _transactionTotal;
    NSData *_uuidReference;
    unsigned int _version;
}

@property(assign,retain) NSData * aid;
@property(assign,retain) NSData * cdi;
@property(assign,readwrite) unsigned int command;
@property(assign,readwrite) unsigned int commandStatus;
@property(assign,readwrite) unsigned int currencyCode;
@property(assign,readwrite) unsigned int cvm;
@property(assign,readonly) bool hasAid;
@property(assign,readonly) bool hasCdi;
@property(assign,readwrite) bool hasCommand;
@property(assign,readwrite) bool hasCommandStatus;
@property(assign,readwrite) bool hasCurrencyCode;
@property(assign,readwrite) bool hasCvm;
@property(assign,readwrite) bool hasIad;
@property(assign,readwrite) bool hasInformative;
@property(assign,readonly) bool hasMaid;
@property(assign,readonly) bool hasMaidDeprecated;
@property(assign,readonly) bool hasMcii;
@property(assign,readwrite) bool hasMsc;
@property(assign,readwrite) bool hasTimeDeltaFromReference;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readonly) bool hasTransactionId;
@property(assign,readwrite) bool hasTransactionStatus;
@property(assign,readwrite) bool hasTransactionTotal;
@property(assign,readonly) bool hasUuidReference;
@property(assign,readwrite) bool hasVersion;
@property(assign,readwrite) unsigned long long iad;
@property(assign,readwrite) unsigned int informative;
@property(assign,retain) NSData * maid;
@property(assign,retain) NSData * maidDeprecated;
@property(assign,retain) NSData * mcii;
@property(assign,readwrite) unsigned int msc;
@property(assign,readwrite) unsigned long long timeDeltaFromReference;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,retain) NSData * transactionId;
@property(assign,readwrite) unsigned int transactionStatus;
@property(assign,readwrite) unsigned long long transactionTotal;
@property(assign,retain) NSData * uuidReference;
@property(assign,readwrite) unsigned int version;

- (id)aid;
- (id)cdi;
- (unsigned int)command;
- (unsigned int)commandStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currencyCode;
- (unsigned int)cvm;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAid;
- (bool)hasCdi;
- (bool)hasCommand;
- (bool)hasCommandStatus;
- (bool)hasCurrencyCode;
- (bool)hasCvm;
- (bool)hasIad;
- (bool)hasInformative;
- (bool)hasMaid;
- (bool)hasMaidDeprecated;
- (bool)hasMcii;
- (bool)hasMsc;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasTransactionId;
- (bool)hasTransactionStatus;
- (bool)hasTransactionTotal;
- (bool)hasUuidReference;
- (bool)hasVersion;
- (unsigned long long)hash;
- (unsigned long long)iad;
- (unsigned int)informative;
- (bool)isEqual:(id)arg1;
- (id)maid;
- (id)maidDeprecated;
- (id)mcii;
- (void)mergeFrom:(id)arg1;
- (unsigned int)msc;
- (bool)readFrom:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setCdi:(id)arg1;
- (void)setCommand:(unsigned int)arg1;
- (void)setCommandStatus:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setCvm:(unsigned int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasCommandStatus:(bool)arg1;
- (void)setHasCurrencyCode:(bool)arg1;
- (void)setHasCvm:(bool)arg1;
- (void)setHasIad:(bool)arg1;
- (void)setHasInformative:(bool)arg1;
- (void)setHasMsc:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransactionStatus:(bool)arg1;
- (void)setHasTransactionTotal:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIad:(unsigned long long)arg1;
- (void)setInformative:(unsigned int)arg1;
- (void)setMaid:(id)arg1;
- (void)setMaidDeprecated:(id)arg1;
- (void)setMcii:(id)arg1;
- (void)setMsc:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionStatus:(unsigned int)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)transactionId;
- (unsigned int)transactionStatus;
- (unsigned long long)transactionTotal;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
