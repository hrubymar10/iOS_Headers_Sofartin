/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlistResponseBodyParser : NSObject <CKDResponseBodyParser> {
    id _objectParsedBlock;
    NSMutableData *_parserData;
    NSError *_parserError;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id objectParsedBlock;
@property(assign,retain) NSMutableData * parserData;
@property(assign,retain) NSError * parserError;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id)arg1;
- (id)objectParsedBlock;
- (id)parserData;
- (id)parserError;
- (void)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;
- (void)setParserData:(id)arg1;
- (void)setParserError:(id)arg1;

@end
